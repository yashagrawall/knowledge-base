
Type : #RawNote       
Date : 2026-09-27        
Tags :  [[College]] ; [[DSA]]    
~ ***Yash Agrawall*** ~     

---
# Design & Analysis of Algorithms (DAA) — Study Flow & Execution Guide

**Course Code:** PCCS4306 | **Credits:** 3 (Theory) + 2 (Lab) = **5 Credits**    
**Target Grade:** **O (10/10)**   
**Associated Notes:** [[DAA Theory Syllabus]] · [[Core_Subjects_Study_Method_and_Visual_Sources]]

---
## 1. Executive Strategy & The Dual Lens

DAA is the most high-leverage subject of your 5th semester:
1. **The European Master's Lens:** German universities (like TUM) filter international applicants heavily on **Formal Theoretical Computer Science (TCS)**: asymptotic proofs, recurrence trees, Master Theorem edge cases, dynamic programming invariants, and formal NP-Completeness reductions.
2. **The College Exam Lens:** BPUT / IGIT exams grade on standardized algorithm traces (step-by-step matrix multiplication, Dijkstra's tabular trace, 2D DP matrix filling) and standard complexity derivations.
3. **The Daily DSA Link:** DAA coursework maps 1-to-1 with your morning DSA anchor (NeetCode 150 / Striver). Study the theoretical proof in the evening; solve the corresponding LeetCode pattern in the morning.

---

## 2. Resource Mapping & Local Assets

| Resource Type | Source Name | Local Path / URL | Role & Switch Trigger |
| :--- | :--- | :--- | :--- |
| **Primary Book (Paradigms & Intuition)** | **Anany Levitin** (2nd Ed) | [[Introduction_to_the_Design_and_Analysis_of_Algorithms-Anany_Lieviitin-2nd_ed.pdf]] | **Read First.** Levitin's taxonomy of design strategies (Ch 2, 5, 6, 8, 9, 11, 12) is 10x clearer than CLRS for concept formation. Offset: $\text{PP} = \text{BP} + 27$. |
| **Rigor & Proofs Book** | **CLRS** (4th Ed) | [[Introduction_to_Algorithm-CLRS-4th_ed.pdf]] | **Switch to CLRS strictly for:** Formal recurrences (Ch 4), Network Flow (Ch 24), FFT (Ch 30), String Matching (Ch 32), and NP-Completeness (Ch 34). |
| **Visual Video Lectures** | **Abdul Bari** | [Abdul Bari Algorithms Playlist](https://www.youtube.com/playlist?list=PLDN4rrl48XKpZkf03iYFl-O29szjTrs_O) | Hand-drawn recursion trees, DP matrices, and partition pointers. Watch at 1.25x for visual seeds. |
| **Interactive Step-Through** | **VisuAlgo & USFCA** | [VisuAlgo.net](https://visualgo.net/) · [USFCA Visualizer](https://www.cs.usfca.edu/~galles/visualization/) | Step through AVL rotations, Heapify, Dijkstra, and Kruskal live before writing code. |

---

## 3. Master Chronological Study Flow & Exact Page Mapping

### PHASE 1: Foundations, Asymptotic Analysis & Recurrence Relations (Module I)

```
[Start Here] Levitin Ch 2 (BP 41-60 | PP 68-87)
       │
       ▼ (Understand Big-O, Omega, Theta Intuition)
[Shift To] CLRS Ch 3 (PP 85-118)
       │
       ▼ (Master Formal Mathematical Epsilon/Delta Definitions)
[Shift To] CLRS Ch 4 (PP 119-175)
       │
       ▼ (Master Substitution, Recursion-Tree, and Master Method Cases 1-3)
[Finish With] Levitin Ch 2.4-2.5 (BP 70-84 | PP 97-111) for Recursive Fibonacci & Hanoi
```

* **Step 1: Algorithm Fundamentals & Analysis Framework**
  * *Resource:* Levitin Ch 2.1–2.2 (BP 42–60 | **PP 69–87**)
  * *Subtopics:* Order of growth, basic efficiency classes, worst-case, best-case, average-case.
* **Step 2: Formal Asymptotic Definitions & Growth of Functions**
  * *Resource:* CLRS Ch 3.1–3.3 (**PP 85–118**)
  * *Subtopics:* Formal definitions of $O(g(n))$, $\Omega(g(n))$, $\Theta(g(n))$, $o(g(n))$, $\omega(g(n))$, asymptotic notation properties (transitivity, symmetry, transpose symmetry).
* **Step 3: Solving Recurrences**
  * *Resource:* CLRS Ch 4.3–4.5 (**PP 134–160**)
  * *Subtopics:* 
    * Sec 4.3 Substitution Method (**PP 134**)
    * Sec 4.4 Recursion-Tree Method (**PP 140**)
    * Sec 4.5 Master Method (**PP 147**): $T(n) = a T(n/b) + f(n)$ with the 3 boundary cases ($n^{\log_b a}$ vs $f(n)$).
* **Skip List for Phase 1:**
  * Skip CLRS Sec 4.6 (Proof of continuous master theorem, PP 161–168).
  * Skip CLRS Sec 4.7 (Akra-Bazzi recurrences, PP 168–174) — not in BPUT syllabus.
* **The Dual Asset:**
  * **Systems Invariant:** The dividing line between leaf-dominated ($n^{\log_b a} \gg f(n)$), root-dominated ($f(n) \gg n^{\log_b a}$), and balanced recursion work.
  * **Exam Representation:** Step-by-step mathematical proof of a recurrence using the **Recursion-Tree Method** (drawing levels, per-level work, total summation).

---

### PHASE 2: Advanced Data Structures, Heaps & Search Trees (Module II)

```
[Start Here] Levitin Ch 6.4 (BP 226-235 | PP 253-262) for Heap Concept
       │
       ▼ (Heapsort & Priority Queue mechanics)
[Shift To] CLRS Ch 6.1-6.5 (PP 229-254)
       │
       ▼ (Rigorous O(n) BUILD-MAX-HEAP proof via Taylor series)
[Shift To] Levitin Ch 6.3 (BP 214-225 | PP 241-252)
       │
       ▼ (AVL Trees: Rotations LL, RR, LR, RL & 2-3 Trees)
[Shift To] Levitin Ch 7.3 (BP 261-274 | PP 288-301) & CLRS Ch 11 (PP 368-417)
       │
       ▼ (Hashing: Chaining, Open Addressing, Probing formulas)
[Finish With] Levitin Ch 11.1-11.2 (BP 374-386 | PP 401-413)
         (Lower bounds for sorting: Decision Tree height proof)
```

* **Step 1: Binary Heaps & Heapsort**
  * *Resource:* Levitin Ch 6.4 (BP 226–235 | **PP 253–262**) $\to$ CLRS Ch 6.1–6.5 (**PP 229–254**)
  * *Subtopics:* Max-heap property, `MAX-HEAPIFY` ($O(\log n)$), `BUILD-MAX-HEAP` ($O(n)$ sum $\sum \frac{h}{2^h}$), Heapsort ($O(n \log n)$), Priority Queues (`HEAP-EXTRACT-MAX`, `HEAP-INCREASE-KEY`).
* **Step 2: Balanced Search Trees (AVL Trees & 2-3 Trees)**
  * *Resource:* Levitin Ch 6.3 (BP 214–225 | **PP 241–252**)
  * *Subtopics:* Balance factor ($-1, 0, +1$), LL, RR, LR, RL rotations, insertion and deletion rebalancing, 2-3 Tree node splitting.
* **Step 3: Hashing & Collision Resolution**
  * *Resource:* Levitin Ch 7.3 (BP 261–274 | **PP 288–301**) $\to$ CLRS Ch 11.1–11.4 (**PP 368–405**)
  * *Subtopics:* Direct-address tables, hash functions (division method, multiplication method), Separate Chaining, Open Addressing (Linear Probing $h(k,i)=(h'(k)+i)\bmod m$, Quadratic Probing, Double Hashing $h(k,i)=(h_1(k)+i\cdot h_2(k))\bmod m$).
* **Step 4: Lower Bounds for Comparison Sorting**
  * *Resource:* Levitin Ch 11.2 (BP 378–386 | **PP 405–413**)
  * *Subtopics:* Decision tree model, tree height $h \ge \lceil \log_2(n!) \rceil \approx n \log_2 n - n \log_2 e = \Omega(n \log n)$.
* **Skip List for Phase 2:**
  * Skip CLRS Ch 13 (Red-Black Trees) unless needed for advanced self-study; BPUT focuses strictly on AVL trees and 2-3 trees.
  * Skip Extendible Hashing directory structure.
* **The Dual Asset:**
  * **Systems Invariant:** Flat array memory locality of binary heaps ($2i+1, 2i+2$) vs. pointer indirection cache misses in balanced BSTs.
  * **Exam Representation:** Step-by-step AVL insertion with explicit rotation drawings and balance factor recalculations.

---

### PHASE 3: Design Paradigms, Graphs & Dynamic Programming (Module III)

```
[Start Here] Levitin Ch 5 (BP 159-194 | PP 186-221)
       │ (Divide & Conquer: Merge Sort, Quick Sort, Strassen)
       ▼ 
[Shift To] CLRS Ch 4.1-4.2 (PP 121-134)
       │ (Strassen's 7 multiplications equations)
       ▼
[Shift To] Levitin Ch 8 (BP 277-308 | PP 304-335)
       │ (Dynamic Programming intuition: Warshall, Floyd, Knapsack)
       ▼
[Shift To] CLRS Ch 14.2 & 14.4 (PP 496-532)
       │ (Matrix Chain Multiplication & LCS 2D table construction)
       ▼
[Shift To] Levitin Ch 9 (BP 309-340 | PP 336-367) & CLRS Ch 15 (PP 552-592)
       │ (Greedy: Prim, Kruskal, Dijkstra, Huffman, Greedy Choice Property)
       ▼
[Shift To] Levitin Ch 12.1-12.2 (BP 418-437 | PP 445-464)
       │ (Backtracking: N-Queens, Subset Sum & Branch-and-Bound: TSP, Knapsack)
       ▼
[Shift To] CLRS Ch 24.1-24.3 (PP 869-902)
       │ (Network Flow: Ford-Fulkerson, Residual Networks, Max-Flow Min-Cut)
       ▼
[Finish With] CLRS Ch 30.1-30.2 (PP 1132-1158) & CLRS Ch 32.1-32.2 (PP 1234-1250)
         (FFT / DFT O(n log n) & Rabin-Karp Rolling Hash)
```

* **Step 1: Divide-and-Conquer**
  * *Resource:* Levitin Ch 5.1–5.5 (BP 160–194 | **PP 187–221**) & CLRS Sec 4.1–4.2 (**PP 121–134**)
  * *Subtopics:* Merge Sort (merging step $O(n)$), Quick Sort (Lomuto vs Hoare partitioning), Strassen's Matrix Multiplication ($7$ multiplications vs $8$, recurrence $T(n) = 7T(n/2) + \Theta(n^2) \implies O(n^{\log_2 7}) \approx O(n^{2.81})$).
* **Step 2: Dynamic Programming**
  * *Resource:* Levitin Ch 8.1–8.4 (BP 278–308 | **PP 305–335**) $\to$ CLRS Ch 14.2 & 14.4 (**PP 496–532**)
  * *Subtopics:* Optimal substructure, overlapping subproblems, Floyd-Warshall ($D^{(k)}[i,j] = \min(D^{(k-1)}[i,j], D^{(k-1)}[i,k] + D^{(k-1)}[k,j])$), 0/1 Knapsack ($V[i,w] = \max(V[i-1,w], v_i + V[i-1, w-w_i])$), Matrix Chain Multiplication ($m[i,j] = \min_{i \le k < j}\{m[i,k] + m[k+1,j] + p_{i-1}p_k p_j\}$), Longest Common Subsequence (LCS 2D matrix trace).
* **Step 3: Greedy Strategy & Graph Algorithms**
  * *Resource:* Levitin Ch 9.1–9.4 (BP 311–340 | **PP 338–367**) $\to$ CLRS Ch 15 (**PP 552–592**) & Ch 21–22 (**PP 762–837**)
  * *Subtopics:* Greedy choice property vs Optimal substructure, Fractional Knapsack, Prim's Algorithm (cut property), Kruskal's Algorithm (Disjoint Set Union-Find), Dijkstra's Algorithm ($O((V+E)\log V)$ with min-heap), Huffman Coding.
* **Step 4: Backtracking & Branch-and-Bound**
  * *Resource:* Levitin Ch 12.1–12.2 (BP 418–437 | **PP 445–464**)
  * *Subtopics:* State-space tree, $N$-Queens problem, Subset-Sum, Hamiltonian Circuit, Branch-and-Bound pruning for Assignment and 0/1 Knapsack.
* **Step 5: Network Flow, FFT & String Matching**
  * *Resource:* CLRS Ch 24.1–24.2 (**PP 869–895**), CLRS Ch 30.1–30.2 (**PP 1132–1158**), CLRS Ch 32.1–32.2 (**PP 1234–1250**)
  * *Subtopics:* Flow networks, residual capacity $c_f(u,v)$, augmenting paths, Max-Flow Min-Cut Theorem, Ford-Fulkerson method ($O(E \cdot |f^*|)$), DFT and Cooley-Tukey FFT ($O(n \log n)$ divide-and-conquer), Rabin-Karp rolling hash ($O(n+m)$ average).
* **Skip List for Phase 3:**
  * Skip CLRS Sec 24.4 (Push-Relabel algorithms) — only Ford-Fulkerson is examinable.
  * Skip continuous computational geometry (closest pair / convex hull) in CLRS Ch 33.
* **The Dual Asset:**
  * **Systems Invariant:** Dynamic programming as topological sorting over a Directed Acyclic Graph (DAG) of subproblem dependencies; Max-Flow Min-Cut duality in distributed network routing.
  * **Exam Representation:** Complete 2D DP matrix table construction for **LCS** with diagonal arrows, and Dijkstra's step-by-step vertex relaxation table.

---

### PHASE 4: NP-Completeness & Approximation Algorithms (Module IV)

```
[Start Here] Levitin Ch 11.3 (BP 387-400 | PP 414-427)
       │ (P, NP, NP-Complete definitions & Venn Diagrams)
       ▼ 
[Shift To] CLRS Ch 34.1-34.5 (PP 1343-1422)
       │ (Formal polynomial reductions & 3-SAT -> Vertex Cover -> Independent Set)
       ▼
[Finish With] CLRS Ch 35.1-35.2 (PP 1423-1440)
         (2-Approximation for Vertex Cover & Metric TSP)
```

* **Step 1: Complexity Classes ($P$, $NP$, $NP\text{-Hard}$, $NP\text{-Complete}$)**
  * *Resource:* Levitin Ch 11.3 (BP 387–400 | **PP 414–427**) $\to$ CLRS Ch 34.1–34.3 (**PP 1345–1378**)
  * *Subtopics:* Deterministic vs Non-deterministic polynomial time, polynomial verification vs solving, Cook-Levin Theorem, polynomial reduction $A \le_p B$.
* **Step 2: Classic NP-Complete Reductions**
  * *Resource:* CLRS Ch 34.4–34.5 (**PP 1378–1422**)
  * *Subtopics:* Circuit-SAT $\to$ 3-CNF-SAT $\to$ CLIQUE $\to$ VERTEX-COVER $\to$ HAM-CYCLE $\to$ TSP $\to$ SUBSET-SUM.
* **Step 3: Approximation Algorithms**
  * *Resource:* CLRS Ch 35.1–35.2 (**PP 1423–1440**)
  * *Subtopics:* Approximation ratio $\rho(n)$, 2-Approximation for Vertex Cover using Maximal Matching (`APPROX-VERTEX-COVER`), 2-Approximation for Metric TSP using MST traversal.
* **Skip List for Phase 4:**
  * Skip the complete 25-page formal Turing Machine proof of Cook's Theorem; study the circuit reduction logic.
  * Skip CLRS Sec 35.3–35.5 (Set-cover, Randomization, Subset-sum fully polynomial schemes).
* **The Dual Asset:**
  * **Systems Invariant:** The reduction methodology: proving a new problem is hard by reducing a known hard problem *to* it ($A \le_p B$ means $B$ is at least as hard as $A$).
  * **Exam Representation:** Standard 5-point definitions of $P, NP, NP\text{-Hard}, NP\text{-Complete}$ with Venn diagrams ($P \neq NP$) and the `APPROX-VERTEX-COVER` algorithm trace.

---

## 4. Tactical Execution Protocol (Per 60-Min Study Session)

1. **Step 1: Visual Seed (20 Mins):** Watch the targeted Abdul Bari video on 1.25x or step through VisuAlgo live.
2. **Step 2: Targeted Book Extraction (30 Mins):** Jump directly to the exact PDF page listed above (Levitin or CLRS) to extract the recurrence equation and proof structure.
3. **Step 3: Dual Asset Note (10 Mins):** Open [[Academic Notes Template]] and record:
   - Invariant (state transition / recurrence / bounding relation).
   - Exam Representation (diagram / tabular trace / algorithm pseudocode).
4. **Hard Stop (60 Mins Total):** Close book and move on.

---
# Reference 

1. [[DAA.pdf]]
