#include<stdio.h>
int rev(int num)
{
		int rem,rev=0;
		while(num)
		{
				rem=num%10;
				rev=rev*10+rem;
				num=num/10;
		}
		return rev;
}
int main()
{
		int num;
		scanf("%d",&num);
        int rem,sum=0;
		int temp=num;
		while(num)
		{
				int rem=num%10;
				sum=sum+rem;
				num=num/10;
		}
		int res=rev(temp);
		while(temp)
		{
				printf("%d + ",temp%10);
						temp=temp/10;
		}
		printf("= %d ",sum);
}

