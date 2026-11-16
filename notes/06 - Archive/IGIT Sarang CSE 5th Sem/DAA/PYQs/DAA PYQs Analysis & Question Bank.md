Type : #Note    
Date : 2026-11-13    
Tags : [[College]] ; [[08 - Tags/algorithms]] ; [[08 - Tags/data structures]]    
Status : #complete     
~ ***Yash Agrawall*** ~     

---

# Design & Analysis of Algorithms (DAA) — PYQ Analysis & Question Bank

**Course Code:** PCCS4306 | **Semester:** 5th Semester  
**Target:** End-Semester Examination & Class Tests  
**Associated Links:** [[DAA Theory Syllabus]] · [[DAA Study Flow & Execution Guide]] · [[DAA_2026_Internal-1]]

---

## 1. High-Yield Topic Frequency & Trend Analysis

### Module I: Asymptotic Analysis, Recurrences & Sorting
| Topic / Concept | Frequency | Recurring Exam Questions & References |
| :--- | :---: | :--- |
| **Asymptotic Notations ($O, \Omega, \Theta$) Proofs** | 4 | • 2024–25 Q1/Q2 ($2n+10 = O(n)$ proof; $f(n)=\Theta(g(n)) \iff f(n)=O(g(n)) \land f(n)=\Omega(g(n))$)<br>• 2023–24 Q1a, 2023 CT-1 Q1 & Q5a |
| **Recurrence Relations (Master Theorem / Substitution)** | 4 | • 2024–25 ($T(n) = T(\sqrt{n}) + \log n$ or $T(n-1)+T(n/2)+n$)<br>• 2023–24 Q1b, 2023 CT-1 Q2 ($T(n) = 2T(n/2) + n$, etc.) |
| **QuickSort (Partitioning Analysis & Randomized)** | 3 | • 2024–25 Q8c (Randomized QuickSort), 2023–24 Q2b (Partitioning analysis), 2022–23 |
| **HeapSort & Binary Heaps (Min/Max Heap)** | 3 | • 2024–25 Q1 (Heap priority queue $O(\log n)$ insertion vs $O(1)$ find-min)<br>• 2023–24 Q1c (Running time on sorted array), 2022–23 Q1 |

### Module II: Greedy Paradigm & Dynamic Programming
| Topic / Concept | Frequency | Recurring Exam Questions & References |
| :--- | :---: | :--- |
| **Activity Selection Problem (Greedy vs DP)** | 3 | • 2024–25 Q1e (Why do we prefer Greedy when DP applies?)<br>• 2023 CT-1 Q4 (Recursive Activity Selector vs Greedy Activity Selector)<br>• 2022–23 Q2 |
| **Huffman Coding & Greedy Prefix Trees** | 3 | • 2024–25 Q8b, 2023–24 Q3a (Frequencies $a:45, b:13, c:12, d:16, e:9, f:5$), 2022–23 |
| **Matrix Chain Multiplication (Optimal Parenthesization)** | 3 | • 2023–24 Q1d/e, 2022–23 Q3a (Matrix dimensions chain trace) |
| **0/1 Knapsack vs Fractional Knapsack** | 3 | • 2024–25, 2022–23 Q4 (Capacity $W=50$, items with weights and profits) |
| **Longest Common Subsequence (LCS)** | 2 | • 2023 CT-1 Q3 ($X = \langle 1,0,0,1,0,1,0,1 \rangle, Y = \langle 0,1,0,1,1,0,1,1,0 \rangle$) |

### Module III: Advanced Graph Algorithms & Network Flow
| Topic / Concept | Frequency | Recurring Exam Questions & References |
| :--- | :---: | :--- |
| **Dijkstra's Single-Source Shortest Path** | 4 | • 2023–24 Q4, 2022–23 Q2b, 2023 CT-2 Q2 (Run Dijkstra from source $s$ and source $z$) |
| **Minimum Spanning Tree (Prim's vs Kruskal's)** | 3 | • 2024–25 Q5 (When to prefer Prim's vs Kruskal's?), 2022–23 Q5, 2023–24 |
| **Maximum Flow (Ford-Fulkerson & Min-Cut Theorem)** | 2 | • 2024–25 Q6a/b (Compute max-flow using Ford-Fulkerson, prove net flow across $(S, T)$ cut equals $|f|$) |
| **All-Pairs Shortest Path (Floyd-Warshall)** | 2 | • 2023–24 Q5, 2023 CT-2 Q3 ($D^{(k)}$ matrix trace) |
| **Depth-First Search (DFS) & Strongly Connected Components (SCC)** | 2 | • 2023 CT-2 Q1 & Q4b, 2022–23 Q7 |

