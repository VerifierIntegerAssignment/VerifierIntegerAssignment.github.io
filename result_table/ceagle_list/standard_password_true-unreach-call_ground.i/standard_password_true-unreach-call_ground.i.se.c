#include <assert.h>


int main( ) {
  int password[ 100000 ];
  int guess[ 100000 ];
  int i;
  int result = 1;
  for ( i = 0 ; i < 100000 ; i++ ) {
    if ( password[ i ] != guess[ i ] ) {
      result = 0;
    }
  }
  if ( result ) {
    int x;
    for ( x = 0 ; x < 100000 ; x++ ) {
      assert( password[ x ] == guess[ x ] );
    }
  }
  return 0;
}
