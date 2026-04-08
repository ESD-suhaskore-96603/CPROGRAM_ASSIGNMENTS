#include<stdio.h>
char* my_strchr(const char *str, int ch)
{
		for(int i=0;str[i]!='\0';i++)
		{
				if(str[i]==ch)
				{
						return &str[i];
				}
		}
		return 0;
}

int main()
{
		char str[10]="suhas kore";
		printf("%d",my_strchr(str,'s'));
}

