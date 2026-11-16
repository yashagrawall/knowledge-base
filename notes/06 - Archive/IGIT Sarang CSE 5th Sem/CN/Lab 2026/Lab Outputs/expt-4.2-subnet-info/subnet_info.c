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
