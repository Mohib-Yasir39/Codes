#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, c;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);

    if (((a > b) && (a < c)) || ((a < b) && (a > c))) {
        printf("A (%d) is the middle value\n", a);
    }

    if (((b > a) && (b < c)) || ((b < a) && (b > c))) {
        printf("B (%d) is the middle value\n", b);
    }

    if (((c > a) && (c < b)) || ((c < a) && (c > b))) {
        printf("C (%d) is the middle value\n", c);
    }

    return 0;
}