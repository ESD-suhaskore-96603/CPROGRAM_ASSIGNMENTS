#include<stdio.h>
int my_strcmp(const char *str1, const char *str2)
{
		for(int i=0;str1[i],str1[i]!='\0' || str2[i]!='\0';i++)
		{
				if(str1[i]!=str2[i])
				{
						return str1[i]-str2[i];
				}
		}
}

int main()
{
		char str1[20]="Suhs";
		char str2[20]="Suhas";
		 
		int res=my_strcmp(str1,str2);
		printf("%d",res);
}

