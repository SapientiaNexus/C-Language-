#include <stdio.h>
void square(int x){
    int y = x*x;
    printf("The square of %d is %d\n", x, y);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    square(num);
    return 0;
}