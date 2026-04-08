#include<stdio.h>
int fun(int base,int ind)
{
		
		if(ind==0)
		{
				return 1;
		}
		else
		{
				
				return base*fun(base,ind-1);
				
		}
}
int main()
{
		int base=2;
		int ind=4;
		int res=fun(base,ind);
		printf("%d power to %d is %d",base,ind,res);
}
