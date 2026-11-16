#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check(const char *s) {
    for (int i = 0; s[i]; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("\nInvalid character in binary input data.\n\n");
            exit(0);
        }
    }
}

void nrzL(const char *s) {
    printf("NRZ-L Encoding: ");
    for (int i = 0; s[i]; i++)
        printf("| %c ", s[i] == '0' ? '+' : '-');
    printf("|\n");
}

void nrzI(const char *s) {
    int lvl = 0;
    printf("NRZ-I Encoding: ");
    for (int i = 0; s[i]; i++) {
        if (s[i] == '1') lvl = 1 - lvl;
        printf("| %c ", lvl ? '-' : '+');
    }
    printf("|\n\n");
}

int main() {
    char s[100];
    printf("\nEnter binary data (e.g., 1011001): ");
    if (scanf("%99s", s) != 1) return 0;
    check(s);
    nrzL(s);
    nrzI(s);
    return 0;
}
