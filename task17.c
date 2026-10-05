#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int n = rand() % 900 + 100;

    int h = n / 100;
    int t = (n / 10) % 10;
    int u = n % 10;

    printf("N: %d -> ", n);

    if ((h < t) && (t < u)) {
        printf("Digits in Ascending Order\n");
    }

    if (!((h < t) && (t < u))) {
        printf("Not in Ascending Order\n");
    }

    return 0;
}