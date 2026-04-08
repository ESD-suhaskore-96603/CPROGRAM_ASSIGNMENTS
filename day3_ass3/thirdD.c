#include<stdio.h>
#include<math.h>
int main()
{
		int n;
		scanf("%d",&n);
        int temp=n;
        int dup=temp;
		int len;
		while(n)
		{
				n=n/10;
				len++;
		}
        int sum=0,rem;
		while(temp)
		{
				rem=temp%10;
				sum=sum + pow(rem,len);
				temp=temp/10;
		}

		if(sum==dup)
		{
				printf("%d is an Armstrong number",dup);
		}
		else
		{
				printf("%d is not an Armstrong number",dup);
		}

}



