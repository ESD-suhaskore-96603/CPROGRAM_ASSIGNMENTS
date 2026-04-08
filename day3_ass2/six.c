#include<stdio.h>
int main()
{
		int num;
		scanf("%d",&num);
		int temp=num;
		int rem,rev=0;
		while(num)
		{
				rem=num%10;
				rev=rev*10+rem;
				num=num/10;
		}
		if(rev==temp)
		{
				printf("Palindrome number");
		}
		else
		{
				printf("Not Palindrome");
		}
}

