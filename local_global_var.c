#include <stdio.h>
 
/* global variable declaration */
int g;

int main () {

  /* local variable declaration */
  int a, b;
  int c;
 
  /* actual initialization */
  a = 10;
  b = 20;

  c = a + b;
  printf ("(local vars) value of a = %d, b = %d and c = %d\n", a, b, c);
 
  g = a*b; 
  printf ("(global vars) value of a = %d, b = %d and g = %d\n", a, b, g);

  return 0;
}