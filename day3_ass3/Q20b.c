#include<stdio.h>
#include<math.h>

int length(int num)
{
		int count=0;
		while(num)
		{
				num=num/10;
				count++;
		}
		return count;
}
int arm(int num)
{
		int sum=0;
		int len=length(num);

		int temp=num;
		
  		while(temp!=0)
		{
				int rem=temp%10;
				sum=sum+(int)pow(rem,len);
				temp=temp/10;
		}
		if(sum==num)
		{
				return 1;
		}
		else
		{
				return 0;
		}
		
}
int main()
{
		for(int i=1;i<=100;i++)
		{
				if(arm(i))
				{
						printf("%d ",i);
				}
		}
}
