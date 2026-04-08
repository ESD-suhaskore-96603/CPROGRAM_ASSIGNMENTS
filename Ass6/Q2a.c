#include<stdio.h>
int my_strlen(const char* str)
		{
				int i=0;
				while(str[i]!='\0')
				{
						i++;
				}
				return i;
		}


int main()
{
		char str[]="India India";
		int len=my_strlen(str);
		printf("%d is the length of sting",len);
		return 0;
}
