#include <assert.h>


int main()
{
    int array[100000];
    int i;
    int largest = array[0];
    for (i = 1; i < 100000; i++)
    {
        if (largest < array[i])
            largest = array[i];
    }
    int x;
    for ( x = 0 ; x < 100000 ; x++ ) {
      assert( largest >= array[ x ] );
    }
    return 0;
}
