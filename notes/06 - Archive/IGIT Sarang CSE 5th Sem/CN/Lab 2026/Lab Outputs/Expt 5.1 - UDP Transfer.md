# Experiment 5.1: Simulation of UDP Data Transfer

### Aim
Write and execute a C program to simulate data transfer using UDP.

### Source Code (`udp_transfer.c`)
```c
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/wait.h>

int main() {
    char msg[1024];
    printf("\n=== UDP DATA TRANSFER SIMULATION ===\n\nEnter your message: ");
    if (scanf(" %[^\n]", msg) != 1) return 0;

    pid_t pid = fork();
    if (pid == 0) {
        usleep(100000);
        int fd = socket(AF_INET, SOCK_DGRAM, 0);
        struct sockaddr_in r = {AF_INET, htons(54321), inet_addr("127.0.0.1")};
        for (size_t i = 0; i < strlen(msg); i += 16) {
            sendto(fd, msg + i, 16, 0, (struct sockaddr*)&r, sizeof(r));
            usleep(20000);
        }
        sendto(fd, "##END##", 7, 0, (struct sockaddr*)&r, sizeof(r));
        close(fd);
        _exit(0);
    } else {
        int fd = socket(AF_INET, SOCK_DGRAM, 0);
        struct sockaddr_in r = {AF_INET, htons(54321), INADDR_ANY};
        bind(fd, (struct sockaddr*)&r, sizeof(r));
        char buf[64] = {0}, full[1024] = {0};
        printf("\n=== RECEIVER ===\n");
        while (1) {
            int n = recvfrom(fd, buf, 16, 0, NULL, NULL);
            if (n <= 0) break;
            buf[n] = '\0';
            if (strcmp(buf, "##END##") == 0) break;
            printf("[Receiver] Received packet: \"%.*s\"\n", n, buf);
            strncat(full, buf, n);
        }
        printf("\n[Receiver] Full Reconstructed Message: %s\n\n", full);
        close(fd);
        waitpid(pid, NULL, 0);
    }
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 udp_transfer.c -o udp_transfer

# Run executable
./udp_transfer
```

**Sample Input Provided:**
```text
This program demonstrates UDP-based data transfer.
```

### Execution Output
```text
=== UDP DATA TRANSFER SIMULATION ===

Enter your message: This program demonstrates UDP-based data transfer.

=== RECEIVER ===
[Receiver] Received packet: "This program dem"
[Receiver] Received packet: "onstrates UDP-ba"
[Receiver] Received packet: "sed data transfe"
[Receiver] Received packet: "r."

[Receiver] Full Reconstructed Message: This program demonstrates UDP-based data transfer.
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
