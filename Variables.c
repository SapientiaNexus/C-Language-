#include <stdio.h>
#include <stdbool.h>
int main()
{int age=22;
    float height=5.3;
printf("That person's age is %d and",age);
printf(" her height is %.1f",height);
    char grade='A';
    int number=1;
    printf("\nThe grade he obtained in English essay is %c%d",grade,number);
    char name[] = "veruca";
    printf (" and her name is %s",name);
bool isonline=true;
    printf("\nIs she online?\n");
    if(isonline)
    {
        printf("Yes, she is online");
    }
    else
    {
        printf("No, she is not online");
    }
    return 0;
}
