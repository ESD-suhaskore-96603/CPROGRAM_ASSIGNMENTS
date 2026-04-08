#include<stdio.h>
int main()
{
		int arr[5];
		for(int i=0;i<5;i++)
		{
				scanf("%d",&arr[i]);
		}
        int sum=0;
		float avg;
		for(int i=0;i<5;i++)
		{
				sum=sum+arr[i];
		}
		avg=(float)sum/5;

		printf("Sum is %d and average is  %.2f ",sum,avg);
}
