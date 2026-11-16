#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nf, data[10], ack[10] = {0}, base = 0;
    srand(123);
    printf("\nEnter the number of frames to transmit (<= 10): ");
    if (scanf("%d", &nf) != 1) return 0;
    for (int i = 0; i < nf; i++) {
        printf("Enter data for frame %d: ", i);
        scanf("%d", &data[i]);
    }

    while (base < nf) {
        printf("\nSending frames:\n");
        for (int i = base; i < base + 4 && i < nf; i++) {
            if (!ack[i]) {
                printf("  Frame %d (Data: %d)", i, data[i]);
                if (rand() % 5 == 0) {
                    printf(" * Frame lost in transit!\n");
                } else if (rand() % 5 == 0) {
                    printf(" * ACK lost!\n");
                } else {
                    printf(" -> ACK received.\n");
                    ack[i] = 1;
                }
            }
        }
        while (base < nf && ack[base]) base++;
    }
    printf("\nAll frames successfully transmitted and acknowledged.\n\n");
    return 0;
}
