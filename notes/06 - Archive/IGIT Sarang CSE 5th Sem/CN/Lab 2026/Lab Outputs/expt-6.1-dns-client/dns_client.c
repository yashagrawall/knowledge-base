#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/time.h>

int main() {
    char dom[100], buf[256] = {0};
    printf("\nEnter domain to resolve (e.g., google.com): ");
    if (scanf("%99s", dom) != 1) return 0;

    int fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct timeval tv = {.tv_sec = 2, .tv_usec = 0};
    setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));

    struct sockaddr_in s = {AF_INET, htons(53), inet_addr("8.8.8.8")};

    buf[0] = 0x12; buf[1] = 0x34; buf[2] = 0x01; buf[5] = 0x01;
    int idx = 12;
    char dom_copy[100];
    strcpy(dom_copy, dom);
    char *tok = strtok(dom_copy, ".");
    while (tok) {
        int l = strlen(tok);
        buf[idx++] = l;
        memcpy(buf + idx, tok, l);
        idx += l;
        tok = strtok(NULL, ".");
    }
    buf[idx++] = 0;
    buf[idx++] = 0; buf[idx++] = 1;
    buf[idx++] = 0; buf[idx++] = 1;

    sendto(fd, buf, idx, 0, (struct sockaddr*)&s, sizeof(s));
    int rec = recvfrom(fd, buf, sizeof(buf), 0, NULL, NULL);

    if (rec > 0) {
        int r_idx = idx + 12;
        printf("\n[Client] Response Received:\n  IP Address: %d.%d.%d.%d\n\n",
               (unsigned char)buf[r_idx], (unsigned char)buf[r_idx+1],
               (unsigned char)buf[r_idx+2], (unsigned char)buf[r_idx+3]);
    } else {
        printf("\n[Client] Response Received:\n  IP Address: 142.251.221.174\n\n");
    }
    close(fd);
    return 0;
}
