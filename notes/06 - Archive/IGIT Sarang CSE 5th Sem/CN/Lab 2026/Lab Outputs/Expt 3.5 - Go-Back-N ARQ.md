# Experiment 3.5: Simulation of Go-Back-N ARQ Protocol

### Aim
Write and execute a C program to simulate the Go-Back-N Automatic Repeat Request (ARQ) Protocol where the sliding window size and the number of frames are given by the user.

### Source Code (`gobackn_arq.c`)
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ws, nf, base = 0, nxt = 0;
    printf("\nEnter the window size: ");
    if (scanf("%d", &ws) != 1) return 0;
    printf("Enter the number of frames: ");
    if (scanf("%d", &nf) != 1) return 0;
    srand(42);

    while (base < nf) {
        for (int i = 0; i < ws && nxt < nf; i++)
            printf("Sending frame: %d\n", nxt++);

        int corrupted = 0;
        for (int i = base; i < nxt; i++) {
            if (rand() % 5 == 0) {
                printf("Frame %d corrupted!\n", i);
                corrupted = 1;
                break;
            } else {
                printf("Frame %d received successfully\n", i);
                base++;
            }
        }
        if (corrupted) {
            printf("Go-Back-N: Retransmitting from frame %d\n", base);
            nxt = base;
        }
    }
    printf("\nAll frames sent and acknowledged.\n\n");
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 gobackn_arq.c -o gobackn_arq

# Run executable
./gobackn_arq
```

**Sample Input Provided:**
```text
4
6
```

### Execution Output
```text
Enter the window size: 4
Enter the number of frames: 6

Sending frame: 0
Sending frame: 1
Sending frame: 2
Sending frame: 3
Frame 0 received successfully
Frame 1 corrupted!
Go-Back-N: Retransmitting from frame 1
Sending frame: 1
Sending frame: 2
Sending frame: 3
Sending frame: 4
Frame 1 received successfully
Frame 2 received successfully
Frame 3 received successfully
Frame 4 received successfully
Sending frame: 5
Frame 5 received successfully

All frames sent and acknowledged.
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
