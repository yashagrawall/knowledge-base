# Experiment 3.5: Simulation of Go-Back-N ARQ Protocol

### Aim
Write and execute a C program to simulate the Go-Back-N Automatic Repeat Request (ARQ) Protocol where the sliding window size and the number of frames are given by the user.

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
