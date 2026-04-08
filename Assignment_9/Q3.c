#include<stdio.h>

void copy_file(FILE *src, FILE *dest)
{
    char line[100];

    while(fgets(line,100,src) != NULL)
    {
        fputs(line,dest);
    }
}

int main()
{
    FILE *fs, *fd;

    fs = fopen("source.txt","r");
    fd = fopen("dest.txt","w");

    if(fs == NULL || fd == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    copy_file(fs,fd);

    printf("File copied successfully\n");

    fclose(fs);
    fclose(fd);

    return 0;
}
