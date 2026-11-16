#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ws, nf, base = 0, nxt = 0;
    printf("\nEnter the window size: ");
    if (scanf("%d", &ws) != 1) return 0;
    printf("Enter the number of frames: ");
    if (scanf("%d", &nf) != 1) return 0;
    srand(42);

    while (base < nf) {
        for (int i = 0; i < ws && nxt < nf; i++)
            printf("Sending frame: %d\n", nxt++);

        int corrupted = 0;
        for (int i = base; i < nxt; i++) {
            if (rand() % 5 == 0) {
                printf("Frame %d corrupted!\n", i);
                corrupted = 1;
                break;
            } else {
                printf("Frame %d received successfully\n", i);
                base++;
            }
        }
        if (corrupted) {
            printf("Go-Back-N: Retransmitting from frame %d\n", base);
            nxt = base;
        }
    }
    printf("\nAll frames sent and acknowledged.\n\n");
    return 0;
}
