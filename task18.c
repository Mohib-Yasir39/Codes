#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int w, x, y, z;
    printf("W: ");
    scanf("%d", &w);
    printf("X: ");
    scanf("%d", &x);
    printf("Y: ");
    scanf("%d", &y);
    printf("Z: ");
    scanf("%d", &z);

    int c = 0;
    if ((w < 20) || (w > 80)) {
        c = c + 1;
    }
    if ((x < 20) || (x > 80)) {
        c = c + 1;
    }
    if ((y < 20) || (y > 80)) {
        c = c + 1;
    }
    if ((z < 20) || (z > 80)) {
        c = c + 1;
    }

    printf("%d variables are outside the range [20, 80]\n", c);

    return 0;
}