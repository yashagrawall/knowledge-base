# Experiment 4.2: Determination of Subnet Information: Addresses & Hosts

### Aim
Write and execute a C program that takes an IPv4 address and subnet mask as input and calculates Network Address, Broadcast Address, First Usable Host, Last Usable Host, and Number of Usable Hosts.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 subnet_info.c -o subnet_info

# Run executable
./subnet_info
```

**Sample Input Provided:**
```text
192.168.4.8
255.255.255.0
```

### Execution Output
```text
Enter IP address (e.g., 192.168.1.10): 192.168.4.8
Enter Subnet Mask (e.g., 255.255.255.0): 255.255.255.0

--- Subnet Info ---
Network Address   : 192.168.4.0
Broadcast Address : 192.168.4.255
First Usable Host : 192.168.4.1
Last Usable Host  : 192.168.4.254
Number of Hosts   : 254
```
