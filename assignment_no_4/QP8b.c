#include<stdio.h>
int fun(int num1,int num2,int *sum,int *mul)
{
		*sum=num1+num2;
		*mul=num1*num2;
}
int main()
{
		int n1=10;
	    int n2=12;
		int sum;
		int mul;
		fun(n1,n2,&sum,&mul);
		printf("Sum=%d",sum);
		printf("Multi=%d",mul);
}
