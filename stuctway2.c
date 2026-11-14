#include <stdio.h>
   struct Student {
    char name[50];
    int age;
    float marks; 
};
int main(){
    struct Student person1, person2, person3, person4;
    printf("Enter your name, age and marks of student:\n");
    scanf("%s %d %f",person1.name,&person1.age,&person1.marks);
    printf("Enter your name, age and marks of student:\n");
    scanf("%s %d %f",person2.name,&person2.age,&person2.marks);
    printf("Enter your name, age and marks of student:\n");
    scanf("%s %d %f",person3.name,&person3.age,&person3.marks);
    printf("Enter your name, age and marks of student:\n");
    scanf("%s %d %f",person4.name,&person4.age,&person4.marks);
    printf("Name: %s\n",person1.name);
    printf("Age: %d\n",person1.age);
    printf("Marks: %.2f\n",person1.marks);
    printf("Name: %s\n",person2.name);
    printf("Age: %d\n",person2.age);
    printf("Marks: %.2f\n",person2.marks);
    printf("Name: %s\n",person3.name);
    printf("Age: %d\n",person3.age);
    printf("Marks: %.2f\n",person3.marks);
    printf("Name: %s\n",person4.name);
    printf("Age: %d\n",person4.age);
    printf("Marks: %.2f\n",person4.marks);
}