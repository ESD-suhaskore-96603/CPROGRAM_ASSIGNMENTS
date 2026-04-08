#include<stdio.h>
int main()
{
		int year;
		scanf("%d",&year);
		/*
		if(year%400==0)
		{
				printf("%d is leap year and having 366 days",year);
		}
		else if(year%4==0)
		{
				if(year%100!=0)
				{

				printf("%d is leap year and having 366 days",year);
				}
		}
		else
		{

				printf("%d is not  leap year and having 365 days",year);
		}*/
/*
		if(year%400==0)
		{

				printf("%d is leap year and having 366 days",year);
		}
		else if(year%4==0 && year%100!=0)
		{

				printf("%d is leap year and having 366 days",year);
		}
		else
		{

				printf("%d is not  leap year and having 365 days",year);
		}*/

		int result=(year%400==0)?1:(year%4==0 && year%100!=0)?1:0;
		if(result==1)
		{

				printf("%d is leap year and having 366 days",year);
		}
		else
		{

				printf("%d is not  leap year and having 365 days",year);
		}
}

