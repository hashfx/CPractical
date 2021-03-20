#include <stdio.h>
#include <math.h>

void main()
{
    int n, r, num, On;
    n = 0;

    float res = 0.0;

    printf("Enter an Integer: ");
    scanf("%d", &num);

    On = num;

    for (On = num; On != 0; ++n)
    {
        On /= 10;
    }

    for (On = num; On != 0; On /= 10)
    {
        r = On % 10;
        res += pow(r, n);
    }
    if ((int)res == num)
    {
        printf("%d is an Armstrong Number", num);
    }
    else
    {
        printf("%d is not an Armstrong Number", num);
    }
}