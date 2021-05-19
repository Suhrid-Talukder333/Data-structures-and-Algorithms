//linked  list implementation

function linkedList() {
        var head = null;
        var length = 0;

        var node = function(data) {
            this.data = data;
            this.next = null;
        }   
    //size 
    this.size = function() {
        return length;
    }
    //head
    this.head = function() {
        return head;
    }  
    //add method
    this.add = function(data) {
        let result;
        let newnode = new node(data);
        if(head === null) {
            head = newnode;
        }
        else {
            let current = head;
            while(current.next) {
                current = current.next;
            }
            current.next = newnode;
            result = newnode.data;
        }
        length++;
        return console.log(result);
    }
    //remove method
    this.remove = function(data) {
        let current = head;
        let previous;
        if(head.data == data) {
            head = current.next;
        }
        else {
            while(current.data != data) {
                previous = current;
                current = current.next;
            }
            previous.next = current.next;
        }
    }
    //is empty method
    this.isEmpty = function() {
        return length == 0;
    }
    //find index of data method
    this.indexOf = function(data) {
        let index= 0;
        if(head == data) {
            return index;
        }
        else {
            let current = head;
            while(current) {
                if(current.data == data) {
                    return index;
                }
                else {
                    index++;
                    current = current.next;
                }
            }
            return -1;
        }
    }
    //element at method
    this.elementAt = function(value) {
        let current = head;
        let index = 0;
        while(value > index) {
            index++;
            current = current.next;
        }
        return current.data;
    }
    //add at function
    this.addAt = function(value,data) {
        let current = head;
        
        let index = 0;
        if(value < index) {
            return null;
        }
        while(index < value) {
            current = current.next;
        }
        let next = current.next;
        let newnode = new node(data);
        current.next = newnode;
        newnode.next = next;
        length++;
    }
    //remove at method
    this.removeAt = function(value) {
        let current = head;
        let previous;
        let result;
        let index = 0;
        if (index < 0 || index >= length){
            return null
        }
        if(value == 0) {
            result = head.data;
            head = current.next;
            length--;
            return result;
        }
        while(index < value) {
            index++;
            previous = current;
            current = current.next;
        }
        result = current.data;
        previous.next = current.next;
        length--;
        return result;
    }
};

var a = new linkedList();
a.add('kitten');
a.add('puppy');
a.add('dog');
a.add('cat');
a.add('fish');
console.log(a.size());
console.log(a.removeAt(3));
console.log(a.elementAt(3));
console.log(a.indexOf('puppy'));
console.log(a.size());
