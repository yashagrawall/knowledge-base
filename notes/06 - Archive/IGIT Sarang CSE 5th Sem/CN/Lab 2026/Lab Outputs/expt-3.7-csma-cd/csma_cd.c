#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int n;
    char frames[5][50];
    srand(7);
    printf("\nEnter number of stations (max 5): ");
    if (scanf("%d", &n) != 1) return 0;
    for (int i = 0; i < n; i++) {
        printf("Enter frame data for Station %d: ", i + 1);
        scanf("%49s", frames[i]);
    }

    for (int i = 0; i < n; i++) {
        int att = 0;
        printf("\nStation %d attempting to transmit: \"%s\"\n", i + 1, frames[i]);
        while (att < 10) {
            if (rand() % 3 == 0) {
                printf("  Medium is busy. Sensing again...\n");
                continue;
            }
            printf("  Medium is idle. Transmitting...\n");
            if (rand() % 4 == 0) {
                att++;
                int r = rand() % (1 << att);
                printf("  ** Collision detected! ** Waiting %d units...\n", r);
                usleep(r * 1000);
            } else {
                printf("  Frame \"%s\" transmitted successfully by Station %d.\n", frames[i], i + 1);
                break;
            }
        }
    }
    printf("\nSimulation complete.\n\n");
    return 0;
}
