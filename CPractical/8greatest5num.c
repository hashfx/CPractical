#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("Enter 5 Numbers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    if (a>b && a>c && a>d && a>e)
    {
        printf("a is Greater\n");   
    }
    else if (b>a && b>c && b>d && b>e)
    {
        printf("b is Greater\n");
    }
    else if (c>a && c>b && c>d && c>e)
    {
        printf("c is Greater\n");
    }
    else if (d>a && d>b && d>c && d>e)
    {
        printf("d is Greater\n");
    }
    else
    {
        printf("e is Greater\n");
    }
    
}