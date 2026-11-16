# Experiment 5.1: Simulation of UDP Data Transfer

### Aim
Write and execute a C program to simulate data transfer using UDP.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 udp_transfer.c -o udp_transfer

# Run executable
./udp_transfer
```

**Sample Input Provided:**
```text
This program demonstrates UDP-based data transfer.
```

### Execution Output
```text
=== UDP DATA TRANSFER SIMULATION ===

Enter your message: This program demonstrates UDP-based data transfer.

=== RECEIVER ===
[Receiver] Received packet: "This program dem"
[Receiver] Received packet: "onstrates UDP-ba"
[Receiver] Received packet: "sed data transfe"
[Receiver] Received packet: "r."

[Receiver] Full Reconstructed Message: This program demonstrates UDP-based data transfer.
```
