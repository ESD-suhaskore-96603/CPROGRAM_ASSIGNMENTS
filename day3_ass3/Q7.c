#include<stdio.h>
int main()
{
		int num;
		scanf("%d",&num);

		int i=1,j=1;

		while(i!=num/2)
		{
				j=i;
				while(j!=25)
				{
						if(i*j==24)
						{
								printf("%d * %d = %d\n",i,j,num);
						}
						j++;
				}
				i++;
		}
}
