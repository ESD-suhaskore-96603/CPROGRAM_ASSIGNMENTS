#include<stdio.h>
struct student
{
		int roll;
		char name[20];
		float marks;
};

void accept(struct student *sptr)
{
		printf("Enter the roll name marks");
		scanf("%d %s %f",&sptr->roll,sptr->name,&sptr->marks);
}

void print(struct student s2)
{
		printf("%s\nroll no %d\nmarks %f",s2.name,s2.roll,s2.marks);
}
int main()
{
		struct student s1;
		accept(&s1);
		print(s1);
}
