#include<stdio.h>

void copy_file(FILE *src, FILE *dest)
{
    char ch;

    while((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }
}

int main()
{
    FILE *fs, *fd;
    char ch;

    fs = fopen("source.txt","r");
    fd = fopen("dest.txt","w");

    if(fs == NULL || fd == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

   
    copy_file(fs, fd);

    fclose(fs);
    fclose(fd);

    
    fd = fopen("dest.txt","r");

    printf("Contents of destination file:\n");

    while((ch = fgetc(fd)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fd);

    
    fd = fopen("dest.txt","a");

    printf("\nEnter data to append (Ctrl+D to stop):\n");

    while((ch = getchar()) != EOF)
    {
        fputc(ch, fd);
    }

    fclose(fd);

    return 0;
}
