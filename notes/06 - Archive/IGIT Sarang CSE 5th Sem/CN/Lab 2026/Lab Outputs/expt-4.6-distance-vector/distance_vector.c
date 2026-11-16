#include <stdio.h>
#define INF 999

int main() {
    int n, cost[10][10], dist[10][10], hop[10][10];
    printf("\nEnter number of routers (Max. 10): ");
    if (scanf("%d", &n) != 1) return 0;

    printf("\n--- Enter cost matrix (use %d for infinity) ---\n", INF);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            dist[i][j] = cost[i][j];
            hop[i][j] = (cost[i][j] != INF && i != j) ? j : i;
        }
    }

    int upd;
    do {
        upd = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int k = 0; k < n; k++)
                    if (dist[i][j] > cost[i][k] + dist[k][j]) {
                        dist[i][j] = cost[i][k] + dist[k][j];
                        hop[i][j] = hop[i][k];
                        upd = 1;
                    }
    } while (upd);

    printf("\n--- Final Routing Tables ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nRouter %d Routing Table:\nDestination  Cost  Next Hop\n", i);
        for (int j = 0; j < n; j++)
            printf("%10d %5d %8d\n", j, dist[i][j], hop[i][j]);
    }
    printf("\n");
    return 0;
}
