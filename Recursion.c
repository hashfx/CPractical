#include <stdio.h>

long int factorial_recursion(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial_recursion(n - 1));
    }
}

long int factorial_iteration(int m)
{
    int i, fact = 1;
    for (i = 1; i <= m; i++) 
        fact = fact * i;
        return fact;
}

int main()
{
    int n, m;
    printf("Enter Number: ");
    scanf("%d", &n);
    printf("The Factorial of %d using Recursion is %ld\n", n, factorial_recursion(n));

    printf("Enter Number2: ");
    scanf("%d", &m);
    printf("The Factorial of %d using Iteration is %ld\n", m, factorial_iteration(m));
    return 0;


}