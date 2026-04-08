#include<stdio.h>

void numberToWords(int n)
{
    char *words[] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    int rev = 0;

 
    while(n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    
    while(rev > 0)
    {
        printf("%s ", words[rev % 10]);
        rev = rev / 10;
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    numberToWords(num);

    return 0;
}
