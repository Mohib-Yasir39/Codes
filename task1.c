#include <stdio.h>
#include <stdlib.h>

int main() {
    int y;
    printf("enter year: ");
    scanf("%d", &y);

    if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0))) {
        printf("Leap Year\n");
    }

    if (!((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))) {
        printf("not a Leap Year\n");
    }

    return 0;
}