#include<stdio.h>

int main()
{
    int a;
    int b;
    
    printf("Have you passed science?");
    scanf("%d", &a);

    printf("Have you passed Math?");
    scanf("%d", &a);

    if (a&&b) {
        printf("You have passed Science and Maths test!\n"); 
        printf("You will get 45rs Gift!");
    }

    else if (a=1)  {
        printf("You have passed Science!\n");
        printf("You Will get 15rs Gift!");
    }
    
   else if (a=0)  {
        printf("You have passed math!\n");
        printf("You will get 15rs Gift");
    }
    
    return 0;
}
