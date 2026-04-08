#include<stdio.h>
int main()
{
		int quan;
		int price=5;
		int dis;

		printf("enter the quantity you want");
		scanf("%d",&quan);

		int cost=quan*price;
		int total;
		if(quan<=30)
		{
				printf("Total amount is %d",cost);
		}
		else if(quan>30 && quan<=50)
		{
				dis=10;
				total=(cost*dis)/100;
				printf("Total amount is %d",cost-total);
		}
		else 
		{
				dis=15;
				total=(cost*dis)/100;
				printf("Total amount is %d",cost-total);
		}

}


