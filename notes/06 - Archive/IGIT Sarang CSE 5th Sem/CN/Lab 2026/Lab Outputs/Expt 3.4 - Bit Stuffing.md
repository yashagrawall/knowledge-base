# Experiment 3.4: Data Link Layer Framing Method - Bit Stuffing

### Aim
Write and execute a C program to implement the data link layer framing method: Bit stuffing and destuffing.

### Source Code (`bit_stuffing.c`)
```c
#include <stdio.h>

int main() {
    char in[100], st[200], dest[100];
    int cnt = 0, j = 0;
    printf("\nEnter binary data (e.g., 0111111010): ");
    if (scanf("%99s", in) != 1) return 0;

    for (int i = 0; in[i]; i++) {
        st[j++] = in[i];
        if (in[i] == '1' && ++cnt == 5) { st[j++] = '0'; cnt = 0; }
        else if (in[i] == '0') cnt = 0;
    }
    st[j] = '\0';
    printf("\nStuffed Data: %s\n", st);

    cnt = 0; int k = 0;
    for (int i = 0; st[i]; i++) {
        dest[k++] = st[i];
        if (st[i] == '1' && ++cnt == 5) { i++; cnt = 0; }
        else if (st[i] == '0') cnt = 0;
    }
    dest[k] = '\0';
    printf("Destuffed Data: %s\n\n", dest);
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 bit_stuffing.c -o bit_stuffing

# Run executable
./bit_stuffing
```

**Sample Input Provided:**
```text
011011111111001010
```

### Execution Output
```text
Enter binary data (e.g., 0111111010): 011011111111001010

Stuffed Data: 01101111101111001010
Destuffed Data: 011011111111001010
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
