#include <assert.h>


int main ( ) {
  int a[100000];
  int b[100000];
  int i = 0;
  while ( i < 100000 ) {
    if ( a[i] >= 0 ) b[i] = 1;
    else b[i] = 0;
    i = i + 1;
  }
  int f = 1;
  i = 0;
  while ( i < 100000 ) {
    if ( a[i] >= 0 && !b[i] ) f = 0;
    if ( a[i] < 0 && b[i] ) f = 0;
    i = i + 1;
  }
  assert ( f );
  return 0;
}
