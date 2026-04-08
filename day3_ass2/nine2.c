#include<stdio.h>
int main()
{
		int month,year;
		printf("Enter the month and year");
		scanf("%d %d",&month,&year);

		int res=((year%400==0)?1:(year%4==0 && year%100!=0)?1:0);

		if(res==1)
		{
				if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
				{
						printf("The month %d is having 31 days and year %d having 366 days",month,year);
				}
				else if(month==4 || month==6 || month==9 || month==11)
				{
						printf("The month %d is having 30 days and year %d having 366 days",month,year);
				}
				else if(month==2)
				{
							printf("The month %d is having 29 days and year %d having 366 days",month,year);
				}
				else
				{
						printf("Invalid month");
				}
		}
		else
		{

				if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
				{
						printf("The month %d is having 31 days and year %d having 365 days",month,year);
				}
				else if(month==4 || month==6 || month==9 || month==11)
				{
						printf("The month %d is having 30 days and year %d having 365 days",month,year);
				}
				else if(month==2)
				{
							printf("The month %d is having 28 days and year %d having 365 days",month,year);
				}
				else
				{
						printf("Invalid month");
				}
		}
}
		
