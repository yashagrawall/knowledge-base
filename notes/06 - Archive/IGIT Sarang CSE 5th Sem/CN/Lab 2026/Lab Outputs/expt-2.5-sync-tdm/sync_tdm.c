#include <stdio.h>
#include <string.h>

int main() {
    int ch, fsize;
    char d[10][50];
    printf("\nSynchronous TDM Simulation\n==========================\n");
    printf("Enter the number of channels: ");
    if (scanf("%d", &ch) != 1) return 0;
    printf("Enter the frame size (max. number of characters per channel): ");
    if (scanf("%d", &fsize) != 1) return 0;

    for (int i = 0; i < ch; i++) {
        printf("Enter data for channel %d: ", i + 1);
        scanf("%49s", d[i]);
    }

    printf("\n--- Transmitting Frames (Round-Robin Schedule) ---\nTime Slot Order: ");
    for (int i = 0; i < ch; i++) printf("CH%d ", i + 1);
    printf("\n\n");

    for (int f = 0; f < fsize; f++) {
        printf("Frame %d: ", f + 1);
        for (int c = 0; c < ch; c++) {
            if (f < strlen(d[c]) && d[c][0] != '-') printf("%c   ", d[c][f]);
            else printf("-   ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
