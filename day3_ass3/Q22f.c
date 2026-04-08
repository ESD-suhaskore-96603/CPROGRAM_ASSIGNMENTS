#include<stdio.h>
int main()
{
		int n=4;
		char ch='A';
		for(int i=0;i<4;i++)
		{
				char temp=ch;
				
				for(int j=0;j<n-i;j++)
				{
						printf("%c",temp);
						temp++;
				}
				printf("\n");
				ch=ch+1;

		}
}
