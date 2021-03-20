#include<stdio.h>
void main()
{
    int num1, num2, product, num3;
    printf("Enter 1st Number: ");
    scanf("%d",&num1);
    printf("Enter 2nd Number: ");
    scanf("%d",&num2);
    printf("Enter 3rd Number: ");
    scanf("%d",&num3);
    product = num1 * num2 * num3;
    printf("Multiplication of %d, %d and %d is %d", num1,num2,num3,product);
}