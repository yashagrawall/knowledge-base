# Experiment 2.3: 2B1Q (Two-Binary One-Quaternary) Multilevel Line Coding Technique

### Aim
Write and execute a C program to implement the 2B1Q Multilevel line coding technique.

### Source Code (`line_coding_2b1q.c`)
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int prev = 1;
    printf("\nEnter a binary string (of even length): ");
    if (scanf("%99s", s) != 1) return 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("\nError! Invalid character in binary input string (must be '0' or '1').\n\n");
            return 0;
        }
    }
    if (len % 2 != 0) {
        printf("\nError! Binary input string length must be even for 2B1Q encoding.\n\n");
        return 0;
    }

    printf("\n2B1Q Encoded Output: ");
    for (int i = 0; i < len; i += 2) {
        int dibit = (s[i] - '0') * 2 + (s[i + 1] - '0');
        int pos_map[4] = {1, 3, -1, -3};
        int val = (prev > 0) ? pos_map[dibit] : -pos_map[dibit];
        printf("| %+d ", val);
        prev = val;
    }
    printf("|\n\n");
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 line_coding_2b1q.c -o line_coding_2b1q

# Run executable
./line_coding_2b1q
```

**Sample Input Provided:**
```text
0011011001
```

### Execution Output
```text
Enter a binary string (of even length): 0011011001

2B1Q Encoded Output: | +1 | -3 | -3 | +1 | +3 |
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
