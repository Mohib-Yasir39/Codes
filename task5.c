#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, c;
    printf("Side 1: ");
    scanf("%d", &a);
    printf("Side 2: ");
    scanf("%d", &b);
    printf("Side 3: ");
    scanf("%d", &c);

    if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid Triangle\n");
    }

    if (!((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a))) {
        printf("Invalid Triangle\n");
    }

    return 0;
}