#include<stdio.h>
int fun(int num)
{
		if(num==1)
		{
				return 1;
		}
		else
		{
			return num*fun(num-1);
		}
}

				
int main()
{
		int num=4;
		int res=fun(num);
		printf("Factorial of %d is %d",num,res);

}
