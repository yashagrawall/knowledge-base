# Design and Analysis of Algorithms (DAA) — Comprehensive Lab & Theory Viva Voce Guide

**Target Date:** 17th November 2026  
**Course Code:** PCCS4306 (Theory & Lab)  
**Department:** CSEA, IGIT Sarang  
**Associated Notes:** [[DAA Lab Manual]] · [[DAA Study Flow & Execution Guide]] · [[DAA Theory Syllabus]] · [[DAA PYQs Analysis & Question Bank]]

---

## 1. Algorithm Fundamentals, Asymptotic Notations & Recurrences (Module I)

### Algorithm Properties & Asymptotic Analysis

**Q: What is an algorithm and what are its five essential properties?**  
**A:** An algorithm is a finite sequence of unambiguous, step-by-step computational instructions that transforms a valid input into the required output. Its five essential properties are:
1. **Input:** Zero or more well-defined externally supplied quantities.
2. **Output:** At least one produced quantity corresponding to the solution.
3. **Definiteness:** Every instruction must be clear, precise, and unambiguous.
4. **Finiteness:** The algorithm must terminate after a finite number of steps for all valid inputs.
5. **Effectiveness:** Every operation must be basic enough to be carried out deterministically in finite time.

**Q: Differentiate between Priori Analysis and Posteriori Analysis of an algorithm.**  
**A:**
* **Priori (Theoretical) Analysis:** Conducted *before* implementation; determines asymptotic time and space bounds as a mathematical function of input size $n$, independent of hardware, compiler, or programming language.
* **Posteriori (Empirical) Analysis:** Conducted *after* implementing and executing the program on a physical target machine; measures actual wall-clock execution time (in milliseconds) and memory bytes consumed.

**Q: Define the five standard asymptotic notations ($O, \Omega, \Theta, o, \omega$).**  
**A:**
* **Big-Oh $O(g(n))$ (Asymptotic Upper Bound):** $f(n) = O(g(n))$ if there exist positive constants $c > 0$ and $n_0 > 0$ such that $0 \le f(n) \le c \cdot g(n)$ for all $n \ge n_0$. (Analogous to $\le$).
* **Big-Omega $\Omega(g(n))$ (Asymptotic Lower Bound):** $f(n) = \Omega(g(n))$ if there exist positive constants $c > 0$ and $n_0 > 0$ such that $0 \le c \cdot g(n) \le f(n)$ for all $n \ge n_0$. (Analogous to $\ge$).
* **Theta $\Theta(g(n))$ (Asymptotically Tight Bound):** $f(n) = \Theta(g(n))$ if there exist positive constants $c_1, c_2 > 0$ and $n_0 > 0$ such that $0 \le c_1 g(n) \le f(n) \le c_2 g(n)$ for all $n \ge n_0$. Here, $f(n) = \Theta(g(n)) \iff f(n) = O(g(n))$ and $f(n) = \Omega(g(n))$. (Analogous to $=$).
* **Little-oh $o(g(n))$ (Strict Upper Bound):** Upper bound that is *not* asymptotically tight: $\lim_{n \to \infty} \frac{f(n)}{g(n)} = 0$. (Analogous to $<$).
* **Little-omega $\omega(g(n))$ (Strict Lower Bound):** Lower bound that is *not* asymptotically tight: $\lim_{n \to \infty} \frac{f(n)}{g(n)} = \infty$. (Analogous to $>$).

**Q: Rank the standard complexity growth classes from fastest (most efficient) to slowest.**  
**A:**
$$O(1) < O(\log \log n) < O(\log n) < O(\sqrt{n}) < O(n) < O(n \log n) < O(n^2) < O(n^3) < O(2^n) < O(n!) < O(n^n)$$

---

### Solving Recurrence Relations

**Q: What are the three primary methods for solving recurrence relations?**  
**A:**
1. **Substitution Method:** Guess the form of the bound and use mathematical induction to prove the guess and solve for constants.
2. **Recursion-Tree Method:** Expand the recurrence into a tree whose nodes represent the non-recursive work at each level, sum the cost per level, and sum across all levels (height of tree).
3. **Master Method:** Directly solves divide-and-conquer recurrences of the form:
$$T(n) = a T\left(\frac{n}{b}\right) + f(n) \quad (\text{where } a \ge 1, b > 1)$$

