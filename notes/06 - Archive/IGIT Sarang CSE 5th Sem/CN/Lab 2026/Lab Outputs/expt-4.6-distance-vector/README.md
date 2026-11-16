# Experiment 4.6: Implementation of Distance Vector Routing using Bellman-Ford Algorithm

### Aim
Write and execute a C program to implement Distance Vector Routing using the Bellman-Ford Algorithm.

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
