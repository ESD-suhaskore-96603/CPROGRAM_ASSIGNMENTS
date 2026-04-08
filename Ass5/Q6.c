#include<stdio.h>
void dup(int arr[],int size)
{
		for(int i=0;i<size;i++)
		{
				for(int j=i+1;j<size;j++)
				{
						if(arr[i]==arr[j])
						{
								for(int k=j;k<size;k++)
								{
										arr[k]=arr[k+1];
								}
								j--;
								size--;
						}
				}
		}
		print(arr,size);
}

void accept(int arr[],int size)
{
		for(int i=0;i<size;i++)
		{
				scanf("%d",&arr[i]);
		}
}
void print(int arr[],int size)
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
	dup(arr,size);
//	print(arr,size);

}
