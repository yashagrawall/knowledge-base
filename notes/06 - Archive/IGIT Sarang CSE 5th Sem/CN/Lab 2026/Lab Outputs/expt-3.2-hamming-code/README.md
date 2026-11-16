# Experiment 3.2: Hamming Code C(7,4) Error Detection and Correction Technique

### Aim
Write and execute a C program to implement the Hamming Code C(7,4) error detection and correction technique.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 hamming_code.c -o hamming_code

# Run executable
./hamming_code
```

**Sample Input Provided:**
```text
0 0 1 1
5
```

### Execution Output
```text
Enter 4-bit dataword (a0 a1 a2 a3): 0 0 1 1

Encoded 7-bit codeword (r0 r1 r2 a0 a1 a2 a3): 1 0 1 0 0 1 1 

Enter bit position to introduce error (1-7, 0 for no error): 5

Codeword with error: 1 0 1 0 1 1 1 

--- Receiver Side ---
Error detected at bit position: 5
Corrected Codeword: 1 0 1 0 0 1 1
```
