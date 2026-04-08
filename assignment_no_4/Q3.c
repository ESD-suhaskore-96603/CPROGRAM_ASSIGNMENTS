#include<stdio.h>
int flag=0;
int fun(int a,int b,char opr)
{
		if(flag==1)
		{
				printf("We cannot do the div if denominator is 0");
				return 0;
		}
		if(opr=='+')
		{
				printf("Addition of %d and %d is %d",a,b,a+b);
		}
		else if(opr=='-')
		{

				printf("subtraction of %d and %d is %d",a,b,a-b);
		}
		else if(opr=='*')
		{

				printf("Multiplication of %d and %d is %d",a,b,a*b);
		}
		else if(opr=='/')
		{

				printf("Division of %d and %d is %d",a,b,a/b);
		}
		else
		{
				printf("Invalid operator");
		}
		return 1;
}

int main()
{
		int a,b;
		char ch;
		scanf("%d %d %c",&a,&b,&ch);
		if(b==0)
		{
				flag=1;
		}
		fun(a,b,ch);
}
