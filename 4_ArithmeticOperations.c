#include <stdio.h>
int main() {

	int num1, num2, sum, subtraction, multiplication, remainder;
	scanf("%d %d", &num1, &num2 );

	sum=num1+num2;
	printf("The sum of two number=%d\n", sum);

	subtraction=num1-num2;
	printf("The subtraction of two number=%d\n", subtraction);

	multiplication=num1*num2;
	printf("The multiplication of two number=%d\n", multiplication);

	remainder=num1%num2;
	printf("The remainder of two number=%d\n", remainder);
}