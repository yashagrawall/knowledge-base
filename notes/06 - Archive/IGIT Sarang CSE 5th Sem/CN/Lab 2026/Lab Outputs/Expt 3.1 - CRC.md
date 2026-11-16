# Experiment 3.1: Cyclic Redundancy Check (CRC) Error Detection Method

### Aim
Write and execute a C program to implement the Cyclic Redundancy Check (CRC) error detection method.

### Source Code (`crc.c`)
```c
#include <stdio.h>
#include <string.h>

void mod2div(char *data, char *gen, char *rem) {
    char tmp[200];
    int dlen = strlen(data), glen = strlen(gen);
    strcpy(tmp, data);
    for (int i = 0; i <= dlen - glen; i++) {
        if (tmp[i] == '1') {
            for (int j = 0; j < glen; j++)
                tmp[i + j] = (tmp[i + j] == gen[j]) ? '0' : '1';
        }
    }
    strncpy(rem, tmp + dlen - glen + 1, glen - 1);
    rem[glen - 1] = '\0';
}

int main() {
    char data[100], gen[30], rem[30], cw[150];
    printf("\nEnter the data to be sent (in binary): ");
    if (scanf("%99s", data) != 1) return 0;
    printf("Enter the pre-determined divisor (in binary): ");
    if (scanf("%29s", gen) != 1) return 0;

    strcpy(cw, data);
    int glen = strlen(gen);
    for (int i = 0; i < glen - 1; i++) strcat(cw, "0");
    mod2div(cw, gen, rem);

    strcpy(cw, data);
    strcat(cw, rem);
    printf("\n-- Sender Side --\nData: %s\nPre-determined divisor: %s\nCodeword (Data + CRC): %s\n", data, gen, cw);

    printf("\n-- Receiver Side --\n");
    mod2div(cw, gen, rem);
    int err = 0;
    for (int i = 0; rem[i]; i++) if (rem[i] == '1') err = 1;
    printf(err ? "Data is incorrect (Error detected)\n" : "Data is correct (No errors detected)\n");

    printf("\nSimulating an error...\n");
    cw[0] = (cw[0] == '0') ? '1' : '0';
    printf("Erroneous Received Data: %s\n", cw);
    mod2div(cw, gen, rem);
    err = 0;
    for (int i = 0; rem[i]; i++) if (rem[i] == '1') err = 1;
    printf(err ? "Data is incorrect (Error detected)\n\n" : "Data is correct (No errors detected)\n\n");
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 crc.c -o crc

# Run executable
./crc
```

**Sample Input Provided:**
```text
1001
1011
```

### Execution Output
```text
Enter the data to be sent (in binary): 1001
Enter the pre-determined divisor (in binary): 1011

-- Sender Side --
Data: 1001
Pre-determined divisor: 1011
Codeword (Data + CRC): 1001110

-- Receiver Side --
Data is correct (No errors detected)

Simulating an error...
Erroneous Received Data: 0001110
Data is incorrect (Error detected)
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
