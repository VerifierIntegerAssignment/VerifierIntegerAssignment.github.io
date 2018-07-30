#include <assert.h>


int main( ) {
  int a[ 1000 ];
  int i = 0;
  int x;
  int y;
  while ( i < 1000 ) {
    int k = i + 1;
    int s = i;
    while ( k < 1000 ) {
      if ( a[k] < a[s] ) {
        s = k;
      }
      k = k+1;
    }
    if ( s != i ) {
      int tmp = a[s];
      a[s] = a[i];
      a[i] = tmp;
    }
    for ( x = 0 ; x < i ; x++ ) {
      for ( y = x + 1 ; y < i ; y++ ) {
        assert( a[x] <= a[y] );
      }
    }
    for ( x = 0 ; x < 1000 ; x++ ) {
      assert( a[x] >= a[i] );
    }
    i = i+1;
  }
  for ( x = 0 ; x < 1000 ; x++ ) {
    for ( y = x + 1 ; y < 1000 ; y++ ) {
      assert( a[x] <= a[y] );
    }
  }
  return 0;
}
