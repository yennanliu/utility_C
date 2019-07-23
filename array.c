#include <stdio.h>
 
int main () {

   int n[ 10 ]; /* n is an array of 10 integers */
   int i,j;
 
   /* demo 1) initialize elements of array n to 0 */         
   for ( i = 0; i < 10; i++ ) {
      n[ i ] = i + 100; /* set element at location i to i + 100 */
   }
   
   /* demo 2) output each array element's value */
   for (j = 0; j < 10; j++ ) {
      printf("Element[%d] = %d\n", j, n[j] );
   }

   /* demo 3) 2 D array */
   int abc[5][4] ={
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11},
            {12,13,14,15},
            {16,17,18,19}
            };

   for (int k=0; k<=4 ; k++)
   {
      /*printf("%d \n",abc[k]); */
      printf("%p \n",abc[i]);
   }

   /* demo 4) 2D array input demo */
   /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
   int x, y;
   for(x=0; x<2; x++) {
      for(y=0;y<3;y++) {
         printf("Enter value for disp[%d][%d]:", x, y);
         scanf("%d", &disp[x][y]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(x=0; x<2; x++) {
      for(y=0;y<3;y++) {
         printf("%d ", disp[x][y]);
         if(y==2){
            printf("\n");
         }
      }
   }
   return 0;
}
