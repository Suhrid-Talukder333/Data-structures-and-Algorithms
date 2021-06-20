//height and traversal of bst

class Node {
  constructor(data = null, left = null, right = null) {
    this.data = data;
    this.left = left;
    this.right = right;
  }
}

class BST {
  constructor() {
    this.root = null;
  }
  add(data) {
    const node = this.root;
    if (node == null) {
      this.root = new Node(data);
      return;
    } else {
      //search
      const searchTree = function (node) {
        if (node.data < data) {
          if (node.right == null) {
            node.right = new Node(data);
            return;
          } else {
            searchTree(node.right);
          }
        } else if (node.data > data) {
          if (node.left == null) {
            node.left = new Node(data);
            return;
          } else {
            searchTree(node.left);
          }
        } else {
          return null;
        }
      };
      return searchTree(node);
    }
  }
  findMaxHeight(node = this.root) {
    if (node == null) {
      return -1;
    }
    let left = this.findMaxHeight(node.left);
    let right = this.findMaxHeight(node.right);
    if (left > right) {
      return left + 1;
    } else {
      return right + 1;
    }
  }
  findMinheight(node = this.root) {
    if (node == null) {
      return -1;
    }
    let left = this.findMinheight(node.left);
    let right = this.findMinheight(node.right);
    if (left < right) {
      return left + 1;
    } else {
      return right + 1;
    }
  }
  inOrderTraverse() {
    if (this.root == null) {
      return -1;
    }
    let result = [];
    const inTraverse = function (node) {
      node.left && inTraverse(node.left);
      result.push(node.data);
      node.right && inTraverse(node.right);
      return result;
    };
    return inTraverse(this.root);
  }
  preOrderTraverse() {
    if (this.root == null) {
      return -1;
    }
    let result = [];
    const preTraverse = function (node) {
      result.push(node.data);
      node.left && preTraverse(node.left);
      node.right && preTraverse(node.right);
      return result;
    };
    return preTraverse(this.root);
  }
  postOrderTraverse() {
    if (this.root == null) {
      return -1;
    }
    let result = [];
    const postTraverse = function (node) {
      node.left && postTraverse(node.left);
      node.right && postTraverse(node.right);
      result.push(node.data);
      return result;
    };
    return postTraverse(this.root);
  }
  levelOrderTraverse() {
    let result = [];
    let q = [];
    if (this.root == null) {
      return -1;
    }
    if (this.root != null) {
      q.push(this.root);
      while (q.length > 0) {
        let node = q.shift();
        result.push(node.data);
        if (node.left != null) {
          q.push(node.left);
        }
        if (node.right != null) {
          q.push(node.right);
        }
      }
      return result;
    }
  }
}

var a = new BST();
a.add(1);
a.add(0);
a.add(2);
a.add(3);
a.add(5);
a.add(4);
console.log(a);
console.log(a.findMaxHeight());
console.log(a.findMinheight());
console.log(a.inOrderTraverse());
console.log(a.preOrderTraverse());
console.log(a.postOrderTraverse());
console.log(a.levelOrderTraverse());
