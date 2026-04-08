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
int main()
{
		int num;
				scanf("%d",&num);
				int count=0;
	    while(count<5)
		{
				if(isprime(num+1))
				{
						printf("%d ",num+1);
						count++;
				}
				num++;
		}
}

