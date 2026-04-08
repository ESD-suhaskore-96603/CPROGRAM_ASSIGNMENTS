#include<stdio.h>
int main()
{
		int a,b;
		scanf("%d %d",&a,&b);

		if(a>b)
		{
				printf("%d is maximum",a);
		}
		else
		{
				printf("%d is maximum",b);
		}


       a>b?printf("%d is max",a):printf("%d is max",b);
}

