#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void accept(char *name[5])
{
    char temp[50];

    for(int i=0;i<5;i++)
    {
        printf("Enter name %d: ",i+1);
        scanf("%s",temp);

        name[i] = (char*)malloc(strlen(temp)+1);
        strcpy(name[i],temp);
    }
}

void print(char *name[5])
{
    printf("\nStudent Names:\n");

    for(int i=0;i<5;i++)
    {
        printf("%s\n",name[i]);
    }
}

void sort(char *name[5])
{
    char *temp;

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(strcmp(name[i],name[j]) > 0)
            {
                temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
}

void free_memory(char *name[5])
{
    for(int i=0;i<5;i++)
    {
        free(name[i]);
    }
}

int main()
{
    char *names[5];

    accept(names);

    printf("\nBefore Sorting:\n");
    print(names);

    sort(names);

    printf("\nAfter Sorting:\n");
    print(names);

    free_memory(names);

    return 0;
}
