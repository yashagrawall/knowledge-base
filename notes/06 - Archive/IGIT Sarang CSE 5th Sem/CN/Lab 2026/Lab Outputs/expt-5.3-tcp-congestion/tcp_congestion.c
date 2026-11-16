#include <stdio.h>

int main() {
    int cwnd = 1, ssthresh = 8;
    printf("\n=== TCP CONGESTION CONTROL SIMULATION ===\n");
    for (int r = 1; r <= 8; r++) {
        printf("Round %d: cwnd = %d, ssthresh = %d ", r, cwnd, ssthresh);
        if (r == 5) {
            printf("[* Packet Loss Detected! *]\n");
            ssthresh = (cwnd / 2 > 1) ? cwnd / 2 : 1;
            cwnd = 1;
            continue;
        }
        if (cwnd < ssthresh) {
            printf("(Slow Start Phase)\n");
            cwnd *= 2;
        } else {
            printf("(Congestion Avoidance Phase)\n");
            cwnd += 1;
        }
    }
    printf("\n");
    return 0;
}
