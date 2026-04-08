#include<stdio.h>
int main()
{
		int num;
		scanf("%d",&num);
        int fact=1;
		while(num!=1)
		{
				fact=fact*num;
				num--;
		}

		printf("Factorial of the number is %d",fact);
}


