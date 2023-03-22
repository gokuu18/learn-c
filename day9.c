#include<stdio.h>
#define PI 3.14
int main()
{
    const float b =7.333;
    // b = 7.22;     //cannont do this as it's already defined in constant
    // PI = 7.33;  //cannont do this as it's already defined in constant

    //printf(" this %f", b);
    printf("%f", PI);

    /*
    //minus adds the gap later on
    printf("the value of b is %-9.4f this\n", b);
    //normally it adds gap before
    printf("the value of b is %10.4f this\n", b);
    */

     printf(" tab character \t my backslash \\ alarm \a ");
         printf("alarm \a ");
             printf(" alarm \a ");
    
    return 0;
}