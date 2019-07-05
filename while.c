#include <stdio.h>
int main(void)
{
	printf("while demo 1) \n");
	int i=1;
	int sum=0;
	while( i<=100 )
	{
		sum+=i;
		i++;
	}
	printf("%d\n",sum);

	printf("while demo 2)");
	int a=1; 
	int b=5;
	while ( a!= b){

	printf("a : %d\n", a );
	printf("b : %d\n", b);
	printf("--> a != b \n");
	a+=1;
	}
	printf("a=b");
}