#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    
    printf("Enter 2nd Number: ");
    scanf("%d",&b);

    if (a<b)
    {
        printf("2nd Number is Greater\n");
    }
    if (a>b)
    {
        printf("1st Number is Greater\n");
    }
}