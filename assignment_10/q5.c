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

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <character>\n", argv[0]);
        return 1;
    }

    char input_char = argv[1][0];

    processCharacter(input_char);

    return 0;
}