**Q: State the three cases of the Master Theorem.**  
**A:** Compare the driving function $f(n)$ with the critical watershed polynomial $n^{\log_b a}$:
* **Case 1 (Leaf-Dominated):** If $f(n) = O(n^{\log_b a - \epsilon})$ for some constant $\epsilon > 0$ (i.e., $f(n)$ is polynomially smaller), then:
$$T(n) = \Theta(n^{\log_b a})$$
* **Case 2 (Evenly Distributed across Levels):** If $f(n) = \Theta(n^{\log_b a} \log^k n)$ for $k \ge 0$, then:
$$T(n) = \Theta(n^{\log_b a} \log^{k+1} n)$$
*(For $k = 0$, $f(n) = \Theta(n^{\log_b a}) \implies T(n) = \Theta(n^{\log_b a} \log n)$).*
* **Case 3 (Root-Dominated):** If $f(n) = \Omega(n^{\log_b a + \epsilon})$ for some $\epsilon > 0$ *and* $a f(n/b) \le c f(n)$ for some $c < 1$ (regularity condition), then:
$$T(n) = \Theta(f(n))$$

**Q: When does the Master Theorem fail to apply?**  
**A:** It fails when:
1. $a < 1$ or $b \le 1$, or $a$ is not a constant (e.g., $T(n) = 2^n T(n/2) + n^n$).
2. $f(n)$ is non-positive or falls into the **polynomial gap** between Cases 1 and 2 or Cases 2 and 3 (e.g., $T(n) = 2T(n/2) + \frac{n}{\log n}$, where $f(n)$ is smaller than $n$ by a logarithmic factor rather than a polynomial factor $n^\epsilon$).

---

## 2. Sorting, Searching & Divide-and-Conquer (Lab Expts 1–4, 6 & Module II–III)

### Master Comparison Table of Sorting Algorithms (Lab Expts 1–4)

| Algorithm | Lab Expt | Design Paradigm | Best Case | Average Case | Worst Case | Auxiliary Space | In-Place? | Stable? |
| :--- | :---: | :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| **Insertion Sort** | **Expt 1** | Incremental | $\Theta(n)$ | $\Theta(n^2)$ | $\Theta(n^2)$ | $O(1)$ | Yes | **Yes** |
| **Merge Sort** | **Expt 2** | Divide & Conquer | $\Theta(n \log n)$ | $\Theta(n \log n)$ | $\Theta(n \log n)$ | $O(n)$ | No | **Yes** |
| **Heap Sort** | **Expt 3** | Transform & Conquer | $\Theta(n \log n)$ | $\Theta(n \log n)$ | $\Theta(n \log n)$ | $O(1)$ | Yes | **No** |
| **Quick Sort** | **Expt 4** | Divide & Conquer | $\Theta(n \log n)$ | $\Theta(n \log n)$ | $\Theta(n^2)$ | $O(\log n)$ stack | Yes | **No** |

**Q: What does it mean for a sorting algorithm to be "Stable" and "In-Place"?**  
**A:**
* **Stable:** Duplicate elements with equal keys preserve their original relative order in the sorted output (e.g., Insertion Sort and Merge Sort are stable; Quick Sort and Heap Sort are unstable).
* **In-Place:** Uses only $O(1)$ extra auxiliary storage (excluding recursion call stack) beyond the input array itself.

---

### Insertion Sort & Binary Search (Lab Expts 1 & 6)

**Q: Why is Insertion Sort (Expt 1) preferred for small or nearly sorted arrays?**  
**A:** When the input array is already sorted (or nearly sorted with $k$ inversions), the inner `while` loop condition `a[j] > key` fails immediately on each pass, yielding a linear **Best-Case time complexity of $\Theta(n)$** (or $\Theta(n + k)$) with minimal constant overhead and $O(1)$ space.

**Q: How does Binary Search (Expt 6) work, what is its recurrence, and why must the array be sorted?**  
**A:** Binary Search compares the target key with the middle element `a[mid]` where `mid = low + (high - low) / 2`. Because the array is sorted in monotonic order, if `key < a[mid]`, the right half is eliminated; if `key > a[mid]`, the left half is eliminated.
* **Recurrence:** $T(n) = T(n/2) + \Theta(1) \implies \Theta(\log n)$ worst/average case, and $O(1)$ best case (when found at `mid` on the first comparison).
* **Iterative vs Recursive Space:** Iterative Binary Search uses $O(1)$ auxiliary space, whereas Recursive Binary Search uses $O(\log n)$ call-stack space.

---

### Merge Sort, Quick Sort & Strassen's Multiplication (Lab Expts 2, 4 & Module III)

**Q: Explain the recurrence relation and space complexity of Merge Sort (Expt 2).**  
**A:** Merge Sort splits the array into two equal halves of size $n/2$, recursively sorts both halves ($2T(n/2)$), and merges the two sorted halves in linear time ($\Theta(n)$):
$$T(n) = 2T\left(\frac{n}{2}\right) + \Theta(n) \implies \Theta(n \log n) \text{ (by Master Theorem Case 2)}$$
It requires **$O(n)$ auxiliary space** for the temporary array `temp[]` during the `merge()` step, so it is **not** an in-place sorting algorithm.

