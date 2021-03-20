#include<stdio.h>
void main()
{

    int x[5] = {10, 20, 30, 40, 50};
    int i, max;
    
    max = x[0];

    for (i = 1; i < 5; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
        
    }
    
    printf("Greatest element of array is %d", max);


}