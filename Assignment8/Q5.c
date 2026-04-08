#include<stdio.h>
#include<string.h>
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
		printf("%s\nroll no %d\nmarks %f\n   \n ",s2[i].name,s2[i].roll,s2[i].marks);
		}
}

void sort(struct student s3[],int size)
{
		struct student temp;
		for(int i=0;i<size;i++)
		{
				for(int j=i+1;j<size;j++)
				{
				if(s3[i].roll>s3[j].roll)
				{
						temp=s3[i];
						s3[i]=s3[j];
						s3[j]=temp;
				}
				}
		}
}

void sortbyname(struct student s[],int size)
{
		struct student temp;
		for(int i=0;i<size;i++)
		{
				for(int j=i+1;j<size;j++)
				{
						if(strcmp(s[i].name,s[j].name)>0)
						{
								temp=s[i];
								s[i]=s[j];
								s[j]=temp;
						}
				}
		}
}

int main()
{
		struct student s1[3];
		accept(s1,3);
		sort(s1,3);
		print(s1,3);
		sortbyname(s1,3);
		print(s1,3);

	//	print(s1,3);
}



