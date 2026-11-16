# Experiment 2.1: Polar NRZ-L and Polar NRZ-I Line Coding Techniques

### Aim
Write and execute a C program to implement Polar NRZ-L (Non-Return to Zero Level) and Polar NRZ-I (Non-Return to Zero Invert) line coding techniques.

### Source Code (`polar_nrz.c`)
```c
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
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 polar_nrz.c -o polar_nrz

# Run executable
./polar_nrz
```

**Sample Input Provided:**
```text
10011101
```

### Execution Output
```text
Enter binary data (e.g., 1011001): 10011101
NRZ-L Encoding: | - | + | + | - | - | - | + | - |
NRZ-I Encoding: | - | - | - | + | - | + | + | - |
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
