#include<stdio.h>
void main()
{
    int arr[4];
    int i;
    
    printf("Enter 4 elements of array: \n");

    for (i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n Array elements are: \n");

    for (i = 0; i < 4; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
}
