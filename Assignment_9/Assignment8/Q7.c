#include <stdio.h>

struct student
{
    char name[20];
    unsigned int stand : 4;   // up to 15
    unsigned int gender : 1;  // 0 or 1
    unsigned int age : 5;     // up to 31
};

int main()
{
    struct student s1[3];

    int stand, gender, age;   // temporary variables

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter name, standard, gender (male=1 female=0), age:\n");

        scanf("%s %d %d %d", s1[i].name, &stand, &gender, &age);

        s1[i].stand = stand;
        s1[i].gender = gender;
        s1[i].age = age;
    }

    printf("\nStudent Information:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nName: %s", s1[i].name);
        printf("\nStandard: %d", s1[i].stand);
        printf("\nGender: %d", s1[i].gender);
        printf("\nAge: %d\n", s1[i].age);
    }

    return 0;
}
