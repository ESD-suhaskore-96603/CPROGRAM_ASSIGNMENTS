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
int main()
{
	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	int arr[size];
	accept(arr,size);
	print(arr,size);
}
