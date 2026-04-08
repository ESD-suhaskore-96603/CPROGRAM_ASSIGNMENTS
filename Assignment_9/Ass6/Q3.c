#include<stdio.h>
#include<string.h>
//Write a function to remove all occurrences of given character from the string.
void fun(char *str,char ch)
{
		int len=strlen(str);
		for(int i=0;str[i]!='\0';i++)
		{
				if(str[i]==ch)
				{
						for(int j=i;str[j]!='\0';j++)
						{
								str[j]=str[j+1];
						}

				}
		}
		printf("%s",str);
}

int main()
{
		char str[25]="occurance once is allowed";
        fun(str,'e');
}
