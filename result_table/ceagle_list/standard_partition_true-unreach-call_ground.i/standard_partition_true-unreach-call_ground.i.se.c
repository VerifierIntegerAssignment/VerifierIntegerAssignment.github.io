#include <assert.h>


int main( ) {
  int A[100000];
  int a = 0;
  int b = 0;
  int c = 0;
  int B[100000];
  int C[100000];
  while( a < 100000 ) {
    if( A[ a ] >= 0 ) {
      B[ b ] = A[ a ];
      b = b + 1;
    }
    a = a + 1;
  }
  a = 0;
  while( a < 100000 ) {
    if( A[ a ] < 0 ) {
      C[ c ] = A[ a ];
      c = c + 1;
    }
    a = a + 1;
  }
  int x;
  for ( x = 0 ; x < b ; x++ ) {
    assert( B[ x ] >= 0 );
  }
  return 0;
}
