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
