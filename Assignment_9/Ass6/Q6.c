#include<stdio.h>

char* my_itoa(int num)
{
    static char str[20];
    int i=0;

    while(num)
    {
        str[i]=num%10+'0';
        num=num/10;
        i++;
    }

    str[i]='\0';
    return str;
}

void reverse(char str[])
{
    int i=0,j;
    char temp;

    for(j=0; str[j]!='\0'; j++); // find length
    j--;

    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    int n=1234;
    char *str=my_itoa(n);

    reverse(str);

    printf("%s",str);
}
