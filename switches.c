#include <stdio.h>
int main()
{
    int day ;
    printf("enter a number between 1 to 7 to known the day of the week\n");
    scanf("%d", &day);
    switch (day)
    {
        case 1:
            printf("It isMonday\n");
            break;
        case 2:
            printf("It is Tuesday\n");
            break;
        case 3:
            printf("It isWednesday\n");
            break;
        case 4:
            printf("It is Thursday\n");
            break;
        case 5:
            printf("It isFriday\n");
            break;
        case 6:
            printf("It is Saturday\n");
            break;
        case 7:
            printf("It is Sunday\n");
            break;
        default:
            printf("Please enter the number between 1 and 7\n");
    }
}