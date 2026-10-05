#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("enter integer: ");
    scanf("%d", &n);

    if ((n > 0) && (n % 2 == 0)) {
        printf("Positive Even\n");
    }

    if ((n > 0) && (n % 2 != 0)) {
        printf("Positive Odd\n");
    }

    if ((n < 0) && (n % 2 == 0)) {
        printf("Negative Even\n");
    }

    if ((n < 0) && (n % 2 != 0)) {
        printf("Negative Odd\n");
    }

    if (n == 0) {
        printf("Zero\n");
    }

    return 0;
}