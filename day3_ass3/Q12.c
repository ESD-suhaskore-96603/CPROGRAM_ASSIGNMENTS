#include<stdio.h>
int main()
{
		int in,ba;
		scanf("%d %d",&in,&ba);
        int res=1;
		for(int i=1;i<=in;i++)
		{
				res=res*ba;
				
		}
		printf("output is %d",res);
}
