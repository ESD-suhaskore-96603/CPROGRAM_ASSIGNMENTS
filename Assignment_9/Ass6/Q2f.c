#include<stdio.h>
#include<string.h>

char* my_strrev(char* str)
{
		int i=0,j=strlen(str)-1;
		while(i<j)
		{
				char temp=str[i];
				str[i]=str[j];
				str[j]=temp;
				i++;
				j--;
		}
		return str;
}

int main()
{
		char str[6]="Suhas";
		printf("%s",my_strrev(str));
}
		
