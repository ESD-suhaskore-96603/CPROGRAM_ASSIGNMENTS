#include<stdio.h>
void accept(int arr[],int size)
{
		for(int i=0;i<size;i++)
		{
				scanf("%d",&arr[i]);
		}
}
void print(int *arr,int size)
{
		for(int i=0;i<size;i++)
		{
				printf("%d ",arr[i]);
		}
}
void max(int arr[],int size)
{
		int max=arr[0];
		for(int i=0;i<size;i++)
		{
				if(arr[i]>max)
				{
						max=arr[i];
				}
		}
		printf("Maximum number is %d",max);
}
void min(int arr[],int size)
{
		int min=arr[0];
		for(int i=0;i<size;i++)
		{
				if(arr[i]<min)
				{
						min=arr[i];
				}
		}
		printf("Minimum number is %d",min);
}

int main()
{
	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	int arr[size];
	accept(arr,size);
//	print(arr,size);
	max(arr,size);
	min(arr,size);
}
