#include <stdio.h>
void main ()
{
      int choice, radius, length ,base, breadth, height;
      float area;
      printf("Input 1 for area of circle\n");
      printf("Input 2 for area of rectangle\n");
      printf("Input 3 for area of triangle\n");
      printf("Input your choice : ");
      scanf("%d",&choice);
      switch(choice)
      {
           case 1:
                 printf("Input radious of the circle : ");
                 scanf("%d",&radius);
                 area=3.14* radius* radius;
                 break;
            case 2:
                  printf("Input length and width of the rectangle : ");
                  scanf("%d%d", &length, &breadth);
                  area=length*breadth;
                  break;
            case 3:
                  printf("Input the base and hight of the triangle :");
                  scanf("%d%d", &base, &height);
                  area=.5*base*height;
                  break;
          }
          printf("The area is : %f\n",area);
}