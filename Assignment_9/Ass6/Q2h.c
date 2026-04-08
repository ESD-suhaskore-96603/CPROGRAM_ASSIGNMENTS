#include<stdio.h>
#include<string.h>
char* my_strstr(char* str,char* sub)
{
		int len=strlen(sub);
		for(int i=0;str[i]!='\0';i++)
		{
				if(strncmp((str+i),sub,len)==0)
				{
						return (str+i);
				}
		}
		return 0;
}
int main()
{
		char str[10]="suhas kore";
		char sub[10]="kore";
		printf("%p",my_strstr(str,sub));
}
