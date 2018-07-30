#include <assert.h>


int main( ) {
  int a[1000];
  int b[1000];
  int i;
  for( i = 0 ; i < 1000 ; i++ ) {
    b[i] = a[1000 -i-1];
  }
  int x;
  for ( x = 0 ; x < 1000 ; x++ ) {
    assert( a[x] == b[1000 -x-1] );
  }
  return 0;
}
