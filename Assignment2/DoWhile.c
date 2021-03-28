//Name: Mayank Chib
//Program: Program to add numbers until the user enters zero

#include<stdio.h>   //Pre-process directive to include standard input and output functions header file 

int main()     //Main function
{
    double number, sum = 0;

    // the body of the loop is executed at least once
    do
    {
        printf("Enter a number: "); //printf function calling
        scanf("%lf", &number);  //scanf function calling
        sum += number;
    }
    while(number != 0.0);

    printf("Sum = %.2lf",sum);  //printf function calling

    return 0;//return function
}