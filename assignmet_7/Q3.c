#include<stdio.h>
/*Write a function to calculate the sum of elements in the given row. Write another function to
calculate the sum of elements in the given column.*/

int sum_row(int a[2][2], int row)
{
    int sum = 0;

    for(int j=0;j<2;j++)
    {
        sum = sum + a[row][j];
    }

    return sum;
}

int sum_col(int a[2][2], int col)
{
    int sum = 0;

    for(int i=0;i<2;i++)
    {
        sum = sum + a[i][col];
    }

    return sum;
}

int main()
{
    int arr[2][2];
    int row, col;

    printf("Enter matrix elements:\n");

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter row number (0 or 1): ");
    scanf("%d",&row);

    printf("Enter column number (0 or 1): ");
    scanf("%d",&col);

    printf("Sum of row %d = %d\n",row,sum_row(arr,row));
    printf("Sum of column %d = %d\n",col,sum_col(arr,col));

    return 0;
}
