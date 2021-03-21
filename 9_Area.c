//Name: Mayank Chib
//Program Purpose: To find out area of Circle, Rectangle and Square based on user choice

#include <stdio.h>        //Pre-process directive to include standard input and output functions header file
void main ()
{
      int choice, radius, length ,base, breadth, height;
      float area;
      printf("Input 1 for area of circle\n");     //printf function calling
      printf("Input 2 for area of rectangle\n");     //printf function calling
      printf("Input 3 for area of triangle\n");     //printf function calling
      printf("Input your choice : ");     //printf function calling
      scanf("%d",&choice);    //scanf function calling
      switch(choice)           //using switch to select between shapes
      {
           case 1:
                 printf("Input radious of the circle : ");     //printf function calling
                 scanf("%d",&radius);   //scanf function calling
                 area=3.14* radius* radius;
                 break;
            case 2:
                  printf("Input length and width of the rectangle : ");     //printf function calling
                  scanf("%d%d", &length, &breadth);   //scanf function calling
                  area=length*breadth;
                  break;
            case 3:
                  printf("Input the base and hight of the triangle :");     //printf function calling
                  scanf("%d%d", &base, &height);      //scanf function calling
                  area=.5*base*height;
                  break;
          }
          printf("The area is : %f\n",area);     //printf function calling
        }