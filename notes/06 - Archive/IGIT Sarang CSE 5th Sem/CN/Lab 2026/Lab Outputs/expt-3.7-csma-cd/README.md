# Experiment 3.7: Simulation of CSMA/CD Protocol

### Aim
Write and execute a C program to simulate the CSMA/CD protocol where the number of stations and data to be sent by each station is given by the user.

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
