#include<stdio.h>
struct student{
		int roll;
		char name[20];
		float marks;
};

int main()
{
		struct student s1;
		printf("Enter the roll number\n");
		scanf("%d",&s1.roll);
		printf("Enter the name\n");
		scanf("%s",s1.name);
		printf("Enter the marks\n");
		scanf("%f",&s1.marks);

		printf("%s\nRoll no.%d\nmarks %.2f\n",s1.name,s1.roll,s1.marks);
}

