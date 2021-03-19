#include<stdio.h>

int main()
{
    int n,i;
    float c,big;

    printf("Enter the number of elements you wish to find the greatest element of: ");
    scanf("%d", &n);
    printf("\nEnter %d numbers : ", n);

    printf("\nElement 1: ");

    //Important step- always initialize big to the first element
    scanf("%f", &big);

    for(i = 2; i <= n; i++)
    {
        printf("\nElement %d  : ", i);
        scanf("%f", &c);
        /* 
            if input number is larger than the 
            current largest number
        */
        if(big < c)  
            big = c;    // update big to the larger value
    }

    printf("\nThe largest of the %d numbers is  %f ", n, big);
    return 0;
}