# Experiment 3.7: Simulation of CSMA/CD Protocol

### Aim
Write and execute a C program to simulate the CSMA/CD protocol where the number of stations and data to be sent by each station is given by the user.

### Source Code (`csma_cd.c`)
```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int n;
    char frames[5][50];
    srand(7);
    printf("\nEnter number of stations (max 5): ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        printf("Enter frame data for Station %d: ", i + 1);
        scanf("%49s", frames[i]);
    }

    for (int i = 0; i < n; i++) {
        int att = 0;
        printf("\nStation %d attempting to transmit: \"%s\"\n", i + 1, frames[i]);
        while (att < 10) {
            if (rand() % 3 == 0) {
                printf("  Medium is busy. Sensing again...\n");
                continue;
            }
            printf("  Medium is idle. Transmitting...\n");
            if (rand() % 4 == 0) {
                att++;
                int r = rand() % (1 << att);
                printf("  ** Collision detected! ** Waiting %d units...\n", r);
                usleep(r * 1000);
            } else {
                printf("  Frame \"%s\" transmitted successfully by Station %d.\n", frames[i], i + 1);
                break;
            }
        }
    }
    printf("\nSimulation complete.\n\n");
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 csma_cd.c -o csma_cd

# Run executable
./csma_cd
```

**Sample Input Provided:**
```text
2
FrameA
FrameB
```

### Execution Output
```text
Enter number of stations (max 5): 2
Enter frame data for Station 1: FrameA
Enter frame data for Station 2: FrameB

Station 1 attempting to transmit: "FrameA"
  Medium is busy. Sensing again...
  Medium is busy. Sensing again...
  Medium is idle. Transmitting...
  Frame "FrameA" transmitted successfully by Station 1.

Station 2 attempting to transmit: "FrameB"
  Medium is idle. Transmitting...
  Frame "FrameB" transmitted successfully by Station 2.

Simulation complete.
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
