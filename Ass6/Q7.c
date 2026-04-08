#include<stdio.h>
#include<stdio.h>

void decimalToRoman(int num)
{
    int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char *roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    for(int i=0;i<13;i++)
    {
        while(num >= values[i])
        {
            printf("%s", roman[i]);
            num = num - values[i];
        }
    }
}

#include<stdio.h>
#include<string.h>

int value(char r)
{
    if(r=='I') return 1;
    if(r=='V') return 5;
    if(r=='X') return 10;
    if(r=='L') return 50;
    if(r=='C') return 100;
    if(r=='D') return 500;
    if(r=='M') return 1000;
    return 0;
}

int romanToDecimal(char str[])
{
    int res = 0;

    for(int i=0; str[i]!='\0'; i++)
    {
        int s1 = value(str[i]);
        int s2 = value(str[i+1]);

        if(s1 >= s2)
            res += s1;
        else
        {
            res += (s2 - s1);
            i++;
        }
    }

    return res;
}


