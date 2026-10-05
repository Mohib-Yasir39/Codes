#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, c;
    printf("Math: ");
    scanf("%d", &a);
    printf("Physics: ");
    scanf("%d", &b);
    printf("Programming: ");
    scanf("%d", &c);

    if ((a >= 80) && (b >= 80) && (c >= 80)) {
        printf("Excellent\n");
    }

    if ((a >= 60) && (b >= 60) && (c >= 60) && !((a >= 80) && (b >= 80) && (c >= 80))) {
        printf("Good\n");
    }

    if ((a < 50) || (b < 50) || (c < 50)) {
        printf("Needs Improvement\n");
    }

    return 0;
}