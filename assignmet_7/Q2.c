#include<stdio.h>
void accept(int a[3][3])
{
		for(int i=0;i<3;i++)
		{
				for(int j=0;j<3;j++)
				{
						printf("Enter the num a[%d][%d]\n",i,j);
						scanf("%d",&a[i][j]);
				}
		}
}

void print(int a[3][3])
{
		for(int i=0;i<3;i++)
		{
				for(int j=0;j<3;j++)
				{
						printf("%d ",a[i][j]);
				}
				printf("\n");
		}
}

void sum(int arr1[3][3],int arr2[3][3])
{
		int res[3][3];
		for(int i=0;i<3;i++)
		{
				for(int j=0;j<3;j++)
				{
						res[i][j]=arr1[i][j]+arr2[i][j];
						printf("%d ",res[i][j]);
				}
				printf("\n");
		}
}


void sub(int arr1[3][3],int arr2[3][3])
{
		int res[3][3];
		for(int i=0;i<3;i++)
		{
				for(int j=0;j<3;j++)
				{
						res[i][j]=arr1[i][j]-arr2[i][j];
						printf("%d ",res[i][j]);
				}
				printf("\n");
		}
}

void multiply(int a[3][3], int b[3][3])
{
    int c[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j] = 0;

            for(int k=0;k<3;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResult Matrix:\n");

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
int main()
{

		int arr1[3][3];
		int arr2[3][3];
		accept(arr1);
		accept(arr2);
		sum(arr1,arr2);
		sub(arr1,arr2);
        multiply(arr1,arr2);


		return 0;
}

