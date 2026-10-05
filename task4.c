#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("N: ");
    scanf("%d", &n);

    if ((n >= 10) && (n <= 99) && (n % 2 == 0)) {
        printf("Valid Even Two-Digit Number\n");
    }

    if (!((n >= 10) && (n <= 99) && (n % 2 == 0))) {
        printf("Out of Range or Odd\n");
    }

    return 0;
}