#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char ch;
    printf("Enter character: ");
    scanf(" %c", &ch);

    if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
        printf("Uppercase Vowel\n");
    }

    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u')) {
        printf("Lowercase Vowel\n");
    }

    if ((ch >= '0') && (ch <= '9')) {
        printf("Digit\n");
    }

    if (!((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || 
          (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || 
          ((ch >= '0') && (ch <= '9')))) {
        printf("Other Character\n");
    }

    return 0;
}