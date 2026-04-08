//Write a function to count number of ‘1’ bits into a given number.

#include<stdio.h>

int main()
{
	int count = 0, number;

	printf("Enter a number : ");
	scanf("%d",&number);

	while(number>0)
	{
			if(number % 2 == 1){
				count++;
			number = number/2;
			}
			else
			{	number= number/2; }

	}

	printf("Number of 1's in given number is %d \n",count);

return 0;
}
