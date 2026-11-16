#include <stdio.h>
#define INF 999

int main() {
    int n, src, cost[20][20], dist[20], vis[20] = {0};
    printf("\nEnter number of routers: ");
    if (scanf("%d", &n) != 1) return 0;
    printf("\n--- Enter cost matrix (use %d for infinity) ---\n", INF);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) scanf("%d", &cost[i][j]);
    }
    printf("\nEnter source router (0 to %d): ", n - 1);
    if (scanf("%d", &src) != 1) return 0;

    for (int i = 0; i < n; i++) dist[i] = cost[src][i];
    dist[src] = 0; vis[src] = 1;

    for (int c = 1; c < n; c++) {
        int min = INF, u = -1;
        for (int i = 0; i < n; i++)
            if (!vis[i] && dist[i] < min) { min = dist[i]; u = i; }
        if (u == -1) break;
        vis[u] = 1;
        for (int v = 0; v < n; v++)
            if (!vis[v] && cost[u][v] != INF && dist[u] + cost[u][v] < dist[v])
                dist[v] = dist[u] + cost[u][v];
    }

    printf("\nShortest paths from router %d:\n", src);
    for (int i = 0; i < n; i++)
        printf("To %d: Cost = %d\n", i, dist[i]);
    printf("\n");
    return 0;
}
