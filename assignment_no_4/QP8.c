#include<stdio.h>
int sum=0;
int product=1;
int fun(int n1,int n2,char ch)
{
		if(ch=='+')
		{
				sum=n1+n2;
		}
		else if(ch=='*')
		{
				product=n1*n2;
		}
}
int main()
{
		int num1=4;
		int num2=5;
		char ch='+';
		char ch2='*';
		fun(num1,num2,ch);
		fun(num1,num2,ch2);
				printf("Sum is %d",sum);
				printf("Mul is %d",product);

}
