#include <stdio.h>
int main()
{
int x,y;
printf("Enter two numbers: ");
scanf("%d %d", &x, &y);
switch(x>y){
    case 1 :
        printf("%d is the max \n", x);
        break;
    case 0 :
    
}
switch(x==y){
    case 1 :
        printf("both are equal\n");
        break;
    case 0 :
        
}
switch(x<y){
    case 1 :
        printf("%d is the max \n",y);
        break;
    case 0 :
}
}