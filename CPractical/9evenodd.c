#include<stdio.h>
void main()
{
    int num;
    
    printf("Enter an Integer: ");
    scanf("%d",&num);

    if (num % 2 == 0)
    {
        printf("%d is Even\n",num);
    }
    else
    {
        printf("%d is Odd\n",num);
    }
}