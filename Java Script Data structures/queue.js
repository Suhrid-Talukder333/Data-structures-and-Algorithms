//queue

var queue = function () {
  this.storage = [];
  //enqueue method to add items to the back
  this.enqueue = function (value) {
    this.storage.push(value);
  };
  //dequeue method to remove items from the front
  this.dequeue = function () {
    this.storage.shift();
  };
  //peek
  this.peek = function () {
    return this.storage[0];
  };
  //size
  this.size = function () {
    return this.storage.length;
  };
  //is empty or not
  this.isEmpty = function () {
    return this.size() == 0;
  };
};

var a = new queue();
a.enqueue(1);
a.enqueue(2);
console.log(a.peek());
a.dequeue();
console.log(a.size());
console.log(a.isEmpty());
a.dequeue();
console.log(a.size());
