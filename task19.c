#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    double x, y;
    printf("X: ");
    scanf("%lf", &x);
    printf("Y: ");
    scanf("%lf", &y);

    if ((x == 0) && (y == 0)) {
        printf("Origin\n");
    }

    if (((x == 0) && (y != 0)) || ((y == 0) && (x != 0))) {
        printf("Axis\n");
    }

    if ((x > 0) && (y > 0)) {
        printf("Quadrant 1\n");
    }

    if ((x < 0) && (y > 0)) {
        printf("Quadrant 2\n");
    }

    if ((x < 0) && (y < 0)) {
        printf("Quadrant 3\n");
    }

    if ((x > 0) && (y < 0)) {
        printf("Quadrant 4\n");
    }

    return 0;
}