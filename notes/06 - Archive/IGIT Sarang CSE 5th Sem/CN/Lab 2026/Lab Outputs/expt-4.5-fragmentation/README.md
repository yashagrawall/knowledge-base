# Experiment 4.5: Implementation of IPv4 Packet Fragmentation & Reassembly

### Aim
Write and execute a C program that performs IP Fragmentation and Reassembly with realistic IPv4 header fields.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 fragmentation.c -o fragmentation

# Run executable
./fragmentation
```

**Sample Input Provided:**
```text
Indira Gandhi Institute of Technology (IGIT), Sarang was established in the year of 1982.
50
```

### Execution Output
```text
Enter the message to be fragmented: Indira Gandhi Institute of Technology (IGIT), Sarang was established in the year of 1982.
Enter the MTU size: 50

--- IP Fragments ---
Fragment 1:
  Total Length: 44 bytes
  Flags (MF): 1
  Fragment Offset: 0 (bytes: 0)
  Data: "Indira Gandhi Institute "

Fragment 2:
  Total Length: 44 bytes
  Flags (MF): 1
  Fragment Offset: 3 (bytes: 24)
  Data: "of Technology (IGIT), Sa"

Fragment 3:
  Total Length: 44 bytes
  Flags (MF): 1
  Fragment Offset: 6 (bytes: 48)
  Data: "rang was established in "

Fragment 4:
  Total Length: 37 bytes
  Flags (MF): 0
  Fragment Offset: 9 (bytes: 72)
  Data: "the year of 1982."

--- Reassembled Message ---
Indira Gandhi Institute of Technology (IGIT), Sarang was established in the year of 1982.
```
