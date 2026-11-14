#include <stdio.h>
int main()
{
    int age[9];
    printf("Enter the ages of the 1st person:\n");
     scanf("%d", &age[0]);
    printf("Enter the ages of the 2nd person:\n");
     scanf("%d", &age[1]);
    printf("Enter the ages of the 3rd person:\n");
    scanf("%d", &age[2]);
    printf("Enter the ages of the 4th person:\n");
    scanf("%d", &age[3]);
    printf("Enter the ages of the 5th person:\n");
    scanf("%d", &age[4]);
    printf("Enter the ages of the 6th person:\n"); 
    scanf("%d", &age[5]);
    printf("Enter the ages of the 7th person:\n");
    scanf("%d", &age[6]);
    printf("Enter the ages of the 8th person:\n");
    scanf("%d", &age[7]);
    printf("Enter the ages of the 9th person:\n");
    scanf("%d", &age[8]);
    printf("Enter the ages of the 10th person:\n");
    scanf("%d", &age[9]);
    printf("The ages of the 10 persons are:\n");
    for (int i = 0; i < 10; i++){
     if (age[i] >= 18)
        {
        printf("The %d person can vote.\n", i + 1);
    }
    else{
        printf("The %d person cannot vote.\n", i + 1);
    
    } }
}