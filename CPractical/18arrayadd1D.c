#include<stdio.h>
void main()
{
    int i, n, sum=0;
    int arr[n];
    
    printf("Size of array: ");
    scanf("%d",&n);

    printf("Enter %d elements of array:\n ",n);


    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }

    printf("Sum of array is %d",sum);
}
