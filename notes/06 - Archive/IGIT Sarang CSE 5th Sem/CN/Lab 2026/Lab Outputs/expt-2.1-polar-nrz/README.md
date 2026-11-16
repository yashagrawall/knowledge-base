# Experiment 2.1: Polar NRZ-L and Polar NRZ-I Line Coding Techniques

### Aim
Write and execute a C program to implement Polar NRZ-L (Non-Return to Zero Level) and Polar NRZ-I (Non-Return to Zero Invert) line coding techniques.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 polar_nrz.c -o polar_nrz

# Run executable
./polar_nrz
```

**Sample Input Provided:**
```text
10011101
```

### Execution Output
```text
Enter binary data (e.g., 1011001): 10011101
NRZ-L Encoding: | - | + | + | - | - | - | + | - |
NRZ-I Encoding: | - | - | - | + | - | + | + | - |
```
