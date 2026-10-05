#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int x = rand() % 5 + 1;
    int y = rand() % 5 + 1;
    int z = rand() % 5 + 1;

    printf("X: %d, Y: %d, Z: %d\n", x, y, z);

    if ((x == y) && (y == z)) {
        printf("All values are equal\n");
    }

    if ((x != y) && (y != z) && (x != z)) {
        printf("All values are distinct\n");
    }

    if (!((x == y) && (y == z)) && !((x != y) && (y != z) && (x != z))) {
        printf("Two values are equal\n");
    }

    return 0;
}