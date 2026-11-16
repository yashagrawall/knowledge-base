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
