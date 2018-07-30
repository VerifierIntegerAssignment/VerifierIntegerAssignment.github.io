#include <assert.h>


int main( )
{
  int a[100000];
  int b[100000];
  int i = 1;
  int j = 0;
  while( i < 100000 )
  {
 a[j] = b[i];
        i = i+7;
        j = j+1;
  }
  i = 1;
  j = 0;
  while( i < 100000 )
  {
 assert( a[j] != b[7*j+1] );
        i = i+7;
        j = j+1;
  }
  return 0;
}
