#include <assert.h>


int main( ) {
  int a[100000];
  int min = 0;
  int i = 0;
  while ( i < 100000 ) {
    if ( a[i] < min ) {
      min = a[i];
    }
    i = i + 1;
  }
  int x;
  for ( x = 0 ; x < 100000 ; x++ ) {
    assert( a[x] >= min );
  }
  return 0;
}
