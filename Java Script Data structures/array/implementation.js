class MyArray {
  constructor() {
    this.size = 0;
    this.data = {};
  }
  // get(index) to look up items property in index
  get(index) {
    return this.data[index];
  }

  //push(item) to push items to back of the data
  push(item) {
    this.data[this.size] = item;
    this.size++;
  }

  //pop() to remove item from the back of the data
  pop() {
    const lastItem = this.data[this.size - 1];
    delete this.data[this.size - 1];
    this.size--;
    return lastItem;
  }

  //getSize() to get the size of array
  getSize() {
    return this.size;
  }

  //isEmpty() to return a bolean if the container is empty or not
  isEmpty() {
    return this.size == 0 ? true : false;
  }

  //shift(index) to shift all the items starting from index to leftside
  shift(index) {
    for (let i = index; i < this.size; i++) {
      this.data[i] = this.data[i + 1];
    }
    delete this.data[this.size - 1];
    this.size--;
  }
  //unshift(index) to shift all the items starting from index to rightside
  unshift(index) {
    this.size++;
    for (let i = this.size - 1; i >= index; i--) {
      this.data[i] = this.data[i - 1];
    }
  }
  //remove(index) to remove the indexed item from the array
  remove(index) {
    if (index >= this.size) {
      return;
    }
    this.shift(index);
  }
}

const newArray = new MyArray();

newArray.push(10);
newArray.push(20);
newArray.push(30);
newArray.remove(1);
console.log(newArray);
