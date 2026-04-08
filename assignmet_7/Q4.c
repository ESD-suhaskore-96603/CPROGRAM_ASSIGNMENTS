#include<stdio.h>
#include<string.h>

void accept(char name[5][20])
{
    for(int i=0;i<5;i++)
    {
        printf("Enter name %d: ",i+1);
        scanf("%s",name[i]);
    }
}

void print(char name[5][20])
{
    printf("\nStudent Names:\n");

    for(int i=0;i<5;i++)
    {
        printf("%s\n",name[i]);
    }
}

void sort(char name[5][20])
{
    char temp[20];

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(strcmp(name[i],name[j]) > 0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
}

int main()
{
    char names[5][20];

    accept(names);

    printf("\nBefore Sorting:\n");
    print(names);

    sort(names);

    printf("\nAfter Sorting:\n");
    print(names);

    return 0;
}
