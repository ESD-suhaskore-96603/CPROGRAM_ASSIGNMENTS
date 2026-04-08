#include <stdio.h>

int main() {
    char c;
    int ascii;

    printf("Enter a character: ");
    scanf("%c", &c);

    ascii = (int)c;

    if (ascii >= 65 && ascii <= 90) {
        printf("ALPHABET\n");
        printf("UPPERCASE\n");
    }
    else if (ascii >= 97 && ascii <= 122) {
        printf("ALPHABET\n");
        printf("LOWERCASE\n");
    }
    else if (ascii >= 48 && ascii <= 57) {
        printf("DIGIT\n");
    }
    else if (ascii == 32 || ascii == 9 || ascii == 10 || ascii == 13) {
        printf("SPACE\n");
    }
    else {
        printf("OTHER\n");
    }

    return 0;
}
