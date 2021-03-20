#include<stdio.h>
void main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;
    
    for (i = 0; i < 3; i++) // row[3]
    {
        for (j = 0; j < 3; j++) // column[3]
        {
            printf("%d  ", arr[i][j]);
        }    
        printf("\n");
    }   
    
}
