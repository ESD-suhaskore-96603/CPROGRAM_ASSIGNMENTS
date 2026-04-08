#include<stdio.h>
int main()
{
		int num;
		scanf("%d",&num);
        int i=1;
		while(i!=num)
		{
				if(num%i==0)
				{
						printf("%d ",i);
				}
				i++;
		}
}