**Q: How does Quick Sort work, and when does its worst-case $\Theta(n^2)$ behavior occur (Expt 4)?**  
**A:** Quick Sort selects a **pivot** element and partitions the array in $\Theta(n)$ time so that all elements $\le \text{pivot}$ are placed to its left and all elements $> \text{pivot}$ are placed to its right, placing the pivot in its final sorted index.
* **Best / Average Case:** Balanced split ($n/2$ and $n/2$):
$$T(n) = 2T\left(\frac{n}{2}\right) + \Theta(n) \implies \Theta(n \log n)$$
* **Worst Case:** Unbalanced $0 : (n - 1)$ split at every step, which happens when the input array is **already sorted in ascending or descending order** (or all elements are identical) and the first or last element is chosen as the pivot:
$$T(n) = T(n - 1) + T(0) + \Theta(n) \implies \Theta(n^2)$$
* **How to avoid Worst Case:** Use **Randomized Quick Sort** (pick a random pivot) or the **Median-of-Three** pivot selection strategy.

**Q: Why is Quick Sort often faster in practice than Merge Sort despite having a $\Theta(n^2)$ worst case?**  
**A:** Quick Sort operates **in-place** without allocating or copying into an $O(n)$ auxiliary buffer, exhibits superior CPU cache locality during sequential array partitioning, and has smaller hidden constant factors in its inner loop.

**Q: How does Strassen's Matrix Multiplication improve upon the standard $O(n^3)$ algorithm?**  
**A:** Standard divide-and-conquer matrix multiplication divides two $n \times n$ matrices into four $(n/2) \times (n/2)$ submatrices and performs **8 recursive multiplications**:
$$T(n) = 8T(n/2) + \Theta(n^2) \implies \Theta(n^{\log_2 8}) = \Theta(n^3)$$
Strassen's algorithm uses algebraic combinations to reduce the recursive multiplications from **8 to 7** at the cost of 18 matrix additions/subtractions:
$$T(n) = 7T(n/2) + \Theta(n^2) \implies \Theta(n^{\log_2 7}) \approx \Theta(n^{2.81})$$

