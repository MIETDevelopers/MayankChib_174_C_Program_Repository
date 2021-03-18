#include<stdio.h>

int main(){
	
	float radiusOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;
	scanf("%f %f %f %f", &radiusOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);
	
	printf("Area of Circle: %f",((22*radiusOfCircle*radiusOfCircle)/7));
	
	printf("\nPerimeter of Circle: %f",((2*22*radiusOfCircle)/7));
	
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
	
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));
	
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));
	
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));
	
	return 0;
}