### Module IV: String Matching & NP-Completeness
| Topic / Concept | Frequency | Recurring Exam Questions & References |
| :--- | :---: | :--- |
| **Rabin-Karp String Matching & Spurious Hits** | 3 | • 2024–25 Q7a ($T = \text{abacabadabacaba}, P = \text{abaca}, d=256, q=101$)<br>• 2023–24 Q1f, 2022–23 Q8 |
| **NP-Completeness (P, NP, NP-Complete, NP-Hard)** | 3 | • 2024–25 Q1a (Is every NP-hard problem NP-complete?)<br>• 2023–24 Q8, 2022–23 Q8 |
| **Clique & Vertex Cover Complement Relationship** | 2 | • 2024–25 Q7b (Given $G$ with 4 vertices and 6 edges, verify max clique and min vertex cover complement formula) |

---

## 2. Transcribed Question Papers

### Academic Year 2024–25 (Regular / Back Paper)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PCCS4306*

#### Q1. Compulsory Conceptual Questions (10 × 1 = 10 Marks)
- **(a)** Is every NP-hard problem NP-complete? Explain the distinction.
- **(b)** Prove that $2n + 10 = O(n)$, but not $O(n^2)$ (or vice versa). Show mathematically using constants $c$ and $n_0$. Explain the intuition behind the growth rate difference.
- **(c)** Prove that the running time of an algorithm is $\Theta(g(n))$ if and only if its worst-case running time is $O(g(n))$ and its best-case running time is $\Omega(g(n))$.
- **(d)** Give an example of a non-sorting problem solved using Divide and Conquer.
- **(e)** Why is priority queue insertion $O(\log n)$ but finding max/min is $O(1)$?
- **(f)** A full Binary Search Tree (BST) of height $h$ has how many nodes?
- **(g)** Why does Dynamic Programming fail when overlapping subproblems do not exist?
- **(h)** Can Activity Selection be solved using Dynamic Programming? If yes, why do we prefer Greedy?

#### Long Answer Questions (Answer any 5 — 5 × 10 = 50 Marks)
- **Q2 (10M):** Asymptotic notations: Definitions of Big-O, Big-$\Omega$, Big-$\Theta$, Little-$o$, and Little-$\omega$. Solve recurrence $T(n) = T(\sqrt{n}) + \log n$.
- **Q3 (10M):** Divide and conquer recurrence analysis and Merge Sort vs Quick Sort depth analysis.
- **Q4 (10M):** Matrix Chain Multiplication algorithm: optimal substructure, recursive formulation, dynamic programming table construction.
- **Q5 (10M):** Minimum Spanning Tree (MST): State the greedy choice property and cut property. Compare Prim's algorithm vs Kruskal's algorithm (data structures, edge-dense vs edge-sparse graph performance).
- **Q6 (10M):** 
  - **(a)** For a graph with network capacities: $S \to A\,(10), S \to B\,(5), A \to B\,(15), A \to T\,(10), B \to T\,(10)$. Compute the maximum flow from $S$ to $T$ using the Ford-Fulkerson method and identify one minimum cut. *(5M)*
  - **(b)** Let $f$ be a flow in a flow network $G$ with source $s$ and sink $t$, and let $(S, T)$ be any cut of $G$. Prove that the net flow across $(S, T)$ is $f(S, T) = |f|$. *(5M)*
- **Q7 (10M):**
  - **(a)** Solve the string-matching problem using the Rabin-Karp method: Text $T = \text{abacabadabacaba}$, Pattern $P = \text{abaca}$, Radix $d = 256$, Prime modulus $q = 101$. Trace rolling hash calculations and detect any spurious hits. *(5M)*
  - **(b)** Let $G = (V, E)$ be a graph with vertices $V = \{1, 2, 3, 4\}$ and edges $E = \{(1,2), (2,3), (3,4), (4,1), (1,3), (2,4)\}$. Find the maximum clique size and the minimum vertex cover size, and verify the complement relationship. *(5M)*
- **Q8 Short Notes (Answer any TWO — 2 × 5 = 10M):**
  - **(a)** Huffman Coding (Prefix-free codes)
  - **(b)** Randomized QuickSort
  - **(c)** Topological Sorting in DAGs
  - **(d)** Cook's Theorem & NP-Completeness

---

### Academic Year 2023–24 (Regular Examination)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PCCS4306*

