#include<stdio.h>
int main()
{
		int num;
		scanf("%d",&num);
        int first=1;
		int sec=1;
		int next;
		printf("%d ",first);
		printf("%d ",sec);
		for(int i=3;i<=num;i++)
		{
				next=first+sec;
				printf("%d ",next);
				first=sec;
				sec=next;
		}
}
