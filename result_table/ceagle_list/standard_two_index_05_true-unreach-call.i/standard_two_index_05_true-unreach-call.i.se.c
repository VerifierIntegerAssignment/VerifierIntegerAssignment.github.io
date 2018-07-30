#include <assert.h>



int main( )
{
  int a[100000];
  int b[100000];
  int i = 0;
  int j = 0;
  while( i < 100000 )
  {
	b[i] = 0;
    i = i+1;
  }

  i = 1;
  while( i < 100000 )
  {
 a[j] = b[i];
        i = i+5;
        j = j+1;
  }
  i = 1;
  j = 0;
  while( i < 100000 )
  {
 assert( a[j] == b[5*j+1] );
        i = i+5;
        j = j+1;
  }
  return 0;
}
