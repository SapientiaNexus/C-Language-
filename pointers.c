#include <stdio.h>
int main()
{
    int age =2;
    printf("%p",&age);
    int* prt = &age;
    printf("\n%d",prt);
}