#include<stdio.h>
void swap(int *n1,int *n2)
{
		int temp=*n1;
		*n1=*n2;
		*n2=temp;
}
int main()
{
		int a=10,b=20;
		printf("Before swap a=%d and b=%d\n",a,b);
		swap(&a,&b);

		printf("after swap a=%d and b=%d\n",a,b);
}
