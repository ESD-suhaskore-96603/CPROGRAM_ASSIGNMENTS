#include<stdio.h>
void print(char ch,int n)
{
		for(int i=1;i<=n;i++)
		{
				printf("%c ",ch);
		}
}
int main()
{
		int i;
		char ch;
		printf("Enter char and how much time want to print");
		scanf("%c %d",&ch,&i);
		print(ch,i);
}

