#include<stdio.h>
void main()
{   
    int n, r, sum = 0, i;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        r = n % i;
        if (r == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("%d is a Perfect Number", n);
    }
    else
    {
        printf("%d is not a Perfect Number", n);
    }
    
    
}
