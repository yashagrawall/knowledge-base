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
