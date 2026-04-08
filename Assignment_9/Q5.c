#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

void write_record()
{
    FILE *fp;
    struct student s;

    fp = fopen("student.txt","w");

    printf("Enter Roll, Name and Marks:\n");
    scanf("%d %s %f",&s.roll,s.name,&s.marks);

    fprintf(fp,"%d %s %f",s.roll,s.name,s.marks);

    fclose(fp);
}

void read_record()
{
    FILE *fp;
    struct student s;

    fp = fopen("student.txt","r");

    fscanf(fp,"%d %s %f",&s.roll,s.name,&s.marks);

    printf("\nStudent Record:\n");
    printf("Roll: %d\n",s.roll);
    printf("Name: %s\n",s.name);
    printf("Marks: %.2f\n",s.marks);

    fclose(fp);
}

int main()
{
    write_record();
    read_record();

    return 0;
}
