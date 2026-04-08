#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
    {
        printf("No prime factors.\n");
        return 0;
    }

    int i = 2;

    while(num > 1)
    {
        if(num % i == 0)
        {
            printf("%d ", i);
            num = num / i;
        }
        else
        {
            i++;
        }
    }

    return 0;
}
