//Binary Search tree

class Node {
    constructor(data = null, left = null, right = null) {
        this.data = data;
        this.left = left;
        this.right = right;
    }
} 

class Bst {
    constructor() {
        this.root = null;
    }
    //add method
    add(data) {
       const node = this.root;
       if(node == null) {
           this.root = new Node(data);
           return;
       }
       else {      //search
           const searchTree=function (node) {
               if(data < node.data) {
                   if(node.left == null) {
                       node.left = new Node(data);
                       return;
                   }
                   else{
                       searchTree(node.left);
                   }
               }
               else if(data > node.data) {
                   if(node.right == null) {
                       node.right = new Node(data);
                       return;
                   }
                   else {
                       searchTree(node.right);
                   }
               }
               else{
                   return null;
               }
           };
           return searchTree(node);
        }
    }
    //find max
    findMax() {
        let node = this.root;
        while(node.right !== null) {
            node = node.right;
        }
        return node.data;
    }
    //find min
    findMin() {
        let node = this.root;
        while(node.left !== null) {
            node = node.left;
        }
        return node.data;
    }
    //find data
    find(data) {
        let node = this.root;
        while(node) {
            if(data < node.data) {
                node=node.left;
            }
            else if(data > node.data) {
                node = node.right;
            }
            else if(data == node.data ) {
                return node;
            }
        }
        return null;
    }
    //is present
    isPresent(data) {
        let node = this.root;
        while(node) {
            if(data < node.data) {
                node=node.left;
            }
            else if(data > node.data) {
                node = node.right;
            }
            else if(data == node.data ) {
                return true;
            }
        }
        return false;
    }
    //remove method
    remove(data) {
        const removeNode = function(node,data) {
            if(node == null) {
                return null;
            }
            if(node.data == data) {
                //only one node
                if(node.left == null) {
                    return node.right;
                }
                if(node.right == null) {
                    return node.left;
                }
                var tempNode = node.right;
                while(tempNode.left != null) {
                    tempNode = tempNode.left;
                }
                node.data = tempNode.data;
                node.right = removeNode(node.right,tempNode.data);
                return node;
            }
            else if(node.data < data) {
                node.right = removeNode(node.right,data);
                return node;
            }
            else {
                node.left = removeNode(node.left,data);
                return node;
            }
        } 
        this.root = removeNode(this.root,data); 
    }
}


var a = new Bst();
a.add(8);
a.add(3);
a.add(14);
a.add(1);
a.add(6);
a.add(4);
a.add(7);

console.log(a.findMax());
console.log(a.findMin());
console.log(a.isPresent(4));
a.remove(3);
console.log(a);