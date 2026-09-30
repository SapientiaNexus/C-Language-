#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a: \n");
    scanf("%d",&a);
    printf("enter the value of b: \n");
    scanf("%d",&b);
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<=b;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}