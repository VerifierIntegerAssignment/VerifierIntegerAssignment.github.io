#include <assert.h>


int main ( ) {
  int a [1000];
  int i = 0;
  while ( i < 1000 ) {
    a[i] = 42;
    i = i + 1;
  }
  i = 0;
  while ( i < 1000 ) {
    a[i] = 43;
    i = i + 1;
  }
  i = 0;
  while ( i < 1000 ) {
    a[i] = 44;
    i = i + 1;
  }
  i = 0;
  while ( i < 1000 ) {
    a[i] = 45;
    i = i + 1;
  }
  int x;
  for ( x = 0 ; x < 1000 ; x++ ) {
    assert( a[x] == 46 );
  }
  return 0;
}
