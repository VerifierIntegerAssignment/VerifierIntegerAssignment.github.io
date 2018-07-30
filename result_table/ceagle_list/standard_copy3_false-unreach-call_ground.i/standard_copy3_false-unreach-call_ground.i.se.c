#include <assert.h>



int main( ) {
  int a1[1000];
  int a2[1000];
  int a3[1000];
  int a4[1000];
  int a;
  for ( a = 0 ; a < 1000 ; a++ ) {
    a1[a] = 0;
    a3[a] = 0;
  }
  int i;
  for ( i = 0 ; i < 1000 ; i++ ) {
    a2[i] = a1[i];
  }
  for ( i = 0 ; i < 1000 ; i++ ) {
    a4[i] = a2[i];
  }
  for ( i = 0 ; i < 1000 ; i++ ) {
    a4[i] = a3[i];
  }
  int x;
  for ( x = 0 ; x < 1000 ; x++ ) {
    assert( a1[x] == a4[x] );
  }
  return 0;
}
