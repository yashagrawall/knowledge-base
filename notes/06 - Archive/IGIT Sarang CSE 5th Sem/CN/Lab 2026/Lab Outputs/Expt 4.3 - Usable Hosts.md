# Experiment 4.3: Generation of All Usable Host IP Addresses in a Subnet

### Aim
Write and execute a C program that takes a subnet in CIDR notation and generates all valid host IP addresses in that subnet range.

### Source Code (`usable_hosts.c`)
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main() {
    char in[40];
    printf("\nEnter subnet in CIDR notation (e.g., 192.168.1.0/29): ");
    if (scanf("%39s", in) != 1) return 0;
    char *slash = strchr(in, '/');
    if (!slash) return 1;
    *slash = '\0';
    int p = atoi(slash + 1);

    unsigned int ip;
    inet_pton(AF_INET, in, &ip);
    ip = ntohl(ip);
    unsigned int msk = p == 0 ? 0 : (~0U << (32 - p));
    unsigned int net = ip & msk, bcast = net | (~msk);

    printf("\nUsable IP addresses in subnet %s/%d:\n", in, p);
    struct in_addr a;
    for (unsigned int h = net + 1; h < bcast; h++) {
        a.s_addr = htonl(h);
        printf("%s\n", inet_ntoa(a));
    }
    printf("\n");
    return 0;
}
```

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

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
