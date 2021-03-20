#include<stdio.h>
void main()
{
    int num;
     for ( num = 1; num <= 7; num++)
    {
        if (num == 5)
        {
            printf("Continue...\n");
            continue;
        }
        printf("%d\n",num);
        
    }
}