#include <assert.h>



int main ( ) {
  int a[100000]; int e = 0;
  int i = 0;
  while( i < 100000 && a[i] != e ) {
    i = i + 1;
  }
  int x;
  for ( x = 0 ; x < i ; x++ ) {
    assert( a[x] != e );
  }
  return 0;
}
