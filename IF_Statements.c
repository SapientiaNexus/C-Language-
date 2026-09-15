#include <stdio.h>
int main()
{
    int age = 0;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age>=65)
    {
        printf("you are a senior citizen\n");
    }
    else if (age>=18)
    {
        printf("You are an adult\n");
    }
    else if (age>=13 && age<18)
    {
        printf("You are an teenager\n");
    }
    else{
     printf("You are a minor\n");
    }

    }
    

