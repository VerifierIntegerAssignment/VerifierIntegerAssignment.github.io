

int ReadFromPort();
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int(void);

int SIZE;

int main()
{
 SIZE = __VERIFIER_nondet_int();
 if(SIZE > 1)
 {
  int i;
  int value;
  int a[SIZE];
  int DEFAULTVAL = 0;
  int FIXEDVAL = 10;

  if(SIZE % 3 != 0) { return 1; }

  __VERIFIER_assume(SIZE % 3 == 0);
  for (i = 1 ; i <= SIZE/3 ; i++)
  {
   value = ReadFromPort();
   if(value != DEFAULTVAL)
   {
    a[i*3 - 3] = value ;
   }
   else
   {
    a[i*3 - 3] = FIXEDVAL;
   }

   value = ReadFromPort();
   if(value != DEFAULTVAL)
   {
    a[i*3 - 2] = value ;
   }
   else
   {
    a[i*3 - 2] = FIXEDVAL;
   }

   value = ReadFromPort();
   if(value != DEFAULTVAL)
   {
    a[i*3 - 1] = value ;
   }
   else
   {
    a[i*3 - 1] = FIXEDVAL;
   }
  }

  for ( i = 0; i < SIZE; i++)
  {
   __VERIFIER_assert(a[i]!=DEFAULTVAL);
  }
 }
 return 1;
}
