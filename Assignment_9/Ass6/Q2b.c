#include<stdio.h>
char* my_strcpy(char* dest,const char* src)
{

		int i;
		while(src[i]!='\0')
		{
				dest[i]=src[i];
				i++;
		}

}
int main()
{
		char src[]="How are you";
		char des[20];
		my_strcpy(des,src);
		printf("%s is the destination  file",des);

}

