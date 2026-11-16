# Experiment 2.5: Synchronous Time Division Multiplexing (TDM) Technique

### Aim
Write and execute a C program to implement Synchronous Time Division Multiplexing (TDM) technique.

### Source Code (`sync_tdm.c`)
```c
#include <stdio.h>
#include <string.h>

int main() {
    int ch, fsize;
    char d[10][50];
    printf("\nSynchronous TDM Simulation\n==========================\n");
    printf("Enter the number of channels: ");
    if (scanf("%d", &ch) != 1) return 0;
    printf("Enter the frame size (max. number of characters per channel): ");
    if (scanf("%d", &fsize) != 1) return 0;

    for (int i = 0; i < ch; i++) {
        printf("Enter data for channel %d: ", i + 1);
        scanf("%49s", d[i]);
    }

    printf("\n--- Transmitting Frames (Round-Robin Schedule) ---\nTime Slot Order: ");
    for (int i = 0; i < ch; i++) printf("CH%d ", i + 1);
    printf("\n\n");

    for (int f = 0; f < fsize; f++) {
        printf("Frame %d: ", f + 1);
        for (int c = 0; c < ch; c++) {
            if (f < strlen(d[c]) && d[c][0] != '-') printf("%c   ", d[c][f]);
            else printf("-   ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 sync_tdm.c -o sync_tdm

# Run executable
./sync_tdm
```

**Sample Input Provided:**
```text
4
7
India
-
America
Network
```

### Execution Output
```text
Synchronous TDM Simulation
==========================
Enter the number of channels: 4
Enter the frame size (max. number of characters per channel): 7
Enter data for channel 1: India
Enter data for channel 2: -
Enter data for channel 3: America
Enter data for channel 4: Network

--- Transmitting Frames (Round-Robin Schedule) ---
Time Slot Order: CH1 CH2 CH3 CH4 

Frame 1: I   -   A   N   
Frame 2: n   -   m   e   
Frame 3: d   -   e   t   
Frame 4: i   -   r   w   
Frame 5: a   -   i   o   
Frame 6: -   -   c   r   
Frame 7: -   -   a   k
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
