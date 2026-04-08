#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

unsigned char setEvenParity(unsigned char byte) {
    int count = 0;
    unsigned char temp = byte;

    while (temp > 0) {
        if (temp % 2 == 1) {
            count++;
        }
        temp = temp / 2;
    }

    if (count % 2 != 0) {
        return byte | 128;
    } else {
        return byte;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    unsigned char original_number = (unsigned char)atoi(argv[1]);
    
    printf("Original number: %u\n", original_number);
    printf("Binary: ");
    printBinary(original_number);
    printf("\n");

    // Check and set even parity
    unsigned char new_number = setEvenParity(original_number);

    printf("New number with even parity: %u\n", new_number);
    printf("Binary: ");
    printBinary(new_number);
    printf("\n");

    return 0;
}

