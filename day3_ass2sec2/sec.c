#include<stdio.h>
int main()
{
		char opr;
		int a,b;
		printf("Enter opr and two numbers rep.");
		scanf("%c %d %d",&opr,&a,&b);

		switch(opr)
		{
				case '+':
						printf("Sum=%d",a+b);
						break;
				case '-':
						printf("Difference=%d",a-b);
						break;
				case '*':
						printf("Multiplication=%d",a*b);
						break;
				case '/':
						printf("Division=%d",a/b);
						break;
		}
}
