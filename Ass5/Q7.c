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
void sort(int *arr,int size)
{
		for(int i=0;i<size;i++)
		{
				for(int j=i+1;j<size;j++)
				{
						if(arr[i]>arr[j])
						{
								int temp=arr[i];
								arr[i]=arr[j];
								arr[j]=temp;
						}
				}
		}
		print(arr,size);
}
int main()
{
	int size;
	printf("Enter size of array");
	scanf("%d",&size);
	int arr[size];
	accept(arr,size);
//	print(arr,size);
	sort(arr,size);
}
