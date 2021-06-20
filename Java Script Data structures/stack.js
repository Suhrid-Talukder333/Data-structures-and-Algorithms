//stack

//example palindrom checker

function isPalindrom(string) {
  let arr = [];
  let radd = "";
  for (let i = 0; i < string.length; i++) {
    arr.push(string[i]);
  }
  for (let i = arr.length - 1; i >= 0; i--) {
    radd += arr.pop();
  }

  if (radd === string) {
    console.log("palindrom");
  } else {
    console.log("not Palindrom");
  }
}

//Stack object creation

var Stack = function () {
  this.index = 0;
  this.storage = {};
  //methods
  //push method
  this.push = function (value) {
    this.storage[this.index] = value;
    this.index++;
  };
  //pop method
  this.pop = function () {
    if (this.index == 0) {
      return undefined;
    }
    this.index--;
    let deleted = this.storage[this.index];
    delete this.storage[this.index];
    return deleted;
  };
  //size method
  this.size = function () {
    return this.index;
  };
  //peek method
  this.peek = function () {
    return this.storage[this.index - 1];
  };
};

let a = new Stack();
a.push(1);
console.log(a.peek());
a.push(2);
console.log(a.peek());
a.pop();
console.log(a);
console.log(a.size());
a.push("freecodecamp");
console.log(a.peek());
console.log(a);
