#include <assert.h>



int main()
{
  int a[10000];
  int b[10000];
  int i = 0;
  int j = 0;
  while( i < 10000 )
  {
	b[i] = 0;
    i = i+1;
  }
  i = 0;
  while( i < 10000 )
  {
 a[j] = b[i];
        i = i+1;
        j = j+1;
  }
  i = 0;
  j = 0;
  while( i < 10000 )
  {
 assert( a[j] == b[j] );
        i = i+1;
        j = j+1;
  }
  return 0;
}
