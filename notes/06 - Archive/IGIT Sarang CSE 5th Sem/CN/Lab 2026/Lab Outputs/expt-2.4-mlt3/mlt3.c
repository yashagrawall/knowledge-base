#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int cur = 0, last = -1;
    printf("\nEnter the binary data stream (e.g., 1011001): ");
    if (scanf("%99s", s) != 1) return 0;

    printf("\nMLT-3 Encoded Signal: ");
    for (int i = 0; s[i]; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("Invalid input character.\n\n");
            return 0;
        }
        if (s[i] == '1') {
            if (cur == 0) { cur = -last; last = cur; }
            else cur = 0;
        }
        if (cur == 0) printf("| 0V ");
        else printf(cur == 1 ? "| +V " : "| -V ");
    }
    printf("|\n\n");
    return 0;
}
