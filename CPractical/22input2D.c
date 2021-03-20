#include<stdio.h>
void main()
{
    int arr[2][3];
    int i, j;
    
    for (i = 0; i < 2; i++) // row[3]
    {
        for (j = 0; j < 3; j++) // column[3]
        {
            scanf("%d", &arr[i][j]);
        }    
        // printf("\n");
    }   
    
    for (i = 0; i < 2; i++) // row[3]
    {
        for (j = 0; j < 3; j++) // column[3]
        {
            printf("%d  ", arr[i][j]);
        }    
        printf("\n");
    }   

    
}
