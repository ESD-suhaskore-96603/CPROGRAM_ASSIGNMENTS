#include<stdio.h>
int main()
{
		float num1,num2;
		printf("Enter two numbers");
		scanf("%f %f",&num1,&num2);

		if(num2==0)
		{
				printf("Error: we cannot divide by zero");
		}
		else
		{
				printf("Div is %g ",num1/num2);
		}
}
