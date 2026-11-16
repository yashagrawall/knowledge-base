# Experiment 4.4: Implementation of Variable Length Subnet Masking (VLSM)

### Aim
Write and execute a C program that allocates subnets using VLSM and generates the list of allocated subnets with proper mask.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 vlsm.c -o vlsm

# Run executable
./vlsm
```

**Sample Input Provided:**
```text
192.168.0.0/24
3
56
34
20
```

### Execution Output
```text
Enter major network in CIDR notation (e.g., 192.168.0.0/24): 192.168.0.0/24
Enter number of subnets to allocate: 3
Enter number of hosts for subnet 1: 56
Enter number of hosts for subnet 2: 34
Enter number of hosts for subnet 3: 20

--- VLSM Subnet Allocation ---
Subnet 1: 192.168.0.0/26 (Hosts: 62)
Subnet 2: 192.168.0.64/26 (Hosts: 62)
Subnet 3: 192.168.0.128/27 (Hosts: 30)
```
