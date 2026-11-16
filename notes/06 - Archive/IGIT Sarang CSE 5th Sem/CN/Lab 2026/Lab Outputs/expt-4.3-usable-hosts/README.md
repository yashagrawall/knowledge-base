# Experiment 4.3: Generation of All Usable Host IP Addresses in a Subnet

### Aim
Write and execute a C program that takes a subnet in CIDR notation and generates all valid host IP addresses in that subnet range.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 usable_hosts.c -o usable_hosts

# Run executable
./usable_hosts
```

**Sample Input Provided:**
```text
192.188.1.0/28
```

### Execution Output
```text
Enter subnet in CIDR notation (e.g., 192.168.1.0/29): 192.188.1.0/28

Usable IP addresses in subnet 192.188.1.0/28:
192.188.1.1
192.188.1.2
192.188.1.3
192.188.1.4
192.188.1.5
192.188.1.6
192.188.1.7
192.188.1.8
192.188.1.9
192.188.1.10
192.188.1.11
192.188.1.12
192.188.1.13
192.188.1.14
```
