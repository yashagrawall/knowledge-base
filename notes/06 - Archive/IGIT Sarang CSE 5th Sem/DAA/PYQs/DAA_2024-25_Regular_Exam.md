Type : #RawNote       
Date : 2026-11-13        
Tags :  [[College]] ; [[DSA]]   
~ ***Yash Agrawall*** ~     

---
# Design & Analysis of Algorithms — Regular Examination 2024–25

> **Course**: Design and Analysis of Algorithms (PCCS4306)  
> **Programme**: B.Tech CSE — 5th Semester  
> **Time**: 03 Hours | **Maximum Marks**: 60  
> **Instructions**: Answer Question number 1 which is compulsory and any five from the rest. The figures in the right-hand margin indicate marks.

---

## [[DAA Theory Syllabus]]

- **Module 1**: Asymptotic Notation, Recurrence Relations, Priority Queues (Binary Heaps).
- **Module 2**: Divide and Conquer, Dynamic Programming vs Greedy Paradigm.
- **Module 3**: Graph Algorithms, Minimum Spanning Trees (Prim's vs Kruskal's), Maximum Flow (Ford-Fulkerson).
- **Module 4**: String Matching (Rabin-Karp), NP-Completeness (Clique and Vertex Cover Complement).

---

## Questions Table

### Question 1 (Compulsory Short Answer Questions — 10 × 1 = 10 Marks)

| Q No. | Questions | Marks |
| :---: | :--- | :---: |
| **1.a** | Is every NP-hard problem NP-complete? Explain the distinction. | 01 |
| **1.b** | Prove that $2n + 10 = O(n)$, but not $O(n^2)$ (or vice versa). Show mathematically using constants $c$ and $n_0$. | 01 |
| **1.c** | Prove that the running time of an algorithm is $\Theta(g(n))$ if and only if its worst-case running time is $O(g(n))$ and its best-case running time is $\Omega(g(n))$. | 01 |
| **1.d** | Give an example of a non-sorting problem solved using Divide and Conquer. | 01 |
| **1.e** | Why is priority queue insertion $O(\log n)$ in a binary heap, but finding max/min is $O(1)$? | 01 |
| **1.f** | A full Binary Search Tree (BST) of height $h$ has how many nodes? | 01 |
| **1.g** | Why does Dynamic Programming fail when overlapping subproblems do not exist? | 01 |
| **1.h** | Can Activity Selection be solved using Dynamic Programming? If yes, why do we prefer the Greedy approach? | 01 |
| **1.i** | State the Master Theorem condition that cannot solve $T(n) = 2T(n/2) + n \log n$. | 01 |
| **1.j** | What is the purpose of path compression in Disjoint Set Union (DSU)? | 01 |

### Long Answer Questions (Answer any 5 — 5 × 10 = 50 Marks)

| Q No. | Questions | Marks |
| :---: | :--- | :---: |
| **2** | Define asymptotic notations: Big-$O$, Big-$\Omega$, Big-$\Theta$, Little-$o$, and Little-$\omega$. Solve the recurrence relation $T(n) = T(\sqrt{n}) + \log n$ using variable substitution. | 10 |
| **3** | Discuss Divide and Conquer recurrence analysis. Compare Merge Sort vs Quick Sort in terms of recursion tree depth, partitioning overhead, and auxiliary memory. | 10 |
| **4** | Explain the Matrix Chain Multiplication algorithm in detail. Formulate the optimal substructure, recurrence relation for $m[i, j]$, and construct the dynamic programming tables. | 10 |
| **5** | State the reasons when you would prefer **Prim’s algorithm** and when **Kruskal’s algorithm** for finding the minimum spanning tree. Explain the cut property and greedy choice property. | 10 |
| **6.a** | For a graph, the network capacities are given below. Compute the maximum flow from source $S$ to sink $T$ using the **Ford-Fulkerson method** and give one minimum cut:<br>$$S \to A\,(10),\; S \to B\,(5),\; A \to B\,(15),\; A \to T\,(10),\; B \to T\,(10)$$ | 05 |
| **6.b** | Let $f$ be a flow in a flow network $G$ with source $S$ and sink $T$, and let $(S, T)$ be any cut of $G$. Prove that the net flow across $(S, T)$ is $f(S, T) = |f|$. | 05 |
| **7.a** | Solve the string-matching problem using the **Rabin-Karp method**:<br>Text $T = \text{abacabadabacaba}$, Pattern $P = \text{abaca}$, Radix $d = 256$, Prime modulus $q = 101$. Trace rolling hash calculations and detect spurious hits. | 05 |
| **7.b** | Let $G$ be a graph with vertices $V = \{1, 2, 3, 4\}$ and edges $E = \{(1,2), (2,3), (3,4), (4,1), (1,3), (2,4)\}$. Find the maximum clique size and the minimum vertex cover size, and verify the complement relationship. | 05 |
| **8** | **Short notes type Questions Only (Answer any TWO):**<br>**(a)** Huffman coding and prefix-free codes<br>**(b)** Randomized QuickSort<br>**(c)** Topological Sorting in Directed Acyclic Graphs (DAG)<br>**(d)** Cook's Theorem and NP-Completeness | 10 |

---
