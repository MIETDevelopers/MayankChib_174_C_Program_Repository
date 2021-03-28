//Name: Mayank Chib
//Program:Student structure should contain, name, marks in different subjects, attendance percentage, Roll Number

#include <stdio.h>  //Pre-process directive to include standard input and output functions header file
struct student {
    char name[50];
    int roll;
    float marks;
} s;

int main() {
    //This will read the user input.
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    //This will print the user input.
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

    return 0;  //return function
}