#include<stdio.h>

int sumofelements(int a[], int size){
    int total = 0;
    int size2 = sizeof(a)/sizeof(a[0]);//this will not be the same as size because when array is passed into function it is done by call by reference but only the 
    //pointer to the first element is. So the sizeof a is only going to be the size of one element
    for(int i=0; i<size; i++) {
        total+=a[i];
    }
    return total;
}

int main() {
    int a[5]={1,2,3,4,5};
    int size= sizeof(a)/sizeof(a[0]);//the first sizeof gives the total bytes of array a and the second one gives the size of only one element
    //if we divide the whole array size with one element size then we will get the numbers of elements in the array
    printf("%d",sumofelements(a,size));
}