Type : #RawNote       
Date : 2026-11-13        
Tags :  [[College]] ; [[DSA]]   
~ ***Yash Agrawall*** ~     

---
# Design & Analysis of Algorithms — Regular Examination 2023–24

> **Course**: Design and Analysis of Algorithms (PCCS4306)  
> **Programme**: B.Tech CSE — 5th Semester  
> **Time**: 03 Hours | **Maximum Marks**: 60  
> **Instructions**: Answer Question No.1 which is compulsory and any five from the rest. The figures in the right-hand margin indicate marks.

---

## [[DAA Theory Syllabus]]

- **Module 1**: Asymptotic Notations, Recurrences, HeapSort.
- **Module 2**: QuickSort Partitioning, Huffman Codes, Dynamic Programming (Matrix Chain).
- **Module 3**: Minimum Spanning Trees (Cut property), Shortest Paths (Dijkstra's Algorithm).
- **Module 4**: String Matching (Spurious Hits), NP-Completeness (Reductions).

---

## Questions Table

### Question 1 (Compulsory Short Answer Questions — 10 × 1 = 10 Marks)

| Q No. | Questions | Marks |
| :---: | :--- | :---: |
| **1.a** | Let $f(n)$ and $g(n)$ be asymptotically positive functions. Prove that $f(n) = \Theta(g(n)) \iff g(n) = \Theta(f(n))$. | 01 |
| **1.b** | Solve the recurrence equation $T(n) = T(n-1) + T(n/2) + n$. | 01 |
| **1.c** | What is the running time of HEAPSORT on an array $A$ of length $n$ sorted in increasing order? | 01 |
| **1.d** | Differentiate between the binary search and ternary search algorithms. | 01 |
| **1.e** | Describe the optimal substructure property of Matrix Chain Multiplication. | 01 |
| **1.f** | Explain with an example the Linked List representation of Disjoint Sets. | 01 |
| **1.g** | Define the terms cut, cross, and light edge in Minimum Spanning Trees. | 01 |
| **1.h** | Write the recursive formulation for the All-Pairs Shortest Path problem. | 01 |
| **1.i** | Explain the spurious hit technique in Rabin-Karp string matching. | 01 |
| **1.j** | What is a polynomial-time verification algorithm? | 01 |

### Long Answer Questions (Answer any 5 — 5 × 10 = 50 Marks)

| Q No. | Questions | Marks |
| :---: | :--- | :---: |
| **2.a** | Build a Max-Heap from the array $\langle 13, 19, 9, 12, 8, 7, 4, 21, 2, 6, 14 \rangle$ and trace the HEAPSORT algorithm step by step. | 05 |
| **2.b** | Analyze the running time of Quick-Sort with different partitioning strategies (Best case, Worst case, Average case). | 05 |
| **3.a** | Draw the Huffman tree for fixed-length code vs variable-length code for the following character frequencies: $a:45,\; b:13,\; c:12,\; d:16,\; e:9,\; f:5$. Calculate total bits and compression ratio. | 05 |
| **3.b** | Explain the Fractional Knapsack problem using Greedy strategy. Prove its greedy choice property. | 05 |
| **4** | Explain **Dijkstra's Single-Source Shortest Path algorithm**. Prove its correctness using loop invariants and discuss why it fails on negative edge weights. | 10 |
| **5** | Solve the **0/1 Knapsack problem** using Dynamic Programming for capacity $W = 50$ and given item values and weights. Trace the DP table and backtrack the selected items. | 10 |
| **6** | Find the optimal parenthesization of a matrix chain product whose sequence of dimensions is $\langle 10, 100, 5, 50, 1 \rangle$. Construct tables $m[i, j]$ and $s[i, j]$. | 10 |
| **7** | Compare Naive String Matching, Rabin-Karp, and Knuth-Morris-Pratt (KMP) algorithms. Compute the KMP prefix function $\pi$ for pattern $P = \text{ababaca}$. | 10 |
| **8** | Discuss NP-Completeness. Explain polynomial-time reductions and prove that the Vertex Cover problem is NP-complete given 3-CNF-SAT is NP-complete. | 10 |

---
