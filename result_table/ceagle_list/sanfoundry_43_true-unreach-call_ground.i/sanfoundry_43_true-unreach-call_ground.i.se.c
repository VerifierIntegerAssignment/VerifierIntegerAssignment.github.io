#include <assert.h>


void incrementArray(int src[1000] , int dst[1000])
{
    int i;
    for (i = 0; i < 1000; i++) {
        dst[i] = src[i]+1;
    }
}
int main()
{
    int src[1000];
    int dst[1000];
    incrementArray( src , dst );
    int x;
    for ( x = 0 ; x < 1000 ; x++ ) {
      src[ x ] = dst[ x ]-1;
    }
  return 0;
}
