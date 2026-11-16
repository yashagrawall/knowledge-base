# Experiment 2.2: Polar Manchester and Differential Manchester Line Coding Techniques

### Aim
Write and execute a C program to implement Polar Manchester and Differential Manchester line coding techniques.

### Source Code (`manchester.c`)
```c
#include <stdio.h>
#include <stdlib.h>

void manchester(int d[], int n) {
    printf("\nPolar Manchester Encoding: ");
    for (int i = 0; i < n; i++) {
        if (d[i] == 0) printf("| + to - ");
        else if (d[i] == 1) printf("| - to + ");
        else { printf("Invalid data bit\n"); return; }
    }
    printf("|\n");
}

void diffManchester(int d[], int n) {
    int lvl = 1;
    printf("Differential Manchester Encoding: ");
    for (int i = 0; i < n; i++) {
        if (d[i] == 0) {
            printf(lvl ? "| + to - " : "| - to + ");
        } else if (d[i] == 1) {
            lvl = 1 - lvl;
            printf(lvl ? "| + to - " : "| - to + ");
        } else {
            printf("Invalid data bit\n"); return;
        }
    }
    printf("|\n\n");
}

int main() {
    int n;
    printf("\nEnter the number of data bits: ");
    if (scanf("%d", &n) != 1) return 0;
    int *d = (int *)malloc(n * sizeof(int));
    printf("Enter the data bits (0 or 1) separated by space: ");
    for (int i = 0; i < n; i++) scanf("%d", &d[i]);
    manchester(d, n);
    diffManchester(d, n);
    free(d);
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 manchester.c -o manchester

# Run executable
./manchester
```

**Sample Input Provided:**
```text
8
1 0 0 1 1 1 0 1
```

### Execution Output
```text
Enter the number of data bits: 8
Enter the data bits (0 or 1) separated by space: 1 0 0 1 1 1 0 1

Polar Manchester Encoding: | - to + | + to - | + to - | - to + | - to + | - to + | + to - | - to + |
Differential Manchester Encoding: | - to + | - to + | - to + | + to - | - to + | + to - | + to - | - to + |
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
