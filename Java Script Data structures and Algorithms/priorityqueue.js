//priority queue

var priorityQueue = function () {
    this.storage = [];
    //console log
    this.log = function() {
        return this.storage;
    }
    //is empty method
    this.isEmpty = function() {
        return this.storage.length == 0;
    }
    //enqueue method
    this.enqueue = function (value) {
        if(this.isEmpty()) {
            this.storage.push(value);
        }
        else {
            let added = false; 
            for(let i=0; i<this.storage.length; i++) {
                if(value[1] < this.storage[i][1]) {
                    added = true;
                    this.storage.splice(i,0,value);
                    break;
                }
            }
            if(!added) {
                this.storage.push(value);
            }
        }
    }
    //dequeue method
    this.dequeue = function () {
      this.storage.shift();  
    }
    //peek
    this.peek = () => this.storage[0];
    //size
    this.size = () => this.storage.length;
}

var a = new priorityQueue();
a.enqueue(["john",1]);
a.enqueue(["adam",3]);
a.enqueue(["sad",2]);
console.log(a.log());
a.dequeue();
console.log(a.log());