#include <stdio.h>
#include <stdlib.h>

void printBinary(unsigned int n) {
    if (n == 0) {
        printf("0");
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
}

void processCharacter(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("The character '%c' is an alphabet.\n", c);
        
        printf("Original character: '%c'\n", c);
        printf("ASCII value: %d\n", c);
        printf("Binary representation: ");
        printBinary(c);
        printf("\n");

        char result = c ^ 32;

        printf("After XOR with 32:\n");
        printf("Resulting character: '%c'\n", result);
        printf("ASCII value: %d\n", result);
        printf("Binary representation: ");
        printBinary(result);
        printf("\n");
        
    } else {
        printf("The character '%c' is not an alphabet.\n", c);
    }
}

void swapNumbersXOR(int *a, int *b) {
    if (*a != *b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

int main(int argc, char *argv[]) {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\nBefore swap:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    swapNumbersXOR(&num1, &num2);

    printf("\nAfter swap:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}

