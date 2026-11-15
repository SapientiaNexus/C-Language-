#include <stdio.h>
    int binarysearch(int a[], int n, int data){
        int l=0, r=n-1;
        int mid = (l+r)/2;
        while(l<=r){
            if(a[mid]==data){
                return mid;
            }
            else if(a[mid]<data){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
            mid = (l+r)/2;
        }
        return -1;
    }
    int main()
{
    int n,i,data;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter the element to be searched: ");
    scanf("%d", &data);
    int result = binarysearch(a, n, data);
    if(result == -1){
        printf("element not found");
    }
    else{
        printf("element found at index %d", result);
    }
    return 0;
}