#include <stdio.h>                         //pre-processor statement

int main()                                //special function
{
    int a, b;                             //variable declaration

    printf("Enter number a: \n");         //printf is function
    scanf("%d", &a);                      //scanf is function

    printf("Enter number b: \n");         //printf is function
    scanf("%d", &b);                      //%d, &a are symbols

    //code to add a + b
    printf("the sum is %d \n", a + b);

    return 0;                              //0 is constant
}
