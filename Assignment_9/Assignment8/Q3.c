
#include<stdio.h>
struct student
{
		int roll;
		char name[20];
		float marks;
};

void accept(struct student sptr[],int size)
{
		for(int i=0;i<size;i++)
		{
		printf("Enter the roll name marks\n");
		scanf("%d %s %f",&sptr[i].roll,sptr[i].name,&sptr[i].marks);
		}
}

void print(struct student s2[],int size)
{
		for(int i=0;i<size;i++)
		{
		printf("%s\nroll no %d\nmarks %f",s2[i].name,s2[i].roll,s2[i].marks);
		}
}
int main()
{
		struct student s1[3];
		accept(s1,3);
		print(s1,3);
}
