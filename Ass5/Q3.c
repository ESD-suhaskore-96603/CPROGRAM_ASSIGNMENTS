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
void rev(int *arr,int size)
{
		int fr=0,ls=size-1;
		while(fr<ls)
		{
				int temp=arr[fr];
				arr[fr]=arr[ls];
				arr[ls]=temp;
				fr++;
				ls--;
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
	rev(arr,size);
}
