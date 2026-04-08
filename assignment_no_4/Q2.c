#include<stdio.h>
int power(int base,int ind)
{
		int res=1;
		for(int i=1;i<=ind;i++)
		{
				res=res*base;
		}
		return res;
	

}

int main()
{
		int ba,in;
		scanf("%d %d",&ba,&in);

		printf("Power is %d",power(ba,in));
}
