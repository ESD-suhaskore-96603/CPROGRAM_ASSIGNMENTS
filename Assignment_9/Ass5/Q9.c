#include<stdio.h>
void accept(int arr[],int size)
   {
           for(int i=0;i<size;i++)
           {
                   scanf("%d",&arr[i]);
           }
   }

int fun(int arr[],int size,int ele)
{
		int lef=0,rig=size-1;
//		int mid=(lef+rig)/2;
		while(lef<rig)
		{
			 
	     	int mid=(lef+rig)/2;
				if(arr[mid]==ele)
				{
						return mid;
				}
				else if(ele<arr[mid])
				{
						rig=mid-1;
				}
				else if(ele>arr[mid])
				{
						lef=mid+1;
				}
		}
		return -1;

}
int main()
{
		int arr[7];
		accept(arr,7);
		int ele;
		scanf("%d",&ele);
		int res=fun(arr,7,ele);
		if(res== -1)
		{
				printf("Element not found");
		}
		else
		{
				printf("Element found at %d location",res);
		}
}


  
				
