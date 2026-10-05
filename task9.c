#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int w = rand(), x = rand(), y = rand(), z = rand();

    printf("W: %d\n", w);
    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    printf("Z: %d\n", z);

    if ((w > x) && (w > y) && (w > z)) {
        printf("W is Largest\n");
    }

    if ((x > w) && (x > y) && (x > z)) {
        printf("X is Largest\n");
    }

    if ((y > w) && (y > x) && (y > z)) {
        printf("Y is Largest\n");
    }

    if ((z > w) && (z > x) && (z > y)) {
        printf("Z is Largest\n");
    }

    return 0;
}