# Experiment 2.2: Polar Manchester and Differential Manchester Line Coding Techniques

### Aim
Write and execute a C program to implement Polar Manchester and Differential Manchester line coding techniques.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 manchester.c -o manchester

# Run executable
./manchester
```

**Sample Input Provided:**
```text
8
1 0 0 1 1 1 0 1
```

### Execution Output
```text
Enter the number of data bits: 8
Enter the data bits (0 or 1) separated by space: 1 0 0 1 1 1 0 1

Polar Manchester Encoding: | - to + | + to - | + to - | - to + | - to + | - to + | + to - | - to + |
Differential Manchester Encoding: | - to + | - to + | - to + | + to - | - to + | + to - | + to - | - to + |
```
