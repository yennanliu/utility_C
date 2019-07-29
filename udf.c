#include <stdio.h>

int my_func1()
{
    printf("this is user defined func1 \n");
}

int my_func2(int n)
{ 
    printf("this is ser defined func2 \n");
    printf("int n =  %d\n", n);
}

int my_func3(int i, int j)
{ 
	int result; 
	result = i + j; 
    printf("this is ser defined func3 \n");
    printf("result  =  %d\n", result);
}

int main()

{
 my_func1();
 my_func2(3);
 my_func3(1,9);
 printf("this is main func \n" );

}