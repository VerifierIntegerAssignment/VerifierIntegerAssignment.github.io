#include <assert.h>



int main ( ) {
  int a [1000];
  int b [1000];
  int incr = 0;
  int i = 0;
  while ( i < 1000 ) {
    a[i] = 42;
    i = i + 1;
  }
  for ( i = 0 ; i < 1000 ; i++ ) {
    b[i] = a[i];
  }
  for ( i = 0 ; i < 1000 ; i++ ) {
    b[i] = b[i] + incr;
  }
  int x;
  for ( x = 0 ; x < 1000 ; x++ ) {
    assert( b[x] == 42 + incr );
  }
  return 0;
}
