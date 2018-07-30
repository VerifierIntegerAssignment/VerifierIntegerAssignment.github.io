#include <assert.h>


int _strcmp( int src[1000] , int dst[1000] ) {
  int i = 0;
  while ( i < 1000 ) {
    if( dst[i] != src[i] ) return 1;
    i = i + 1;
  }
  return 0;
}
int main( ) {
  int a[1000];
  int b[1000];
  int c = _strcmp( a , b );
  if ( c == 0 ) {
    int x;
    for ( x = 0 ; x < 1000 ; x++ ) {
      assert( a[x] == b[x] );
    }
  }
  return 0;
}
