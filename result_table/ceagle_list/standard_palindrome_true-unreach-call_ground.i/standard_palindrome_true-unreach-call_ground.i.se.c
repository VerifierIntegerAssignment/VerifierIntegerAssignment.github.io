#include <assert.h>


int main( ) {
  int A[100000];
  int i;
  for (i = 0; i < 100000/2 ; i++ ) {
    A[i] = A[100000 -i-1];
  }
  int x;
  for ( x = 0 ; x < 100000/2 ; x++ ) {
    assert( A[x] == A[100000 - x - 1] );
  }
  return 0;
}
