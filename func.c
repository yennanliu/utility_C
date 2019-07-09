#include <stdio.h>
 
/* function declaration */
int max(int num1, int num2);
int addition(int num1, int num2);

 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
   int ret;
   int ret_;
 
   /* calling a function to get max value */
   ret = max(a, b);

   ret_ = addition(a, b);

   printf( "# max function demo");
   printf( "Max value is : %d\n", ret );

   printf( "# add function demo");
   printf( "Sum value is : %d\n", ret_ );
 
   return 0;
}
 
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}

int addition(int num1, int num2){

   int result;
   result = num1 + num2;
   return result; 

}