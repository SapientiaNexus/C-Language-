#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf ("Enter your name \n");
    fgets(name, 100, stdin);
    name[strlen(name)-1] = 0; 

    while(strlen(name) == 0)
    {
        printf("You have not entered a name. Please enter your name: \n");
        fgets(name, 100, stdin);
        name[strlen(name)-1] = 0; 
    }
    printf("Hello, %s!.\n", name);
}