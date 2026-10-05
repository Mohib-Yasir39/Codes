#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sec, h, m, s;
    printf("Seconds: ");
    scanf("%d", &sec);

    h = sec / 3600;
    m = (sec % 3600) / 60;
    s = sec % 60;

    printf("Hours: %d\n", h);
    printf("Minutes: %d\n", m);
    printf("Seconds: %d\n", s);

    if (sec < 60) {
        printf("Less than one minute\n");
    }

    if ((sec >= 3600) && (sec <= 86400)) {
        printf("Within one day range\n");
    }

    return 0;
}