//bfs implementation

var bfs = function(matrix,root) {
    var dist = {};
    for(var i=0 ;i<matrix.length; i++) {
        dist[i] = Infinity;
    }
    dist[root] = 0;
    var queue = [root];
    var current ;
    while(queue.length != 0) {
        current = queue.shift();

        var neighbor = [];
        var curConnected = matrix[current];
        var idx = curConnected.indexOf(1);
        while(idx != -1) {
            neighbor.push(idx);
            idx = curConnected.indexOf(1,idx+1);
        }

        for(var j=0; j<neighbor.length; j++) {
            if(dist[neighbor[j]] == Infinity) {
                dist[neighbor[j]] = dist[current] + 1;
                queue.push(neighbor[j]);
            }
        }
    }
    return dist;
}

let matrix = [
    [0, 1, 1, 1, 0],
    [0, 0, 1, 0, 0],
    [1, 1, 0, 0, 0],
    [0, 0, 0, 1, 0],
    [0, 1, 0, 0, 0]
];

console.log(bfs(matrix,1));