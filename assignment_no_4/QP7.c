#include<stdio.h>
int a=10;
int b=20;
int swap(int i,int j)
{
		int temp=i;
		i=j;
		j=temp;
}
int main()
{
		printf("befor swapping\n a=%d,b=%d",a,b);
		swap(a,b);
		printf("After swapping\n a=%d,b=%d",a,b);
}
 

