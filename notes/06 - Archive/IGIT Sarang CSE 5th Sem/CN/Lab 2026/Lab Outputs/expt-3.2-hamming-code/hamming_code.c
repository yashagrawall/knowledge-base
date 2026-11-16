#include <stdio.h>

int main() {
    int d[4], c[7], s[3], pos;
    printf("\nEnter 4-bit dataword (a0 a1 a2 a3): ");
    for (int i = 0; i < 4; i++) {
        if (scanf("%d", &d[i]) != 1) return 0;
    }

    c[0] = (d[0] + d[1] + d[2]) % 2;
    c[1] = (d[1] + d[2] + d[3]) % 2;
    c[2] = (d[0] + d[1] + d[3]) % 2;
    c[3] = d[0]; c[4] = d[1]; c[5] = d[2]; c[6] = d[3];

    printf("\nEncoded 7-bit codeword (r0 r1 r2 a0 a1 a2 a3): ");
    for (int i = 0; i < 7; i++) printf("%d ", c[i]);

    printf("\n\nEnter bit position to introduce error (1-7, 0 for no error): ");
    if (scanf("%d", &pos) != 1) return 0;
    if (pos > 0 && pos <= 7) {
        c[pos - 1] ^= 1;
        printf("\nCodeword with error: ");
        for (int i = 0; i < 7; i++) printf("%d ", c[i]);
    }

    printf("\n\n--- Receiver Side ---\n");
    s[0] = (c[3] + c[4] + c[5] + c[0]) % 2;
    s[1] = (c[4] + c[5] + c[6] + c[1]) % 2;
    s[2] = (c[3] + c[4] + c[6] + c[2]) % 2;

    int syn = (s[2] << 2) | (s[1] << 1) | s[0];
    int map[8] = {0, 1, 2, 6, 3, 4, 7, 5};
    int err = map[syn];

    if (err) {
        printf("Error detected at bit position: %d\n", err);
        c[err - 1] ^= 1;
    } else {
        printf("No error detected.\n");
    }

    printf("Corrected Codeword: ");
    for (int i = 0; i < 7; i++) printf("%d ", c[i]);
    printf("\n\n");
    return 0;
}
