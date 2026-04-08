#include<stdio.h>
char* my_strcat(char* dest,const char* src)
{
		int i=0,j=0;
		while(dest[i]!='\0')
		{
				i++;
		}
//		i=i-1;
		while(src[j]!='\0')
		{
				dest[i]=src[j];
				i++;
				j++;
		}
		dest[i]='\0';
}


int main()
{
		char des[40]="how are you";
		char src[]="fine";

		my_strcat(des,src);
		printf("Result %s",des);

}
