#include<stdio.h>
void main()
{
    int m, n, i, p, flag = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    m = n/2;

    for (i = 2; i <= m; i++)
    {
        if (n%i == 0)
        {
            printf("%d is not a Prime Number",n);
            printf("\n %d times %d is %d" ,i, n/i, n);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("%d is Prime Number",n);
    }
}