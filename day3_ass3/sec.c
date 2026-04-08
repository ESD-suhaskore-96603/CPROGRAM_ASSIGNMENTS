#include<stdio.h>
int main()
{
		int num;
		printf("Enter the number");
		scanf("%d",&num);

		int mul=1;
		while(mul!=11)
		{
				printf("%d * %d = %d\n",num,mul,num*mul);
				mul++;
		}
}

