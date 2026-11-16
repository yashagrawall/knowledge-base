# Experiment 2.4: MLT-3 (Multiline Transition, Three Level) Line Coding Technique

### Aim
Write and execute a C program to implement the MLT-3 line coding technique.

### Source Code (`mlt3.c`)
```c
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
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 mlt3.c -o mlt3

# Run executable
./mlt3
```

**Sample Input Provided:**
```text
01011011
```

### Execution Output
```text
Enter the binary data stream (e.g., 1011001): 01011011

MLT-3 Encoded Signal: | 0V | +V | +V | 0V | -V | -V | 0V | +V |
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
