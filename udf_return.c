#include <stdio.h>

int main () {

  /* local variable declaration in main function */
  int a = 10;
  int b = 20;
  int c = 0;
  int d = 0;

  printf ("a = %d\n",  a);
  printf ("b = %d\n",  b);
  c = sum( a, b);
  printf ("value sum = %d\n",  c);
  d = product( a, b);
  printf ("value product = %d\n",  d);
  c_hello();

  return 0;
}

int sum(int a, int b) 
{
  return a + b;
}

int product(int a, int b) 
{
   return a * b;
}


// char *c_hello() {
//   char *mystr = "Hello World!\n";
//   return mystr;
//   // return "this string";  // alterative
// }
