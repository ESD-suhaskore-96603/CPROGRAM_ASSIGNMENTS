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
		int n1 ,n2;
		scanf("%d %d",&n1,&n2);
		for(int i=n1;i<=n2;i++)
		{
				table(i);
		}
}

