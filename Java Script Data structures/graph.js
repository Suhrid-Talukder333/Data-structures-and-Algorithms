//three repesentations

//1 list representation or adjacency list;

// 1 - 2 - 3
//this can be seen as 3 nodes which are connected and represenring an undirected graph

//in js we can represent it as follows
let adjList = [
    [1], //node 0 here 1 means it is connected with node 1
    [0,2], //node 1 here 0 and 2 means it is connected with node 0 and node 2
    [1] //node 2 here 1 means that it is connected with node 1
];

//2 matrix representation

//1 - 2 - 3
let adjMatrix = [
    [0,1,0],
    [1,0,1],
    [0,1,0]
]; //here the rows are the nodes and the different values represent if they are connected or not. if value is 1 than
//they are connected else if it is 0 than that means they are not connected

// 1 -> 2 <- 3
let adjMatrixdirected = [
    [0,1,0],
    [0,0,0],
    [0,1,0]
]//this here is also an adjacency matrix where 1 means that an edge is pointing from the row node to the column node

//3 incidence matrix representation
// 1-2-3
let incedentMatrix = [
    [1,0],
    [1,1],
    [0,1]
] //in this representation every is a node and every columb reprent edges and if any row has a 1 value in column
//than it means it is connected to that edge;

//directed incident Matrix
// 1 -> 2 -> 3
let directedIncMatrix = [
    [1,0],
    [-1,1],
    [0,-1]
];// here if there is value 1 than it means an edge is going outwards and if there is a -1 value than it means
//an edge is inwards and if it is 0 than it means that columned edge is not connected to that node