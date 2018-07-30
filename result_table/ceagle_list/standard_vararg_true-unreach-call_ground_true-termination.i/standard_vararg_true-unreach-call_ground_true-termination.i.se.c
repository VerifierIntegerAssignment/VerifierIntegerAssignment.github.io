#include <assert.h>


int main( ){
  int aa [100000];
  int a = 0;
  while( aa[a] >= 0 ) {
    a++;
  }
  int x;
  for ( x = 0 ; x < a ; x++ ) {
    assert( aa[x] >= 0 );
  }
  return 0;
}
