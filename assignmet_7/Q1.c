#include<stdio.h>
void accept(int a[3][2])
{
		for(int i=0;i<3;i++)
		{
				for(int j=0;j<2;j++)
				{
						printf("Enter the num a[%d][%d]\n",i,j);
						scanf("%d",&a[i][j]);
				}
		}
}

void print(int a[3][2])
{
		for(int i=0;i<3;i++)
		{
				for(int j=0;j<2;j++)
				{
						printf("%d ",a[i][j]);
				}
				printf("\n");
		}
}

int main()
{
		int row=3;
		int col=2;
        int arr[3][2];
		accept(arr);
		print(arr);
}
