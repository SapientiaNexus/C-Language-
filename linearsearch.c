#include <stdio.h>
int main()
{
    int n,i;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==42){
            printf("element found at index %d",i);
            break;
        }
    }
    if(i==n){
        printf("element not found");
    }
    return 0;
}