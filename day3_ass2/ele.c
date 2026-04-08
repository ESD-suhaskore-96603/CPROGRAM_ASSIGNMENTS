#include <stdio.h>

int main() {
    float x, y;

    printf("Enter x-coordinate: ");
    scanf("%f", &x);

    printf("Enter y-coordinate: ");
    scanf("%f", &y);

    if (x == 0 && y == 0) {
        printf("Point lies at the ORIGIN\n");
    }
    else if (x == 0) {
        printf("Point lies on the Y-AXIS\n");
    }
    else if (y == 0) {
        printf("Point lies on the X-AXIS\n");
    }
    else if (x > 0 && y > 0) {
        printf("Point lies in FIRST QUADRANT\n");
    }
    else if (x < 0 && y > 0) {
        printf("Point lies in SECOND QUADRANT\n");
    }
    else if (x < 0 && y < 0) {
        printf("Point lies in THIRD QUADRANT\n");
    }
    else if (x > 0 && y < 0) {
        printf("Point lies in FOURTH QUADRANT\n");
    }

    return 0;
}
