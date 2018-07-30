#include <assert.h>



int main ( ) {
  int a[100000];
  int marker = 0;
  int pos = 0;
  if ( pos >= 0 && pos < 100000 ) {
    a[ pos ] = marker;
    int i = 0;
    while( a[ i ] != marker ) {
      i = i + 1;
    }
    assert( i <= pos );
  }
  return 0;
}
