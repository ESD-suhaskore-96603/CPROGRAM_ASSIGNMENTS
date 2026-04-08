#include<stdio.h>
int main()
{
		int month,year;
		printf("Enter the month and year");
		scanf("%d %d",&month,&year);

		int result=(year%400==0)?1:(year%4==0 && year%100!=0)?1:0;

		if(month==1)
		{
				if(result==1)
				{
						printf("Month jan having 31 dyas and year %d having 366 days",year);
				}
				else
						{
								printf("Month jan having a 31 days and year %d having 365 days",year);
						}
				}

        else  if(month==2)
		{
				if(result==1)
				{
						printf("Month Feb  having 29 dyas and year %d having 366 days",year);
				}
						else
						{
								printf("Month Feb  having a 28 days and year %d having 365 days",year);
						}
		}

		else if(month==3)
		{
				if(result==1)
				{
						printf("Month Mar having 31 dyas and year %d having 366 days",year);
				}
						else
						{
								printf("Month Mar having a 31 days and year %d having 365 days",year);
						}
		}

		else if(month==4)
		{
				if(result==1)
				{
						printf("Month Apr having 30 dyas and year %d having 366 days",year);
				}
						else
						{
								printf("Month Apr having a 30 days and year %d having 365 days",year);
						}
				}
		

		else if(month==5)
		{
				if(result==1)
				{
						printf("Month May having 31 dyas and year %d having 366 days",year);
				}

						else
						{
								printf("Month May having a 31 days and year %d having 365 days",year);
						}
				
		}

		else if(month==6)
		{
				if(result==1)
				{
						printf("Month Jun having 30 dyas and year %d having 366 days",year);
				}
						else
						{
								printf("Month Jun having a 30 days and year %d having 365 days",year);
						}
				
		}

		else if(month==7)
		{
				if(result==1)
				{
						printf("Month Jul having 31 dyas and year %d having 366 days",year);
				}
						else
						{
								printf("Month Jul having a 31 days and year %d having 365 days",year);

						}
				
		}

		else if(month==8)
		{
				if(result==1)
				{
						printf("Month Aug having 31 dyas and year %d having 366 days",year);
				}
						else
						{
								printf("Month Aug having a 31 days and year %d having 365 days",year);
						}
				
		}

		else if(month==9)
		{
				if(result==1)
				{
						printf("Month Sep having 30 dyas and year %d having 366 days",year);
				}
						else
						{
								printf("Month Sep having a 30 days and year %d having 365 days",year);
						}
				
		}

		else if(month==10)
		{
				if(result==1)
				{
						printf("Month Oct having 31 dyas and year %d having 366 days",year);
				}
						else
						{
								printf("Month oct  having a 31 days and year %d having 365 days",year);
						}
				
		}

		else if(month==11)
		{
				if(result==1)
				{
						printf("Month Nov having 30 days and year %d having 366 days",year);
				}

						else
						{
								printf("Month Nov having a 30 days and year %d having 365 days",year);
						}
				

		}
		
		else if(month==12)
		{
				if(result==1)
				{
						printf("Month Dec having 31  days and year %d having 366 days",year);
				}
						else
						{
								printf("Month Dec having a 31 days and year %d having 365 days",year);
						}
				
		}
		else
		{
				printf("Invalid month");
		}
}



