#include<stdio.h>
void main()
{
    int num;
    for ( num = 1; num <= 7; num++)
    {
        if (num == 5)
        {
            printf("Break...");
            break;
        }
        printf("%d\n",num);
        
    }
        
}