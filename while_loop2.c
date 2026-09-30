#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool isrunning=true;
    char choice;
    while(isrunning)
    {
        printf("You are playing a game. Do you want to continue? (Y = yes, N = no): ");
        scanf(" %c", &choice);
        if(choice=='Y' || choice=='y')
        {
            printf("You chose to continue playing the game.\n");
        }
        else if(choice=='N' || choice=='n')
        {
            printf("You chose to stop playing the game.\n");
            isrunning=false;
        }
        else
        {
            printf("Invalid choice. Please enter Y or N.\n");
        }
    }
}
