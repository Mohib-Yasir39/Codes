#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int x = rand(), y = rand(), z = rand();

    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("Z: %d\n", z);

    if ((x < y) && (x < z)) {
        printf("Smallest: %d\n", x);
    }

    if ((y < x) && (y < z)) {
        printf("Smallest: %d\n", y);
    }

    if ((z < x) && (z < y)) {
        printf("Smallest: %d\n", z);
    }

    if (!((x < y && x < z) || (y < x && y < z) || (z < x && z < y))) {
        printf("No unique smallest value\n");
    }

    return 0;
} 