#include<stdio.h>
int main()
{
		printf("*\n**\n***\n****\n*****");
        printf("\n");
		for(int i=1;i<=5;i++)
		{
				for(int j=0;j<i;j++)
				{
						printf("*");
				}
				printf("\n");
		}
}
