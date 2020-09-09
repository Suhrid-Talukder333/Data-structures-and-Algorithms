#include<iostream>
#include<cmath>
using namespace std;
int prime[10001];

int setBit( int n, int position )
{
    n = n | ( 1 << position );
    return n;
}

bool checkBit( int n, int position )
{
    return n & ( 1 << position );
}

void primeGenerator( int n )
{
    int x = sqrt( n );
    prime[0] = setBit( prime[0], 0 );
    prime[0] = setBit( prime[0], 1 );
    for( int i = 4; i <= n; i += 2 )
       prime[ i >> 5 ] = setBit( prime[ i >> 5 ], i & 31 );
    for( int i = 3; i <= x; i += 2 ) {
       if( !checkBit( prime[ i >> 5 ], i & 31 ) ){
          for( int j = i+i; j <= n; j += i )
             prime[ j >> 5 ] = setBit( prime[ j >> 5 ], j & 31 );
        }
    }
    return;
}

int main()
{
    int n,k;
    cin>>n>>k;
    primeGenerator(n);
    cout<<checkBit(prime[10001],k);
}
