# Experiment 4.4: Implementation of Variable Length Subnet Masking (VLSM)

### Aim
Write and execute a C program that allocates subnets using VLSM and generates the list of allocated subnets with proper mask.

### Source Code (`vlsm.c`)
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>

int cmp(const void *a, const void *b) { return (*(int*)b - *(int*)a); }

int main() {
    char net_str[30];
    int n, req[20];
    printf("\nEnter major network in CIDR notation (e.g., 192.168.0.0/24): ");
    if (scanf("%29s", net_str) != 1) return 0;
    char *slash = strchr(net_str, '/');
    if (!slash) return 1;
    *slash = '\0';

    unsigned int base;
    inet_pton(AF_INET, net_str, &base);
    base = ntohl(base);

    printf("Enter number of subnets to allocate: ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        printf("Enter number of hosts for subnet %d: ", i + 1);
        scanf("%d", &req[i]);
    }
    qsort(req, n, sizeof(int), cmp);

    printf("\n--- VLSM Subnet Allocation ---\n");
    struct in_addr a;
    for (int i = 0; i < n; i++) {
        int b = 0;
        while ((1 << b) - 2 < req[i]) b++;
        a.s_addr = htonl(base);
        printf("Subnet %d: %s/%d (Hosts: %d)\n", i + 1, inet_ntoa(a), 32 - b, (1 << b) - 2);
        base += (1 << b);
    }
    printf("\n");
    return 0;
}
```

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

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
