#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("you have entered %d as your age \n", age);

    if (age>=18) {
        printf("You can vote!");
    }
    
    else if (age<10) {
        printf("You are not even a teenager!\n");
        printf("Baadmein aana lavde!");
    }
    
    else if (age>=10) {
        printf("You are a teenager vote for kids!\n");
    }
    
    /*
    else if (age>=50) {
        printf("MARJA BHUDDHE DHARTI PE BOJJ!!!!\n");
    }
    */               // not working because if value is greater than 18 is already defined
    
    else  {
        printf("You cannot vote!");
    }
    
    return 0;
}
