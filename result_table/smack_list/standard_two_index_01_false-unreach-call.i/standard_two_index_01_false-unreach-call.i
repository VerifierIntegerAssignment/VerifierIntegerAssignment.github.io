extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
int main()
{
  int a[10000];
  int b[10000];
  int i = 0;
  int j = 0;
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
 __VERIFIER_assert( a[j] != b[j] );
        i = i+1;
        j = j+1;
  }
  return 0;
}