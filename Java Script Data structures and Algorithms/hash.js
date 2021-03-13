//hash implementation

//hash function this can be implemented in many way and many logics
function hash(string,max) {
    let number = 0;
    for(let i=0; i<string.length; i++) {
        number += string.charCodeAt(i);
    }
    return number % max;
}

class hashTable {
    constructor(limit = 5) {
        this.storage = [];
        this.limit = limit;
    }
    print() {
        return console.log(this.storage);
    }
    //add
    add(key,value) {
        let index = hash(key,this.limit);
        if(this.storage[index] == undefined) {
            this.storage[index] = [
                [key,value]
            ];
        }
        else {
            let inserted = false;
            for(let i=0; i<this.storage[index].length; i++) {
                if(this.storage[index][i][0] == key) {
                    this.storage[index][i][1]==value;
                    inserted = true;
                }
            }
            if(inserted) {
                this.storage[index].push(key,value);
            }
        }
    }
    //remove
    lookup(key) {
        let index = hash(key,this.limit);
        if(this.storage[index] == undefined) {
            return null;
        }
        else{
            for(let i=0; i<this.storage[index].length; i++) {
                if(this.storage[index][i][0] == key) {
                    return this.storage[index][i][1];
                }
            }
        }
    }
}

var a = new hashTable();
a.add('bau','asdsad');
a.print();
console.log(a.lookup('bau'));