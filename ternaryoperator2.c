#include <stdio.h>
int main()
{
    char operator = ' ';
    int x;
    int y;
    printf ("Enter the operator (+ or -): ");
    scanf ("%c",&operator);
    printf ("Enter the first number: ");
    scanf ("%d",&x);    
    printf ("Enter the second number: ");
    scanf ("%d",&y);
    operator == '+' ? printf ("The sum of the two numbers is: %d", x+y) : printf ("The difference of the two numbers is: %d", x-y);
    return 0;
}