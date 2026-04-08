#include<stdio.h>
int isprime(int num)
{
		for(int i=2;i<=num/2;i++)
		{
				if(num%i==0)
				{
						return 0;
				}
		}
		return 1;
}
void prime(int a,int b)
{
		for(int i=a;i<=b;i++)
		{
				if(isprime(i))
				{
						printf("%d ",i);
				}
		}
}
int main()
{
		int i,j;
		scanf("%d %d",&i,&j);
		prime(i,j);
}
