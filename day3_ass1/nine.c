#include<stdio.h>
int main()
{
		/*
		 c=5/9*(f-32)
		 */
		float C;
		float F;
		int ch;
	//	F=(5/9)*(C-32);
		printf("Enter your choice 1. C to F 2. F to C");
		scanf("%d",&ch);

		if(ch==1)
		{
				printf("Enter temp in celcius");
				scanf("%f",&C);
				
	           	F=(9/5)*(C+32);
				printf("%.2f F",F);
		}
		else if(ch==2)
		{

				printf("Enter temp in fer");
				scanf("%f",&F);
				C=(5.0/9.0) * (F - 32);
		
				printf("%.2f F",F);
		}
		else
		{
				printf("Invalid Choice");
		}
}



              
