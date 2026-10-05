#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int x = rand() % 100 + 1;
    int y = rand() % 100 + 1;
    int z = rand() % 100 + 1;

    printf("Initial: X: %d, Y: %d, Z: %d\n", x, y, z);

    int t;
    if (x < y) { t = x; x = y; y = t; }
    if (y < z) { t = y; y = z; z = t; }
    if (x < y) { t = x; x = y; y = t; }

    printf("Sorted: X: %d, Y: %d, Z: %d\n", x, y, z);

    return 0;
}