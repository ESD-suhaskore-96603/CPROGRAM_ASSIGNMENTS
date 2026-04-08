#include<stdio.h>
void table(int num)
{
		for(int i=1;i<=10;i++)
		{
				printf("%d ",num*i);
		}
		printf("\n");
}

int main()
{
		for(int i=1;i<=10;i++)
		{
				table(i);
		}
}

