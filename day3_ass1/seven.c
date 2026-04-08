#include<stdio.h>
int rev(int num)
{
		int rem,rev=0;
		while(num)
		{
				rem=num%10;
				rev=rev*10+rem;
				num=num/10;
		}
		return rev;
}

int main()
{
		int num;
		printf("Enter the num");
		scanf("%d",&num);
		
		int len=0;
		int count=len;
		int temp=num;
		while(temp)
		{
				temp=temp/10;
				len++;
		}
    	int mul=1;
	   while(len-1)
	   {
			    mul=mul*10;
				len--;
	   }
	   int a=num/mul;
	   int A=a*mul;
	   int b=num/(mul/10)%10;
	   int B=b*mul/10;
	   int c=num/(mul/100)%10;
	   int C=c*mul/100;
	   int d=num%10;
	   int D=d;

	   printf("%d %d %d %d",a,b,c,d);
       printf("%d	%d	%d	%d",A,B,C,D);
}



				










































































































































