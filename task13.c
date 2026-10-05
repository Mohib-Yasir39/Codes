#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int w = rand() % 100 + 1;
    int x = rand() % 100 + 1;
    int y = rand() % 100 + 1;
    int z = rand() % 100 + 1;

    printf("Initial: W: %d, X: %d, Y: %d, Z: %d\n", w, x, y, z);

    int t;
    if (w > x) { t = w; w = x; x = t; }
    if (y > z) { t = y; y = z; z = t; }
    if (w > y) { t = w; w = y; y = t; }
    if (x > z) { t = x; x = z; z = t; }
    if (x > y) { t = x; x = y; y = t; }

    printf("Sorted: W: %d, X: %d, Y: %d, Z: %d\n", w, x, y, z);

    return 0;
}