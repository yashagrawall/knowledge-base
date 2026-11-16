# Experiment 4.7: Implementation of Link State Routing using Dijkstra's Algorithm

### Aim
Write and execute a C program to implement Link State Routing using the Dijkstra Algorithm.

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
