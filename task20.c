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

    if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a) && (a == b) && (b == c)) {
        printf("Valid Equilateral Triangle\n");
    }

    if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a) && (((a == b) && (a != c)) || ((a == c) && (a != b)) || ((b == c) && (b != a)))) {
        printf("Valid Isosceles Triangle\n");
    }

    if ((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a) && (a != b) && (b != c) && (a != c)) {
        printf("Valid Scalene Triangle\n");
    }

    if (!((a > 0) && (b > 0) && (c > 0) && (a + b > c) && (a + c > b) && (b + c > a))) {
        printf("Invalid Triangle\n");
    }

    return 0;
}