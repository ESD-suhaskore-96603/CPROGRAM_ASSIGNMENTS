#include<stdio.h>
int fact(int n)
{
		int fact=1;
		while(n!=1)
		{
				fact=fact*n;
				n--;
		}
		return fact;

}

int main()
{
		int n=4;
		printf("Fact of %d is %d",n,fact(n));
}

