#include <assert.h>


int main( ) {
  int a[100000];
  int max = 0;
  int i = 0;
  while ( i < 100000 ) {
    if ( a[i] > max ) {
      max = a[i];
    }
    i = i + 1;
  }
  int x;
  for ( x = 0 ; x < 100000 ; x++ ) {
    assert( a[x] <= max );
  }
  return 0;
}
