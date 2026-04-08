#include<stdio.h>
int my_atoi(char *str)
{
		int i=0;
		int num=0;
		while(str[i]!='\0')
		{
				num=num*10+(str[i]-48);
				i++;
		}
		return num;
}

int main()
{
		char str[]="1234";
		int res=my_atoi(str);
		printf("%d",res);
}
