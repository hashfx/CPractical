#include<stdio.h>
void main()
{

    int x[5] = {10, 20, 30, 40, 50};
    int i, min;
    
    min = x[0];

    for (i = 1; i < 5; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
        
    }
    
    printf("Smallest element of array is %d", min);


}