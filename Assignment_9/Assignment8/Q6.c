#include<stdio.h>
struct student{
		char name[20];
		int roll;
		int standard;
		union stand{
				float per;
				char grade;
		}c1;
		
};

int main()
{
		struct student s1[3];
        int i;
		for(i=0;i<3;i++)
		{
				printf("Enter the following info\n");
				printf("Enter name,rollnumber,standard");
				scanf("%s %d %d",s1[i].name,&s1[i].roll,&s1[i].standard);
				if(s1[i].standard>4)
				{
						printf("Enter the percentage");
						scanf("%f",&s1[i].c1.per);
				}
				else
				{
						printf("Enter the grade");
						scanf(" %c",&s1[i].c1.grade);
				}
		}

		for(int j=0;j<3;j++)
		{
				printf("%s\n%d\n%d\n",s1[j].name,s1[j].roll,s1[j].standard);
                
				if(s1[j].standard>4)
				{
						printf("Percentage %.2f",s1[j].c1.per);
				}
				else
				{
						printf("grade %c",s1[j].c1.grade);
				}

		}




}
