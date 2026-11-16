# Experiment 6.2: Implementation of Message Confidentiality Using RSA Encryption and Decryption

### Aim
Write and execute a C program that uses RSA algorithm to encrypt a text message and decrypt the same.

### Source Code (`rsa_cipher.c`)
```c
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
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 rsa_cipher.c -o rsa_cipher

# Run executable
./rsa_cipher
```

**Sample Input Provided:**
```text
Demonstration of RSA algorithm
```

### Execution Output
```text
Public key (e, n) = (17, 3233)
Private key (d, n) = (2753, 3233)

Enter message to encrypt: Demonstration of RSA algorithm

Encrypted (as values): 1759 1313 2271 2185 2235 1230 884 2412 1632 884 3179 2185 2235 1992 2185 1369 1992 1859 2680 2790 1992 1632 745 2923 2185 2412 3179 884 2170 2271 

Decrypted message: Demonstration of RSA algorithm
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
