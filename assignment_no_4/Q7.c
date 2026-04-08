#include<stdio.h>
void fib(int n)
{
		int first=0;
		int sec=1;
		int next;
		printf("%d %d ",first,sec);
		for(int i=0;i<n-2;i++)
		{
				next=first+sec;
				printf("%d ",next);
				first=sec;
				sec=next;
		}
}
int main()
{
		int num;
		scanf("%d",&num);
		fib(num);
}
