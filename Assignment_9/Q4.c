#include<stdio.h>

void copy_file(FILE *src, FILE *dest)
{
    char line[100];

    while(fgets(line,100,src) != NULL)
    {
        fputs(line,dest);
    }
}

int main(int argc, char *argv[])
{
    FILE *fs, *fd;

    if(argc != 3)
    {
        printf("Usage: %s sourcefile destinationfile\n", argv[0]);
        return 1;
    }

    fs = fopen(argv[1], "r");
    fd = fopen(argv[2], "w");

    if(fs == NULL || fd == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    copy_file(fs, fd);

    printf("File copied successfully\n");

    fclose(fs);
    fclose(fd);

    return 0;
}
