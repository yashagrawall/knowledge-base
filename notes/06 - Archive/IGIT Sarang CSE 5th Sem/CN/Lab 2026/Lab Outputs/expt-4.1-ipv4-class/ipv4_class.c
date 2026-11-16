#include <stdio.h>

int main() {
    int a, b, c, d;
    char tail;
    printf("\nEnter an IPv4 address: ");
    if (scanf("%d.%d.%d.%d%c", &a, &b, &c, &d, &tail) < 4 || (tail != '\n' && tail != '\0')) {
        printf("Invalid IPv4 address.\n\n");
        return 0;
    }
    if (a < 0 || a > 255 || b < 0 || b > 255 || c < 0 || c > 255 || d < 0 || d > 255) {
        printf("Invalid IPv4 address.\n\n");
        return 0;
    }
    printf("Valid IPv4 address.\n");
    if (a >= 1 && a <= 126) printf("IP Address Class: A\n\n");
    else if (a >= 128 && a <= 191) printf("IP Address Class: B\n\n");
    else if (a >= 192 && a <= 223) printf("IP Address Class: C\n\n");
    else if (a >= 224 && a <= 239) printf("IP Address Class: D\n\n");
    else if (a >= 240 && a <= 254) printf("IP Address Class: E\n\n");
    else printf("IP Address Class: Unknown/Special\n\n");
    return 0;
}
