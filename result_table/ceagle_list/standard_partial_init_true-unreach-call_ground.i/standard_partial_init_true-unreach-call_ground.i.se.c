#include <assert.h>


int main ( ) {
  int A[ 100000 ];
  int B[ 100000 ];
  int C[ 100000 ];
  int i;
  int j = 0;
  for (i = 0; i < 100000 ; i++) {
    if ( A[i] == B[i] ) {
      C[j] = i;
      j = j + 1;
    }
  }
  int x;
  for ( x = 0 ; x < j ; x++ ) {
    assert( C[x] <= x + i - j );
  }
  for ( x = 0 ; x < j ; x++ ) {
    assert( C[x] >= x );
  }
  return 0;
}
