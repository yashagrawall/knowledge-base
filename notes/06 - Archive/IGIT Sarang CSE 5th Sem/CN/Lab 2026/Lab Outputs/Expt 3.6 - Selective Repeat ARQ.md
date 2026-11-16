# Experiment 3.6: Simulation of Selective-Repeat ARQ Protocol

### Aim
Write and execute a C program to simulate the Selective-Repeat ARQ protocol where the number of frames and frame data is given by the user.

### Source Code (`selective_repeat_arq.c`)
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nf, data[10], ack[10] = {0}, base = 0;
    srand(123);
    printf("\nEnter the number of frames to transmit (<= 10): ");
    if (scanf("%d", &nf) != 1) return 0;
    for (int i = 0; i < nf; i++) {
        printf("Enter data for frame %d: ", i);
        scanf("%d", &data[i]);
    }

    while (base < nf) {
        printf("\nSending frames:\n");
        for (int i = base; i < base + 4 && i < nf; i++) {
            if (!ack[i]) {
                printf("  Frame %d (Data: %d)", i, data[i]);
                if (rand() % 5 == 0) {
                    printf(" * Frame lost in transit!\n");
                } else if (rand() % 5 == 0) {
                    printf(" * ACK lost!\n");
                } else {
                    printf(" -> ACK received.\n");
                    ack[i] = 1;
                }
            }
        }
        while (base < nf && ack[base]) base++;
    }
    printf("\nAll frames successfully transmitted and acknowledged.\n\n");
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 selective_repeat_arq.c -o selective_repeat_arq

# Run executable
./selective_repeat_arq
```

**Sample Input Provided:**
```text
4
11
22
33
44
```

### Execution Output
```text
Enter the number of frames to transmit (<= 10): 4
Enter data for frame 0: 11
Enter data for frame 1: 22
Enter data for frame 2: 33
Enter data for frame 3: 44

Sending frames:
  Frame 0 (Data: 11) -> ACK received.
  Frame 1 (Data: 22) * ACK lost!
  Frame 2 (Data: 33) -> ACK received.
  Frame 3 (Data: 44) * Frame lost in transit!

Sending frames:
  Frame 1 (Data: 22) -> ACK received.
  Frame 3 (Data: 44) -> ACK received.

All frames successfully transmitted and acknowledged.
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
