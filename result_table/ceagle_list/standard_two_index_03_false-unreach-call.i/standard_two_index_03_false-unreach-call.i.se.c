#include <assert.h>


int main( )
{
  int a[10000];
  int b[10000];
  int i = 1;
  int j = 0;
  while( i < 10000 )
  {
 a[j] = b[i];
        i = i+3;
        j = j+1;
  }
  i = 1;
  j = 0;
  while( i < 10000 )
  {
 assert( a[j] != b[3*j+1] );
        i = i+3;
        j = j+1;
  }
  return 0;
}
