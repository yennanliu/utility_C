#include <stdio.h>

int main()
{
    int i;
    int j = 10;

    printf("for loop\n");
    for( i = 0; i <= j; i ++ )
    {
       printf("Hello %d\n", i );
    }

    printf("for loop with if condition\n");
    for( i = 0; i <= j; i ++ )
    {  if ( i < 5 )
    	{
       printf("Hello %d\n", i );
    	}
      else 
       { printf("too big \n" ); }
    }
}
