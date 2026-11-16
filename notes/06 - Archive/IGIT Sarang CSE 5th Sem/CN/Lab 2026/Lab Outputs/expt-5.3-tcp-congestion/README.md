# Experiment 5.3: Simulation of TCP Congestion Control Technique

### Aim
Write and execute a C program to simulate TCP congestion control technique (Slow Start, Congestion Avoidance, and Congestion Detection).

### Compilation & Execution
```bash
# Compile source code
gcc -O2 tcp_congestion.c -o tcp_congestion

# Run executable
./tcp_congestion
```

### Execution Output
```text
=== TCP CONGESTION CONTROL SIMULATION ===
Round 1: cwnd = 1, ssthresh = 8 (Slow Start Phase)
Round 2: cwnd = 2, ssthresh = 8 (Slow Start Phase)
Round 3: cwnd = 4, ssthresh = 8 (Slow Start Phase)
Round 4: cwnd = 8, ssthresh = 8 (Congestion Avoidance Phase)
Round 5: cwnd = 9, ssthresh = 8 [* Packet Loss Detected! *]
Round 6: cwnd = 1, ssthresh = 4 (Slow Start Phase)
Round 7: cwnd = 2, ssthresh = 4 (Slow Start Phase)
Round 8: cwnd = 4, ssthresh = 4 (Congestion Avoidance Phase)
```
