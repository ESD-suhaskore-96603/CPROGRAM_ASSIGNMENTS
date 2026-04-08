
#include<stdio.h>
int linser(int arr[],int size,int ele)
{
		int i=0;
		int flag=0;
	for( i=0;i<size; )
		{
				if(arr[i]==ele)
				{
						return i;
						flag=1;
				}
				else
				{
						i++;
				}
		}
		if(flag==0)
		{
				return 0;
		}
}

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
		printf("Enter the size of array");
		scanf("%d",&size);
		int arr[size];
		accept(arr,size);
		int ele;
				printf("Enter the element to find out");
		scanf("%d",&ele);
       // accept(arr,size);

       // accept(arr,size);
       int res= linser(arr,size,ele);
	   if(res==0)
	   {
			   printf("Not found");
	   }
	   else
	   {
			   printf("Element fonund at %d location",res);
	   }
}
