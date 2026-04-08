#include<stdio.h>
int main()
{
		int yr,mo;
		printf("enter the year and month");
		scanf("%d %d",&yr,&mo);

		int res = ( (yr % 400 == 0) || (yr % 4 == 0 && yr % 100 != 0) ) ? 1 : 0;

		switch(mo)
		{
				case 1:
						if(res==1)
						{
								printf("31 days in month 366 in year");
						}
						else
						{
								printf("31 days in month 365 in year");
						}
						break;
				case 2:

						if(res==1)
						{
								printf("29 days in month 366 in year");
						}
						else
						{
								printf("28 days in month 365 in year");
						}
						break;
				case 3:

						if(res==1)
						{
								printf("31 days in month 366 in year");
						}
						else
						{
								printf("31 days in month 365 in year");
						}
						break;
				case 4:
						
						if(res==1)
						{
								printf("30 days in month 366 in year");
						}
						else
						{
								printf("30 days in month 365 in year");
						}
						break;

				case 5:

						if(res==1)
						{
								printf("31 days in month 366 in year");
						}
						else
						{
								printf("31 days in month 365 in year");
						}
						break;
				case 6:

						if(res==1)
						{
								printf("30 days in month 366 in year");
						}
						else
						{
								printf("30 days in month 365 in year");
						}
						break;
				case 7:

						if(res==1)
						{
								printf("31 days in month 366 in year");
						}
						else
						{
								printf("31 days in month 365 in year");
						}
						break;
				case 8:

						if(res==1)
						{
								printf("31 days in month 366 in year");
						}
						else
						{
								printf("31 days in month 365 in year");
						}
						break;
				case 9:

						if(res==1)
						{
								printf("30 days in month 366 in year");
						}
						else
						{
								printf("30 days in month 365 in year");
						}
						break;
				case 10:

						if(res==1)
						{
								printf("31 days in month 366 in year");
						}
						else
						{
								printf("31 days in month 365 in year");
						}
						break;
				case 11:

						if(res==1)
						{
								printf("30 days in month 366 in year");
						}
						else
						{
								printf("30 days in month 365 in year");
						}
						break;
				case 12:

						if(res==1)
						{
								printf("31 days in month 366 in year");
						}
						else
						{
								printf("31 days in month 365 in year");
						}
						break;
				default:
						printf("Invalid month");
		}
}

