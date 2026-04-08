#include<stdio.h>
int main()
{
		int a,b,c;
		printf("Enter three numbers");
		scanf("%d %d %d",&a,&b,&c);

		int sum=0;
	    sum=a+b+c;

		int avg=sum/3;
		printf("%d",avg);
}
