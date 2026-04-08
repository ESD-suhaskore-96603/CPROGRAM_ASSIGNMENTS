#include<stdio.h>
int main()
{
		char ch;
		int number;
		printf("Enter a char and total no of times to print\n");
		scanf("%c %d",&ch,&number);

		while(number)
		{
				printf("%c",ch);
				number--;
		}
}

