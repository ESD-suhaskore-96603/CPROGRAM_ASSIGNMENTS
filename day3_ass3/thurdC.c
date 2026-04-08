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
		int res=rev(num);
		if(res==num)
		{
				printf("%d is a numeric palindrome",num);
		}
		else
		{
				printf("%d is not a numeric palindrome",num);
		}
}


