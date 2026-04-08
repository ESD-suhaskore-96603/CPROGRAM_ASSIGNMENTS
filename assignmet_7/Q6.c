#include<stdio.h>
#include<stdlib.h>

int** allocate_matrix(int r, int c)
{
    int **mat;

    mat = (int**)malloc(r * sizeof(int*));

    for(int i=0;i<r;i++)
    {
        mat[i] = (int*)malloc(c * sizeof(int));
    }

    return mat;
}

void free_matrix(int **mat, int r)
{
    for(int i=0;i<r;i++)
    {
        free(mat[i]);
    }

    free(mat);
}

int main()
{
    int r = 3, c = 3;

    int **matrix = allocate_matrix(r,c);

    printf("Enter elements:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nMatrix:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    free_matrix(matrix,r);

    return 0;
}
