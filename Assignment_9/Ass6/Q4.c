#include<stdio.h>
#include<string.h>
void remov(char *str1,char *str2)
{
		for(int k=0;str1[k]!='\0';k++)
		{
				char ch=str1[k];

		for(int i=0;str2[i]!='\0';i++)
		{
				if(str2[i]==ch)
				{
						for(int j=i;str2[j]!='\0';j++)
						{
								str2[j]=str2[j+1];
						}
				}
		}
		}
		printf("%s",str2);
}
int main()
{
		char str1[20]="ae";
		char str2[20]="learning";
		remov(str1,str2);
}
