#include<stdio.h>
int main()
{
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);

		if(a>b)
		{
				if(a>c)
				{
						printf("%d is maximum",a);
				}
		}
		else if(b>c)
		{
				printf("%d id maximun",b);
		}
		else
		{
				printf("%d is maximum",c);
		}

	int result=(a>b)?((a>c)?a:c):((b>c)?b:c);
					printf("%d id max",result);

}

