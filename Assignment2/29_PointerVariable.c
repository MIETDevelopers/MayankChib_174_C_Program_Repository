//Name: Mayank Chib
//Program: pointer variable initialization with the address of another variable
#include<stdio.h>     //Pre-process directive to include standard input and output functions header file 

int main()            //Main function 

{
   //Variable declaration
   int num = 10;

   //Pointer declaration
   int *p;

   //Assigning address of num to the pointer p
   p = &num;

   printf("Address of variable num is: %p", p);
   return 0;
}