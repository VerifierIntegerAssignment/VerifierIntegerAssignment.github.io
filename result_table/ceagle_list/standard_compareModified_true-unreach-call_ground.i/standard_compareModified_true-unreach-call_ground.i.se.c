#include <assert.h>


int main( ) {
  int a[1000];
  int b[1000];
  int i = 0;
  int c [1000];
  int rv = 1;
  while ( i < 1000 ) {
    if ( a[i] != b[i] ) {
      rv = 0;
    }
    c[i] = a[i];
    i = i+1;
  }
  int x;
  if ( rv ) {
    for ( x = 0 ; x < 1000 ; x++ ) {
      assert( a[x] == b[x] );
    }
  }
  for ( x = 0 ; x < 1000 ; x++ ) {
    assert( a[x] == c[x] );
  }
  return 0;
}
