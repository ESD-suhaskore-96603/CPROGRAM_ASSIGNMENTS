#include <stdio.h>
#include <limits.h>

void printBinary(unsigned int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }

    char binary[33];
    int i = 0;

    while (n > 0) {
        if (n % 2 == 1) {
            binary[i] = '1';
        } else {
            binary[i] = '0';
        }
        n = n / 2;
        i++;
    }

    binary[i] = '\0';

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", binary[j]);
    }
    printf("\n");
}

int main() {
    unsigned int number;

    printf("Enter a positive integer to convert to binary: ");
    scanf("%u", &number);

    printf("The binary representation of %u is: ", number);
    printBinary(number);

    return 0;
}

