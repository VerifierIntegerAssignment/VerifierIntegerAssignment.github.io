#include <assert.h>


int main( ) {
  int a[100000];
  int b[100000];
  int i = 0;
  int rv = 1;
  while ( i < 100000 ) {
    if ( a[i] != b[i] ) {
      rv = 0;
    }
    i = i+1;
  }
  if ( rv ) {
    int x;
    for ( x = 0 ; x < 100000 ; x++ ) {
      assert( a[x] == b[x] );
    }
  }
  return 0;
}
