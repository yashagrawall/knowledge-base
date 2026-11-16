# Experiment 4.7: Implementation of Link State Routing using Dijkstra's Algorithm

### Aim
Write and execute a C program to implement Link State Routing using the Dijkstra Algorithm.

### Source Code (`link_state.c`)
```c
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
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 link_state.c -o link_state

# Run executable
./link_state
```

**Sample Input Provided:**
```text
4
0 1 999 3
1 0 1 999
999 1 0 2
3 999 2 0
0
```

### Execution Output
```text
Enter number of routers: 4

--- Enter cost matrix (use 999 for infinity) ---
0 1 999 3
1 0 1 999
999 1 0 2
3 999 2 0

Enter source router (0 to 3): 0

Shortest paths from router 0:
To 0: Cost = 0
To 1: Cost = 1
To 2: Cost = 2
To 3: Cost = 3
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
