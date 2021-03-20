#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    while (num<100)
    {
        printf("%d",num);
        num = num+1;
    }
    
    return 0;
}
