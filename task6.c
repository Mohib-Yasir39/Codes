#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int amt;
    printf("enter amount: ");
    scanf("%d", &amt);

    if ((amt > 0) && (amt % 100 == 0)) {
        printf("1000 Notes: %d\n", amt / 1000);
        printf("500 Notes: %d\n", (amt % 1000) / 500);
        printf("100 Notes: %d\n", ((amt % 1000) % 500) / 100);
    }

    if (!((amt > 0) && (amt % 100 == 0))) {
        printf("Invalid Amount: Must be a positive multiple of 100\n");
    }

    return 0;
}