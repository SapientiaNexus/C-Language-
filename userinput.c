#include <stdio.h>
int main()
{
    int age;
float GPA;
char name[44]="";

printf("enter your age: ");
    scanf(" %d",&age);

    printf("enter your GPA: ");
    scanf(" %f",&GPA);

    getchar(); // to consume the newline character left by scanf
    printf("enter your name: ");
    fgets(name,44,stdin);
    
printf("your age is %d",age);
printf("\nyour GPA is %.1f",GPA);
printf("\nyour name is %s",name);
}