**Q: What is the theoretical lower bound for any comparison-based sorting algorithm, and how is it proved?**  
**A:** Any comparison-based sorting algorithm requires $\Omega(n \log n)$ comparisons in the worst case.
* **Proof via Decision Tree:** A binary decision tree sorting $n$ elements must have at least $n!$ leaves (one for each possible permutation). A binary tree of height $h$ has at most $2^h$ leaves:
$$2^h \ge n! \implies h \ge \log_2(n!) = \Omega(n \log n) \quad (\text{by Stirling's approximation})$$

---

## 3. Heaps, AVL Trees & Hashing (Lab Expt 3 & Module II)

### Binary Heaps & Heap Sort (Lab Expt 3)

**Q: What is a Binary Heap and how is a Max-Heap represented in an array (Expt 3)?**  
**A:** A Binary Heap is a **complete binary tree** (completely filled on all levels except possibly the lowest, which is filled from left to right) that satisfies the heap order property. In a **Max-Heap**, every parent node is greater than or equal to its children ($A[\text{parent}(i)] \ge A[i]$).
For a 0-indexed array representation of node $i$:
* **Parent index:** $\lfloor (i - 1) / 2 \rfloor$
* **Left Child index:** $2i + 1$
* **Right Child index:** $2i + 2$
* **Non-leaf nodes:** Indices $0$ to $\lfloor n/2 \rfloor - 1$; **Leaf nodes:** Indices $\lfloor n/2 \rfloor$ to $n - 1$.

**Q: What is the time complexity of `heapify()`, `build_max_heap()`, and `heap_sort()` (Expt 3)?**  
**A:**
* **`heapify()` (sift-down a single node):** $O(\log n)$ (proportional to the height of the node).
* **`build_max_heap()` (bottom-up from $\lfloor n/2 \rfloor - 1$ down to $0$):** **$O(n)$ linear time!** Although calling $O(\log n)$ heapify $n/2$ times looks like $O(n \log n)$, most nodes are near the bottom of the tree with tiny heights, and the tight summation $\sum_{h=0}^{\lfloor \log n \rfloor} \lceil \frac{n}{2^{h+1}} \rceil O(h) = O\left(n \sum_{h=0}^{\infty} \frac{h}{2^h}\right) = O(2n) = O(n)$.
* **`heap_sort()`:** $O(n)$ to build the max-heap + $(n - 1)$ extractions each taking $O(\log n)$ $\implies \Theta(n \log n)$ in best, average, and worst cases, using $O(1)$ auxiliary space.

**Q: What are Min-Max Heaps and Binomial Heaps?**  
**A:**
* **Min-Max Heap:** A complete binary tree with alternating min-levels (even levels $0, 2, 4, \dots$) and max-levels (odd levels $1, 3, 5, \dots$), supporting both `Find-Min` and `Find-Max` in $O(1)$ time and `Delete-Min`/`Delete-Max` in $O(\log n)$ time.
* **Binomial Heap:** A collection of heap-ordered Binomial Trees $B_k$ (where $B_k$ has $2^k$ nodes and height $k$), supporting **heap union (merging two heaps) in $O(\log n)$ time** (compared to $O(n)$ for binary heaps).

---

### Search Trees (BST & AVL Trees) & Hashing

**Q: Why can a standard Binary Search Tree (BST) degrade to $O(n)$, and how does an AVL Tree prevent this?**  
**A:** If elements are inserted into a standard BST in sorted or reverse-sorted order, the tree degenerates into a skewed linked list of height $O(n)$. An **AVL Tree** is a self-balancing BST where the **Balance Factor** of every node—defined as $\text{BF}(v) = \text{Height}(\text{Left}) - \text{Height}(\text{Right})$—is strictly maintained in $\{-1, 0, +1\}$. Whenever an insertion or deletion causes $|\text{BF}| = 2$, the tree restores balance in $O(1)$ structural changes using four rotations:
* **Single Rotations:** **LL Rotation** (Right rotate) and **RR Rotation** (Left rotate).
* **Double Rotations:** **LR Rotation** (Left-then-Right) and **RL Rotation** (Right-then-Left).
This guarantees tree height $h = O(\log n)$, keeping search, insert, and delete strictly $O(\log n)$ in the worst case.

**Q: What is a Collision in Hashing, and what are the primary Collision Resolution techniques?**  
**A:** A collision occurs when two distinct keys $k_1 \neq k_2$ map to the same hash table slot: $h(k_1) = h(k_2)$.
1. **Separate Chaining (Open Hashing):** Each slot holds a linked list of all elements hashing to that index. With load factor $\alpha = n/m$, average search time is $\Theta(1 + \alpha)$.
2. **Open Addressing (Closed Hashing):** All elements are stored directly inside the hash table array itself ($\alpha \le 1$). On collision atprobe $i \in \{0, 1, \dots, m-1\}$:
   * **Linear Probing:** $h(k, i) = (h'(k) + i) \bmod m$. Suffers from **Primary Clustering** (long contiguous runs of occupied slots).
   * **Quadratic Probing:** $h(k, i) = (h'(k) + c_1 i + c_2 i^2) \bmod m$. Eliminates primary clustering but suffers from **Secondary Clustering** (keys with the same initial hash follow the exact same probe sequence).
   * **Double Hashing:** $h(k, i) = (h_1(k) + i \cdot h_2(k)) \bmod m$, where $h_2(k)$ must be non-zero and coprime to $m$. Eliminates both primary and secondary clustering, providing $O(m^2)$ probe sequences.

---

## 4. Dynamic Programming (Lab Expts 5, 8 & Module III)

### Dynamic Programming Principles

**Q: What are the two fundamental properties required for Dynamic Programming (DP), and how does DP differ from Divide-and-Conquer?**  
**A:**
1. **Optimal Substructure:** An optimal solution to the overall problem contains within it optimal solutions to its subproblems.
2. **Overlapping Subproblems:** The recursive space repeatedly solves the *exact same* subproblems over and over (unlike Divide-and-Conquer, where subproblems are disjoint/independent).  
DP solves each unique subproblem **only once** and stores the result in a table (**Bottom-Up Tabulation** or **Top-Down Memoization**), trading space for an exponential-to-polynomial speedup.

---

### Matrix Chain Multiplication (Lab Expt 5)

**Q: What is the goal of Matrix Chain Multiplication (Expt 5), and how many scalar multiplications are required to multiply two matrices of dimensions $p \times q$ and $q \times r$?**  
**A:**
* Multiplying a $p \times q$ matrix by a $q \times r$ matrix produces a $p \times r$ matrix and requires **$p \times q \times r$ scalar multiplications**.
* Matrix multiplication is associative ($A(BC) = (AB)C$), but the parenthesization order drastically changes the number of scalar operations. Matrix Chain Multiplication finds the optimal parenthesization of $A_1 A_2 \dots A_n$ (where $A_i$ has dimensions $p_{i-1} \times p_i$) that minimizes total scalar multiplications, without actually multiplying the matrices.

**Q: State the DP recurrence relation and complexity for Matrix Chain Multiplication (Expt 5).**  
**A:** Let $m[i, j]$ be the minimum scalar multiplications needed to compute $A_{i \dots j}$:
$$m[i, j] = \begin{cases} 0 & \text{if } i = j \\ \min_{i \le k < j} \left\{ m[i, k] + m[k + 1, j] + p_{i - 1} p_k p_j \right\} & \text{if } i < j \end{cases}$$
* **Time Complexity:** $\Theta(n^3)$ (three nested loops: chain length $L$ from $2$ to $n$, start index $i$, and split point $k$).
* **Space Complexity:** $\Theta(n^2)$ for the cost table $m[n][n]$ and split table $s[n][n]$.
* **Number of Possible Parenthesizations (Brute Force):** The $(n - 1)$-th **Catalan Number** $C_{n-1} = \frac{1}{n}\binom{2n-2}{n-1} = \Omega\left(\frac{4^n}{n^{3/2}}\right)$.

---

### Longest Common Subsequence — LCS (Lab Expt 8) & Other DP Classics

**Q: Differentiate between a Substring and a Subsequence.**  
**A:** A **substring** must consist of contiguous characters from the original string. A **subsequence** preserves the relative left-to-right order of characters, but the characters do **not** need to be contiguous (e.g., `ACE` is a subsequence of `ABCDE`, but not a substring).

**Q: State the DP recurrence relation and complexity for Longest Common Subsequence (Expt 8).**  
**A:** Given strings $X[1 \dots m]$ and $Y[1 \dots n]$, let $L[i][j]$ be the length of the LCS of prefixes $X[1 \dots i]$ and $Y[1 \dots j]$:
$$L[i][j] = \begin{cases} 0 & \text{if } i = 0 \text{ or } j = 0 \\ L[i - 1][j - 1] + 1 & \text{if } i, j > 0 \text{ and } X[i - 1] = Y[j - 1] \\ \max(L[i - 1][j], L[i][j - 1]) & \text{if } i, j > 0 \text{ and } X[i - 1] \neq Y[j - 1] \end{cases}$$
* **Time Complexity:** $\Theta(m \cdot n)$ to fill the $(m + 1) \times (n + 1)$ DP table, plus $O(m + n)$ to backtrack from $L[m][n]$ to reconstruct the LCS string.
* **Space Complexity:** $\Theta(m \cdot n)$ (reducible to $O(\min(m, n))$ if only the length is required).

**Q: State the recurrence and complexity of the Floyd-Warshall All-Pairs Shortest Path algorithm.**  
**A:** For a graph with $V$ vertices, Floyd-Warshall considers intermediate vertices $k \in \{1, \dots, V\}$ one by one:
$$D^{(k)}[i][j] = \min \left( D^{(k-1)}[i][j], \; D^{(k-1)}[i][k] + D^{(k-1)}[k][j] \right)$$
* **Time Complexity:** $\Theta(V^3)$ | **Space Complexity:** $\Theta(V^2)$.

**Q: Why must the 0/1 Knapsack problem be solved using Dynamic Programming ($\Theta(n W)$) while the Fractional Knapsack problem can be solved using Greedy ($\Theta(n \log n)$)?**  
**A:** Both problems exhibit optimal substructure, but only **Fractional Knapsack** satisfies the **Greedy Choice Property** (sorting items by value-to-weight ratio $v_i / w_i$ and taking fractions always yields the global optimum). In **0/1 Knapsack**, items cannot be broken; taking the highest $v_i / w_i$ item can leave wasted capacity and produce a suboptimal solution, requiring the DP state transition:
$$V[i, w] = \max\left( V[i - 1, w], \; v_i + V[i - 1, w - w_i] \right)$$
Note that $\Theta(nW)$ is **pseudo-polynomial** time because $W$ is the magnitude of the capacity, which takes $\log_2 W$ bits to represent.

---

## 5. Greedy Algorithms (Lab Expts 7, 9, 11, 12 & Module III)

### Activity Selection (Lab Expt 7) & Huffman Coding (Lab Expt 9)

**Q: What are the two key ingredients of a Greedy Algorithm, and how does it differ from Dynamic Programming?**  
**A:**
1. **Greedy Choice Property:** A globally optimal solution can be reached by making a locally optimal (greedy) choice at each step without reconsidering previous choices or solving subproblems first.
2. **Optimal Substructure:** After making the greedy choice, the remaining subproblem has the same optimal substructure.  
Unlike DP (which works bottom-up across all subproblem choices), a Greedy algorithm works top-down along a single deterministic path.

**Q: In the Activity Selection Problem (Expt 7), what is the correct greedy choice and what is its complexity?**  
**A:**
* **Correct Greedy Choice:** Sort all activities in ascending order of their **finish times** ($f_1 \le f_2 \le \dots \le f_n$), pick the first activity, and iteratively select the next activity whose start time is greater than or equal to the finish time of the previously selected activity ($s_i \ge f_{\text{prev}}$).
* *(Note: Choosing the shortest duration activity or earliest start time fails to guarantee the maximum number of activities!)*
* **Time Complexity:** $O(n \log n)$ to sort the activities (or $O(n^2)$ if sorted via Bubble/Insertion Sort in basic lab code), plus $\Theta(n)$ for the single linear scan.

**Q: What is Huffman Coding (Expt 9), why is it called a Prefix Code, and what is its time complexity?**  
**A:**
* **Huffman Coding** is a greedy, lossless data compression algorithm that assigns **variable-length binary codewords** to characters based on their frequencies—frequent characters get shorter bit strings (near the root) and rare characters get longer bit strings (near the leaves).
* **Prefix (Prefix-Free) Property:** No codeword is a prefix of any other codeword. Because all characters are placed strictly at the **leaf nodes** of the Huffman binary tree, decoding a bitstream is completely unambiguous without needing delimiter symbols.
* **Algorithm & Complexity:** Repeatedly extract the two minimum-frequency nodes from a Min-Priority Queue, merge them into a parent node with frequency $f_1 + f_2$, and reinsert into the queue ($n - 1$ merges). Using a binary min-heap, the time complexity is **$O(n \log n)$**.

---

## 6. Graph Traversal, Minimum Spanning Trees & Shortest Paths (Lab Expts 10–13)

### BFS & DFS Graph Traversal (Lab Expt 10)

**Q: Compare Breadth-First Search (BFS) and Depth-First Search (DFS) (Expt 10).**  
**A:**

| Feature | Breadth-First Search (BFS) | Depth-First Search (DFS) |
| :--- | :--- | :--- |
| **Core Data Structure** | **FIFO Queue** | **LIFO Stack** (or Recursion Call Stack) |
| **Exploration Order** | Level-by-level (wavefront expansion) | Goes as deep as possible along a branch before backtracking |
| **Time Complexity (Adjacency List)** | $\Theta(V + E)$ | $\Theta(V + E)$ |
| **Time Complexity (Adjacency Matrix)** | $\Theta(V^2)$ | $\Theta(V^2)$ |
| **Shortest Path Property** | Finds shortest path in **unweighted** graphs (minimum edges) | Does not guarantee shortest path |
| **Key Applications** | Unweighted shortest path, bipartite testing, connected components | Cycle detection, **Topological Sorting**, Strongly Connected Components (SCC), articulation points |

---

### Minimum Spanning Trees — Kruskal's vs Prim's Algorithm (Lab Expt 11)

**Q: What is a Spanning Tree and a Minimum Spanning Tree (MST), and how many edges does it have?**  
**A:** Given a connected, undirected graph $G = (V, E)$, a **Spanning Tree** is a connected acyclic subgraph that includes **all $V$ vertices** and has exactly **$V - 1$ edges**. A **Minimum Spanning Tree (MST)** is a spanning tree whose sum of edge weights is minimum among all possible spanning trees. (A disconnected graph cannot have a spanning tree, only a spanning forest).

**Q: Compare Kruskal's Algorithm and Prim's Algorithm for MST (Expt 11).**  
**A:**

| Feature | Kruskal's Algorithm | Prim's Algorithm |
| :--- | :--- | :--- |
| **Greedy Strategy** | **Edge-based:** Sorts all edges by weight and adds the lightest edge that does not form a cycle | **Vertex-based:** Grows a single connected tree from a starting vertex by adding the lightest cut edge |
| **Intermediate State** | Maintains a **forest** of disjoint trees that gradually merge | Always maintains a **single connected tree** at every step |
| **Key Data Structure** | **Disjoint-Set (Union-Find)** for cycle detection | **Min-Priority Queue (Min-Heap)** for minimum edge cut |
| **Time Complexity** | $O(E \log E) = O(E \log V)$ | $O(V^2)$ (Adjacency Matrix) or $O((V + E) \log V)$ (Binary Heap) |
| **Best Suited For** | **Sparse graphs** ($E \approx V$) | **Dense graphs** ($E \approx V^2$) |

---

### Single-Source Shortest Path — Dijkstra's vs Bellman-Ford (Lab Expts 12 & 13)

**Q: What is the Edge Relaxation step in shortest-path algorithms (Expts 12 & 13)?**  
**A:** Relaxation tests whether the shortest known distance $d[v]$ to vertex $v$ can be improved by going through vertex $u$ along edge $(u, v)$ with weight $w(u, v)$:
```text
if (d[u] + w(u, v) < d[v]) {
    d[v] = d[u] + w(u, v);
    parent[v] = u;
}
```

**Q: Compare Dijkstra's Algorithm (Expt 12) and the Bellman-Ford Algorithm (Expt 13).**  
**A:**

| Feature | Dijkstra's Algorithm (Expt 12) | Bellman-Ford Algorithm (Expt 13) |
| :--- | :--- | :--- |
| **Design Paradigm** | **Greedy Method** | **Dynamic Programming** |
| **Negative Edge Weights** | **Fails** on negative edge weights (assumes adding an edge never decreases path cost) | **Works** with negative edge weights |
| **Negative-Weight Cycles** | Cannot detect negative cycles | **Detects negative-weight cycles** on the $V$-th pass |
| **Relaxation Passes** | Extracts min-distance vertex $V$ times and relaxes its outgoing edges once | Relaxes **all $E$ edges $(V - 1)$ times**, followed by 1 check pass |
| **Time Complexity** | $O(V^2)$ (Array/Matrix) or $O((V + E) \log V)$ (Min-Heap) | $\Theta(V \cdot E)$ |

**Q: Why does Bellman-Ford relax all edges exactly $V - 1$ times, and how does it detect a negative-weight cycle (Expt 13)?**  
**A:** Any simple shortest path in a graph with $V$ vertices contains at most **$V - 1$ edges** (any path with $\ge V$ edges must repeat a vertex and thus contain a cycle). After $V - 1$ full relaxation passes over all $E$ edges, all true shortest paths without negative cycles are guaranteed to have converged. If a **$V$-th pass** still manages to reduce $d[v]$ for any edge $(u, v)$ ($d[u] + w(u, v) < d[v]$), then a **negative-weight cycle reachable from the source** exists.

---

## 7. Backtracking, Branch-and-Bound, Network Flow, FFT & String Matching (Module III)

**Q: Differentiate between Backtracking and Branch-and-Bound.**  
**A:**
* **Backtracking:** Explores the **state-space tree** using **Depth-First Search (DFS)** to find all (or any) feasible solutions satisfying explicit constraints, pruning branches that violate constraints via a bounding/promising function. Used for **decision and constraint satisfaction problems** ($N$-Queens, Hamiltonian Circuit, Subset Sum).
* **Branch-and-Bound:** Explores the state-space tree (typically via Best-First Search or BFS) exclusively for **optimization problems** (e.g., Traveling Salesperson Problem, 0/1 Knapsack). It computes a lower/upper bound on the objective cost at each node and prunes any subtree whose bound cannot beat the best solution found so far.

**Q: What are the classic Backtracking problems in the syllabus?**  
**A:**
* **$N$-Queens Problem:** Place $N$ queens on an $N \times N$ chessboard so no two queens attack each other (no shared row, column, or diagonal: $|c_i - c_j| = |i - j|$).
* **Subset Sum Problem:** Given a set of positive integers $S$ and target sum $d$, find subsets whose elements sum to $d$.
* **Hamiltonian Circuit Problem:** Find a cycle in a graph that visits every vertex exactly once and returns to the starting vertex.

**Q: Define a Flow Network, Residual Network, Augmenting Path, and the Max-Flow Min-Cut Theorem (Ford-Fulkerson Method).**  
**A:**
* **Flow Network:** A directed graph $G = (V, E)$ with source $s$, sink $t$, and non-negative capacity $c(u, v) \ge 0$ obeying **Capacity Constraint** ($0 \le f(u,v) \le c(u,v)$) and **Flow Conservation** (incoming flow $=$ outgoing flow for all $v \in V \setminus \{s, t\}$).
* **Augmenting Path:** A simple path from $s$ to $t$ in the **residual network** $G_f$ along which additional flow can be pushed (equal to the bottleneck residual capacity of the path).
* **Max-Flow Min-Cut Theorem:** The maximum value of an $s$-$t$ flow in a network is strictly equal to the minimum capacity among all $s$-$t$ cuts.
* **Ford-Fulkerson Complexity:** $O(E \cdot |f^*|)$, where $|f^*|$ is the maximum flow value (or $O(V E^2)$ when BFS is used to find shortest augmenting paths—the **Edmonds-Karp** algorithm).

**Q: How does the Rabin-Karp String Matching algorithm improve upon the Naive $O((n - m + 1)m)$ algorithm?**  
**A:** Rabin-Karp uses a **rolling hash function** to compute the numerical hash of the pattern $P[1 \dots m]$ and each $m$-character window of text $T[1 \dots n]$ in $O(1)$ amortized time per shift via Horner's rule. Character-by-character comparison is only performed when the window hash matches the pattern hash (a *spurious hit* or true match).
* **Average/Best Time Complexity:** $\Theta(n + m)$ | **Worst-Case Time Complexity:** $\Theta((n - m + 1)m)$.

**Q: What is the Fast Fourier Transform (FFT) and what is its complexity?**  
**A:** The **Discrete Fourier Transform (DFT)** converts a degree-$(n-1)$ polynomial from its coefficient representation to its point-value representation at the $n$ complex $n$-th roots of unity in $\Theta(n^2)$ time. The **Cooley-Tukey Fast Fourier Transform (FFT)** applies **Divide-and-Conquer** by splitting the polynomial into even-indexed and odd-indexed coefficients:
$$T(n) = 2T(n/2) + \Theta(n) \implies \Theta(n \log n)$$
This enables multiplying two degree-$n$ polynomials in $\Theta(n \log n)$ time instead of $\Theta(n^2)$.

---

## 8. Complexity Classes ($P, NP, \text{NP-Complete}$) & Approximation Algorithms (Module IV)

**Q: Define the complexity classes $P$, $NP$, $\text{NP-Hard}$, and $\text{NP-Complete}$.**  
**A:**
* **Class $P$ (Polynomial Time):** The class of decision problems that can be **solved** deterministically in polynomial time $O(n^k)$ for some constant $k$.
* **Class $NP$ (Non-deterministic Polynomial Time):** The class of decision problems that can be solved in polynomial time by a non-deterministic Turing machine—equivalently, problems for which a proposed candidate solution (**certificate**) can be **verified** deterministically in polynomial time. ($P \subseteq NP$).
* **$\text{NP-Hard}$:** A problem $B$ is $\text{NP-Hard}$ if every problem $A \in NP$ can be reduced to $B$ in polynomial time ($A \le_p B$). An $\text{NP-Hard}$ problem is at least as hard as the hardest problems in $NP$, and does **not** need to be in $NP$ itself (or even be a decision problem).
* **$\text{NP-Complete}$ (NPC):** A problem $B$ is $\text{NP-Complete}$ if:
  1. $B \in NP$ (can be verified in polynomial time), and
  2. $B \in \text{NP-Hard}$ ($A \le_p B$ for all $A \in NP$).

**Q: What is Cook's (Cook-Levin) Theorem and why is it foundational?**  
**A:** **Cook's Theorem (1971)** proved that the **Boolean Satisfiability Problem (SAT)** (and 3-CNF-SAT) is **$\text{NP-Complete}$** by directly reducing any non-deterministic polynomial-time Turing machine computation to a Boolean formula. Once SAT was established as the first anchor NPC problem, proving any new problem $Y \in NP$ is $\text{NP-Complete}$ only requires reducing a known NPC problem $X$ to $Y$ in polynomial time ($\text{SAT} \le_p X \le_p Y$).

**Q: What is a Polynomial-Time Reduction ($A \le_p B$), and which direction must the reduction go to prove $B$ is $\text{NP-Hard}$?**  
**A:** $A \le_p B$ means there exists a polynomial-time computable transformation $f$ that maps any instance $x$ of problem $A$ to an instance $f(x)$ of problem $B$ such that $x \in A \iff f(x) \in B$.
* **Crucial Viva Trap:** To prove a new problem $B$ is $\text{NP-Hard}$, you must reduce a **known $\text{NP-Complete}$ problem $A$ TO $B$** ($A \le_p B$), **not** $B \le_p A$! (Showing $A \le_p B$ means if $B$ were easy, $A$ would also be easy; since $A$ is known to be hard, $B$ must be at least as hard).

**Q: What is an Approximation Algorithm, and how do the 2-Approximation algorithms for Vertex Cover and Metric TSP work?**  
**A:** For $\text{NP-Hard}$ optimization problems, an approximation algorithm runs in polynomial time and guarantees a solution within a multiplicative **approximation ratio $\rho(n)$** of the optimal cost $C^*$:
$$\max\left(\frac{C}{C^*}, \frac{C^*}{C}\right) \le \rho(n)$$
* **Vertex Cover (2-Approximation):** Repeatedly pick an arbitrary uncovered edge $(u, v)$, add **both** endpoints $u$ and $v$ to the cover, and remove all edges incident to $u$ or $v$. Because any optimal vertex cover must include at least one endpoint of each chosen disjoint matching edge, the resulting cover size is at most **$2 \times |C^*|$**.
* **Metric TSP (2-Approximation when triangle inequality holds):**
  1. Construct a Minimum Spanning Tree (MST) of the graph (since removing any edge from the optimal tour $H^*$ yields a spanning tree, $\text{cost}(\text{MST}) \le \text{cost}(H^*)$).
  2. Perform a preorder DFS walk around the MST (traversing each MST edge twice, cost $= 2 \cdot \text{cost}(\text{MST})$) and shortcut repeated vertices using the triangle inequality, guaranteeing a tour cost $\le 2 \cdot \text{cost}(H^*)$.
