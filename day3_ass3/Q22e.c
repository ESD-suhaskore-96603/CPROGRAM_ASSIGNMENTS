#include<stdio.h>
int main()
{
		char ch='A';
		int n=4;
		for(int i=0;i<4;i++)
		{
				for(int j=0;j<=i;j++)
				{
						printf("%c ",ch);
						ch++;
				}
				printf("\n");
		}
}
