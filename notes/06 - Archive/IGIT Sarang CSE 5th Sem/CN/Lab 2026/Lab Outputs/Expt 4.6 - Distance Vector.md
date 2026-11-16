# Experiment 4.6: Implementation of Distance Vector Routing using Bellman-Ford Algorithm

### Aim
Write and execute a C program to implement Distance Vector Routing using the Bellman-Ford Algorithm.

### Source Code (`distance_vector.c`)
```c
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
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 distance_vector.c -o distance_vector

# Run executable
./distance_vector
```

**Sample Input Provided:**
```text
4
0 5 7 9
5 0 11 22
7 11 0 34
9 22 34 0
```

### Execution Output
```text
Enter number of routers (Max. 10): 4

--- Enter cost matrix (use 999 for infinity) ---
0 5 7 9
5 0 11 22
7 11 0 34
9 22 34 0

--- Final Routing Tables ---

Router 0 Routing Table:
Destination  Cost  Next Hop
         0     0        0
         1     5        1
         2     7        2
         3     9        3

Router 1 Routing Table:
Destination  Cost  Next Hop
         0     5        0
         1     0        1
         2    11        2
         3    14        0

Router 2 Routing Table:
Destination  Cost  Next Hop
         0     7        0
         1    11        1
         2     0        2
         3    16        0

Router 3 Routing Table:
Destination  Cost  Next Hop
         0     9        0
         1    14        0
         2    16        0
         3     0        3
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
