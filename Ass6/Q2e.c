#include<stdio.h>

int my_stricmp(const char *str1, const char *str2)
{
    for(int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if(str1[i] == str2[i] || 
           str1[i] - str2[i] == 32 || 
           str1[i] - str2[i] == -32)
        {
            continue;
        }
        else
        {
            return str1[i] - str2[i];
        }
    }

    return 0;
}

int main()
{
    char *str1 = "suhas";
    char *str2 = "SUHAS";

    int res = my_stricmp(str1, str2);
    printf("%d", res);
}