- **Q1 (10M):**
  - **(a)** Let $f(n)$ and $g(n)$ be asymptotically positive functions. Prove $f(n) = \Theta(g(n)) \iff g(n) = \Theta(f(n))$.
  - **(b)** Solve recurrence $T(n) = T(n-1) + T(n/2) + n$.
  - **(c)** What is the running time of HEAPSORT on an array $A$ of length $n$ sorted in increasing order?
  - **(d)** Differentiate between greedy choice property and optimal substructure.
  - **(e)** Define the terms cut, cross, and light edge in minimum spanning trees.
  - **(f)** Explain the spurious hit phenomenon in Rabin-Karp string matching.
- **Q2 (10M):**
  - **(a)** Build a Max-Heap from array $\langle 13, 19, 9, 12, 8, 7, 4, 21, 2, 6, 14 \rangle$ and trace HEAPSORT.
  - **(b)** Analyze the running time of Quick-Sort with different partitioning strategies (Lomuto vs Hoare, Best/Worst case splits).
- **Q3 (10M):** Draw the Huffman tree for fixed-length vs variable-length codes for character frequencies $a:45, b:13, c:12, d:16, e:9, f:5$. Calculate total bits required and compression ratio.
- **Q4 (10M):** Single-source shortest paths: Dijkstra's algorithm proof of correctness and negative edge cycle limitations.
- **Q5 (10M):** Dynamic programming: 0/1 Knapsack problem with capacity $W = 50$, profits and weights arrays.
- **Q6 (10M):** Matrix Chain Multiplication: optimal cost table $m[i, j]$ and split table $s[i, j]$ for given dimensions $\langle 10, 100, 5, 50, 1 \rangle$.
- **Q7 (10M):** String matching algorithms comparison: Naive $O((n-m+1)m)$ vs Rabin-Karp $O(n+m)$ vs Knuth-Morris-Pratt (KMP) prefix function $\pi$.
- **Q8 (10M):** Polynomial time reductions and verification algorithms for Circuit-SAT, 3-CNF-SAT, and Vertex Cover.

---

### Academic Year 2022–23 (Regular Examination)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PCCS4306*

- **Q1 (10M):** Recurrence equations, Master theorem cases, min-heap properties, hashing with separate chaining vs open addressing, topological sorting.
- **Q2 (10M):** Dijkstra's shortest-path algorithm execution on directed weighted graph.
- **Q3 (10M):** Matrix chain multiplication: recurrence relation and step-by-step DP matrix filling.
- **Q4 (10M):** 0/1 Knapsack problem dynamic programming formulation and solution trace.
- **Q5 (10M):** Kruskal's algorithm using Disjoint Set Union (DSU) with Union-by-Rank and Path Compression heuristics.
- **Q6 (10M):** Bellman-Ford algorithm: shortest paths with negative edge weights and negative cycle detection.
- **Q7 (10M):** Graph traversal: BFS vs DFS, classification of edges (Tree, Back, Forward, Cross edges).
- **Q8 (10M):** Short notes on Vertex Cover, Clique problem, and Cook-Levin Theorem.

---

### Internal Examinations (Class Tests) 2023–24

#### 1st Class Test (Full Marks: 15 | Time: 1 Hour)
1. Show the following equalities are incorrect: [3M]
   - (a) $10n^2 + a = O(n)$
   - (b) $n^2 \log n = O(n^2)$
2. Find the solution to the recurrence equations: [3M]
   - (a) $T(n) = 2T(\lfloor n/2 \rfloor + 17) + n$
   - (b) $T(n) = 4T(\lfloor n/2 \rfloor) + cn$
   - (c) $T(n) = 2T(n/4) + n$
3. Determine an LCS of $X = \langle 1, 0, 0, 1, 0, 1, 0, 1 \rangle$ and $Y = \langle 0, 1, 0, 1, 1, 0, 1, 1, 0 \rangle$. [3M]
4. Activity selection problem for set $S$ of 11 activities: [3M]
   - $s_i = [1, 4, 0, 6, 2, 9, 5, 0, 2, 11, 13]$
   - $f_i = [5, 6, 7, 7, 8, 10, 9, 8, 9, 12, 14]$
   - Find activities selected by Recursive-Activity-Selector and Greedy-Activity-Selector.
5. Short notes on Asymptotic Notations and Elements of Greedy Algorithm. [3M]

#### 2nd Class Test (Full Marks: 15 | Time: 1 Hour)
1. Mention the progress of the Depth First Search (DFS) algorithm on the given directed graph (discovery and finishing times $d[u]/f[u]$). [4M]
2. Run Dijkstra's algorithm on the directed graph using $s$ as source, and then using $z$ as source. [4M]
3. Find shortest path distance between each pair of vertices using Floyd-Warshall algorithm ($D^{(0)}, D^{(1)}, D^{(2)}, \dots$). [4M]
4. Short notes on Shortest Path Trees and Strongly Connected Components (Kosaraju / Tarjan). [3M]
