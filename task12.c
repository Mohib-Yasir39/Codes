#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int w = rand() % 100 + 1;
    int x = rand() % 100 + 1;
    int y = rand() % 100 + 1;
    int z = rand() % 100 + 1;

    printf("W: %d, X: %d, Y: %d, Z: %d\n", w, x, y, z);

    int l = w;
    if (x > l) l = x;
    if (y > l) l = y;
    if (z > l) l = z;

    int s = w;
    if (x < s) s = x;
    if (y < s) s = y;
    if (z < s) s = z;

    int d = l - s;
    printf("Largest: %d, Smallest: %d, Difference: %d\n", l, s, d);

    if (((l + s) / 2.0) > 50.0) {
        printf("Midpoint is greater than 50\n");
    }

    return 0;
}