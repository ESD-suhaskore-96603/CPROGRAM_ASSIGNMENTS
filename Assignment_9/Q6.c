#include<stdio.h>
#include<string.h>
typedef struct student{
		int id;
		char name[20];
		char course[20];
		int marks;
}stud_t;

void accept(stud_t *stud1)
{
		printf("Give following Info\n");
		printf("Enter student ID\n");
		scanf("%d",&stud1->id);
		printf("Enter name\n");
		scanf("%s",stud1->name);
		printf("enter course\n",stud1->course);
		scanf("%s",stud1->course);
		printf("Enter marks\n");
		scanf("%d",&stud1->marks);
}

void add_stud(stud_t *stud1)
{
		FILE *fp=fopen("student.txt","ab");
		fwrite(stud1,sizeof(stud_t),1,fp);
		fclose(fp);
}

void print(stud_t stud1)
{
		printf("%d\n%s\n%s\n%d\n",stud1.id,stud1.name,stud1.course,stud1.marks);
}
void search_id(int id)
{
		stud_t stud1;
		FILE *fp=fopen("student.txt","rb");
		while(fread(&stud1,sizeof(stud_t),1,fp)!=0)
		{
				if(stud1.id==id)
				{
						printf("Student found\n");
						print(stud1);
				}
		}
		fclose(fp);
}

void display(void)
{
		stud_t stu1;
		FILE *fp=fopen("student.txt","rb");
		while(fread(&stu1,sizeof(stud_t),1,fp)!=0)
		{
	        	print(stu1);
		}
		fclose(fp);
}

void search_by_name(char *str)
{
		stud_t stu1;
		FILE *fp=fopen("student.txt","rb");
		while(fread(&stu1,sizeof(stud_t),1,fp)!=0)
		{
				if(strcmp(stu1.name,str)==0)
				{
						printf("Student found\n");
						print(stu1);
				}
		}
		fclose(fp);
}

void update_using_id(int id)
{
		stud_t stu1;
		FILE *fp=fopen("student.txt","rb+");
		while(fread(&stu1,sizeof(stud_t),1,fp)!=0)
		{
				if(stu1.id==id)
				{
						printf("student found\n");
						print(stu1);
						int mark;
						printf("Enter new marks\n");
						scanf("%d",&mark);
						stu1.id=mark;
						fseek(fp,-1*sizeof(stud_t),SEEK_CUR);
						fwrite(&stu1,sizeof(stud_t),1,fp);
						printf("Success");
						fclose(fp);
						return;
				}
		}
		fclose(fp);
}

void delete_by_id(int id)
{
		stud_t stu1;
		FILE *fp=fopen("student.txt","rb+");
		while(fread(&stu1,sizeof(stud_t),1,fp)!=0)
		{
				if(stu1.id==id)
				{
						while(fread(&stu1,sizeof(stud_t),1,fp)!=0)
						{
								fseek(fp,-2*sizeof(stud_t),SEEK_CUR);
								fwrite(&stu1,sizeof(stud_t),1,fp);                                fseek(fp,+1*sizeof(stud_t),SEEK_CUR);
   
						}
						break;
				}
		}
		fseek(fp,-1*sizeof(stud_t),SEEK_END);
		int pos=fell(fp);
		printf("%d\n",pos);
		fclose(fp);
		truncate("books.txt",pos);
}

					

int main()
{
		int choice;
		stud_t s1;
		do{
				printf("Enter your choice\n");
				printf("0.Exit\n1.Add student\n2.Display all students\n3.search student by ID\n4.search student by name\n5.Update using ID\n6.Delete student id\n7.count total students");
                scanf("%d",&choice);
				if(choice==0)
				{
						break;
				}

				switch(choice)
				{
						case 1:accept(&s1);
							   add_stud(&s1);
							   break;
						case 2:display();
							   break;
						case 3:search_id(10);
							   break;
				        case 4:search_by_name("ritesh");
							   break;
					    case 5:update_using_id(10);
							   break;
						case 6:delete_by_id(10);
							   break;


				}
		}while(choice!=0);
}

