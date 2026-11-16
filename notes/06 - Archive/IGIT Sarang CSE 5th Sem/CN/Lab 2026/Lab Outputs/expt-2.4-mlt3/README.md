# Experiment 2.4: MLT-3 (Multiline Transition, Three Level) Line Coding Technique

### Aim
Write and execute a C program to implement the MLT-3 line coding technique.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 mlt3.c -o mlt3

# Run executable
./mlt3
```

**Sample Input Provided:**
```text
01011011
```

### Execution Output
```text
Enter the binary data stream (e.g., 1011001): 01011011

MLT-3 Encoded Signal: | 0V | +V | +V | 0V | -V | -V | 0V | +V |
```
