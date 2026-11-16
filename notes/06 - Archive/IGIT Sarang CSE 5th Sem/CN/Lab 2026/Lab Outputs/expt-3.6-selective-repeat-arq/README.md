# Experiment 3.6: Simulation of Selective-Repeat ARQ Protocol

### Aim
Write and execute a C program to simulate the Selective-Repeat ARQ protocol where the number of frames and frame data is given by the user.

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
