#include <stdio.h>
void square(int* num) {
    *num = (*num) * (*num);
}
int main(){
    int number ;
    printf("Enter a number to find the square:\n");
    scanf("%d",&number);
    square(&number);
    printf("The square is = %d",number);
}