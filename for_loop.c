#include <stdio.h>
int main {
    int i; // for loop runs count 
    int inputNum; // save current number 
    int sum = 0; // save current sum 
    for (i = 1; i <= 5; i++) { // this loop will run 5 times 
        printf("Please Input Number %d: ",i); // msg user to input a number 
        scanf("%d", &inputNum); // read intefer into inputNum
        sum = sum + inputNum; // sun up to inputNum
    }
    printf("Sum is %d, average is %lf\n", sum, (double)sum / 5); // print the output
}
