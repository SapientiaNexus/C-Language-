#include <stdio.h>
int main(){
    int x,y;
    printf ("Enter the age from which the person is eligible to watch the movie: ");
    scanf ("%d",&x);
    printf ("Enter the age of the person: ");
    scanf ("%d",&y);
    y>=x ? printf ("The person is eligible to watch the movie") : printf ("The person is not eligible to watch the movie");
    return 0;
}