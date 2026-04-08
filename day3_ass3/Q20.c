#include<stdio.h>
int prime(int num)
{
		if(num<=1)
		{
				return 0;
		}
		int count=0;
		for(int i=2;i<=num/2;i++)
		{
				if(num%i==0)
				{
						count++;
				}
		}
		if(count)
		{
				return 0;
		}
		else
		{
				return 1;
		}

}

int main()
{
		for(int i=1;i<100;i++)
		{
				if(prime(i))
				{
						printf("%d ",i);
				}
		}
}
            
