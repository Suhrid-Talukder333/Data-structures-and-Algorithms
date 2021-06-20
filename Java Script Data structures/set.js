//set
var set = function () {
  this.storage = [];
  //has method
  this.has = function (value) {
    return this.storage.indexOf(value) !== -1;
  };
  //return values
  this.value = function () {
    return this.storage;
  };
  //add method
  this.add = function (value) {
    //we have to see if exists or not
    if (!this.has(value)) {
      this.storage.push(value);
    }
  };
  //remove method
  this.remove = function (value) {
    if (this.has(value)) {
      let index = this.storage.indexOf(value);
      console.log(index);
      this.storage.slice(1);
      console.log(this.storage);
      return true;
    }
  };
  //return size method
  this.size = function () {
    return this.storage.length;
  };
  //this method will return the union of two set
  this.union = function (otherSet) {
    let newSet = new set();
    this.storage.forEach(function (value) {
      newSet.add(value);
    });
    let other = otherSet.value();
    other.forEach(function (value) {
      newSet.add(value);
    });
    return newSet;
  };
  //this method will return a new set which has values which are same on both the sets
  this.difference = function (otherSet) {
    let newSet = new set();
    this.storage.forEach(function (value) {
      if (otherSet.has(value)) {
        newSet.add(value);
      }
    });
    return newSet;
  };
  //method to know if given set is a subset
  this.subset = function (otherSet) {
    return this.storage.every(function (value) {
      return otherSet.has(value);
    });
  };
};

var a = new set();
a.add(1);
var b = new set();
b.add(2);
b.add(1);
console.log(a.union(b));
console.log(a.difference(b));
console.log(a.value());
console.log(b.remove(1));
console.log(b.value());
console.log(a.subset(b));
