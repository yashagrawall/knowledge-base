# Experiment 5.2: Simulation of TCP Message Exchange Technique

### Aim
Write and execute a C program to simulate TCP message exchange comprising connection establishment, data transfer, and connection termination.

### Source Code (`tcp_exchange.c`)
```c
#include <stdio.h>

int main() {
    int ch, c_seq = 100, s_seq = 500, cnt;
    char buf[100];
    do {
        printf("\nMenu:\n1. Establish Connection\n2. Send Data\n3. Terminate Connection\n4. Exit\nEnter choice: ");
        if (scanf("%d", &ch) != 1) break;
        switch (ch) {
            case 1:
                printf("\n=== TCP CONNECTION ESTABLISHMENT (3-WAY HANDSHAKE) ===\n");
                printf("Client -> [SEQ: %d, ACK: 0, FLAGS: SYN]\n", c_seq);
                printf("Server -> [SEQ: %d, ACK: %d, FLAGS: SYN-ACK]\n", s_seq, ++c_seq);
                printf("Client -> [SEQ: %d, ACK: %d, FLAGS: ACK]\nConnection Established Successfully!\n", c_seq, ++s_seq);
                break;
            case 2:
                printf("\nEnter number of packets to send: ");
                scanf("%d", &cnt);
                for (int i = 1; i <= cnt; i++) {
                    printf("Enter data for packet %d: ", i);
                    scanf("%99s", buf);
                    printf("Client -> [SEQ: %d, ACK: 0, FLAGS: DATA, DATA: %s]\n", c_seq, buf);
                    c_seq += 10;
                    printf("Server -> [SEQ: %d, ACK: %d, FLAGS: ACK]\n", s_seq, c_seq);
                }
                break;
            case 3:
                printf("\n=== TCP CONNECTION TERMINATION (4-WAY HANDSHAKE) ===\n");
                printf("Client -> [FLAGS: FIN]\nServer -> [FLAGS: ACK]\nServer -> [FLAGS: FIN]\nClient -> [FLAGS: ACK]\nConnection Terminated Successfully!\n");
                break;
        }
    } while (ch != 4);
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 tcp_exchange.c -o tcp_exchange

# Run executable
./tcp_exchange
```

**Sample Input Provided:**
```text
1
2
2
PacketA
PacketB
3
4
```

### Execution Output
```text
Menu:
1. Establish Connection
2. Send Data
3. Terminate Connection
4. Exit
Enter choice: 1

=== TCP CONNECTION ESTABLISHMENT (3-WAY HANDSHAKE) ===
Client -> [SEQ: 100, ACK: 0, FLAGS: SYN]
Server -> [SEQ: 500, ACK: 101, FLAGS: SYN-ACK]
Client -> [SEQ: 101, ACK: 501, FLAGS: ACK]
Connection Established Successfully!

Menu:
1. Establish Connection
2. Send Data
3. Terminate Connection
4. Exit
Enter choice: 2
Enter number of packets to send: 2
Enter data for packet 1: PacketA
Client -> [SEQ: 101, ACK: 0, FLAGS: DATA, DATA: PacketA]
Server -> [SEQ: 501, ACK: 111, FLAGS: ACK]
Enter data for packet 2: PacketB
Client -> [SEQ: 111, ACK: 0, FLAGS: DATA, DATA: PacketB]
Server -> [SEQ: 501, ACK: 121, FLAGS: ACK]

Menu:
1. Establish Connection
2. Send Data
3. Terminate Connection
4. Exit
Enter choice: 3

=== TCP CONNECTION TERMINATION (4-WAY HANDSHAKE) ===
Client -> [FLAGS: FIN]
Server -> [FLAGS: ACK]
Server -> [FLAGS: FIN]
Client -> [FLAGS: ACK]
Connection Terminated Successfully!
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
