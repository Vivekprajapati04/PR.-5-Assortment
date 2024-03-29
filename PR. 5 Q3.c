#include <stdio.h>

int main()
{
    int n;

    printf("Enter the array's row & column size= ");
    scanf("%d", &n);

    
    int a[n][n],i,j;

    
    printf("\nEnter array's elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
	 for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
           
        }
        printf("\n");
    }
    
    printf("\nThe transpose matrix of an array:\n");
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    
}