#include<stdio.h>
void main()
{
    int num;

    for (num = 2; num <= 100; num+2)
    {
        printf("%d\n",num);
        num = num+2;
    }
}