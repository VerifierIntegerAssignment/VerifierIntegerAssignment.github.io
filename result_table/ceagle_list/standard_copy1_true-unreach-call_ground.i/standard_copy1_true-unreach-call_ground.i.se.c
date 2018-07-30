#include <assert.h>



int main( ) {
  int a1[100000];
  int a2[100000];
  int a;
  for ( a = 0 ; a < 100000 ; a++ ) {
      a1[a] = 0;
  }
  int i;
  for ( i = 0 ; i < 100000 ; i++ ) {
    a2[i] = a1[i];
  }
  int x;
  for ( x = 0 ; x < 100000 ; x++ ) {
    assert( a1[x] == a2[x] );
  }
  return 0;
}
