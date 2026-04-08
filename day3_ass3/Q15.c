#include<stdio.h>
#include<ctype.h>
int main()
{
int a,b;
int op;
int flag;
do
{
		printf("Hello\n");
		printf("Please select the opration you want to do\n");
		printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
		scanf("%d",&op);
		int res;
	//	int flag;
		if(res=isalnum(op))
		{
				flag=1;
		}

		printf("Please Enter the two numbers\n");
		scanf("%d %d",&a,&b);
		if(op==1)
         {
                  printf("Addition is %d",a+b);
         }
         else if(op==2)
         {
                 printf("Subtraction is %d",a-b);
         }
         else if(op==4)
         {
                  printf("Division is %d",a/b);
          }
          else if(op==3)
          {
                  printf("Multiplication is %d",a*b);
          }
          else
          {
                  printf("Invalid choice");
          }

}while(flag==1);
}

