#include <stdio.h>
#include <string.h>

long long modexp(long long b, long long e, long long m) {
    long long res = 1;
    b %= m;
    while (e > 0) {
        if (e % 2 == 1) res = (res * b) % m;
        b = (b * b) % m;
        e /= 2;
    }
    return res;
}

int main() {
    long long p = 61, q = 53, n = p * q, e = 17, d = 2753;
    char msg[100];
    long long enc[100];

    printf("\nPublic key (e, n) = (%lld, %lld)\nPrivate key (d, n) = (%lld, %lld)\n", e, n, d, n);
    printf("\nEnter message to encrypt: ");
    if (scanf(" %[^\n]", msg) != 1) return 0;

    printf("\nEncrypted (as values): ");
    for (int i = 0; msg[i]; i++) {
        enc[i] = modexp((unsigned char)msg[i], e, n);
        printf("%lld ", enc[i]);
    }

    printf("\n\nDecrypted message: ");
    for (int i = 0; msg[i]; i++)
        printf("%c", (char)modexp(enc[i], d, n));
    printf("\n\n");
    return 0;
}
