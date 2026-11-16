# Experiment 3.1: Cyclic Redundancy Check (CRC) Error Detection Method

### Aim
Write and execute a C program to implement the Cyclic Redundancy Check (CRC) error detection method.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 crc.c -o crc

# Run executable
./crc
```

**Sample Input Provided:**
```text
1001
1011
```

### Execution Output
```text
Enter the data to be sent (in binary): 1001
Enter the pre-determined divisor (in binary): 1011

-- Sender Side --
Data: 1001
Pre-determined divisor: 1011
Codeword (Data + CRC): 1001110

-- Receiver Side --
Data is correct (No errors detected)

Simulating an error...
Erroneous Received Data: 0001110
Data is incorrect (Error detected)
```
