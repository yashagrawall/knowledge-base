# Experiment 4.2: Determination of Subnet Information: Addresses & Hosts

### Aim
Write and execute a C program that takes an IPv4 address and subnet mask as input and calculates Network Address, Broadcast Address, First Usable Host, Last Usable Host, and Number of Usable Hosts.

### Source Code (`subnet_info.c`)
```c
#include <stdio.h>
#include <arpa/inet.h>

int main() {
    char ip_s[20], msk_s[20];
    unsigned int ip, msk;
    printf("\nEnter IP address (e.g., 192.168.1.10): ");
    if (scanf("%19s", ip_s) != 1) return 0;
    printf("Enter Subnet Mask (e.g., 255.255.255.0): ");
    if (scanf("%19s", msk_s) != 1) return 0;

    if (inet_pton(AF_INET, ip_s, &ip) != 1 || inet_pton(AF_INET, msk_s, &msk) != 1) {
        printf("\nInvalid IP address or subnet mask.\n\n");
        return 1;
    }
    ip = ntohl(ip); msk = ntohl(msk);
    unsigned int net = ip & msk, bcast = net | (~msk);
    struct in_addr a;

    printf("\n--- Subnet Info ---\n");
    a.s_addr = htonl(net);       printf("Network Address   : %s\n", inet_ntoa(a));
    a.s_addr = htonl(bcast);     printf("Broadcast Address : %s\n", inet_ntoa(a));
    a.s_addr = htonl(net + 1);   printf("First Usable Host : %s\n", inet_ntoa(a));
    a.s_addr = htonl(bcast - 1); printf("Last Usable Host  : %s\n", inet_ntoa(a));
    printf("Number of Hosts   : %u\n\n", bcast > net + 1 ? bcast - net - 1 : 0);
    return 0;
}
```

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

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
