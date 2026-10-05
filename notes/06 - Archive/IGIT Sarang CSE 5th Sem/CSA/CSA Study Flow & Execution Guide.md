
Type : #RawNote       
Date : 2026-09-27        
Tags : [[College]] ; [[CSA]]    
~ ***Yash Agrawall*** ~     

---
# Computer System Architecture (CSA) — Study Flow & Execution Guide

**Course Code:** PECS5301 | **Credits:** 3 (Theory) = **3 Credits**    
**Target Grade:** **E / O (9–10)**   
**Associated Notes:** [[CSA Theory Syllabus]] · [[Core_Subjects_Study_Method_and_Visual_Sources]]

---
## 1. Executive Strategy & The Dual Lens

Computer System Architecture teaches how the machine actually executes instructions:

1. **The College Exam Lens:** Dr. Sushant Kumar Sahoo and BPUT exams grade strictly based on **M. Morris Mano's** classic formulations: register-transfer language (RTL), instruction cycle flowcharts, microprogram sequencer diagrams, 4-segment pipeline timing tables, and cache mapping bit-partitioning numericals.
2. **The Efficiency Rule for Module I:** You already completed Digital Electronics in previous semesters. **Do NOT spend 10 hours reading logic gate definitions in Mano Ch 1–3.** Review them in 45 minutes using Gate Smashers and focus your deep reading on Modules II, III, and IV.

---

## 2. Resource Mapping & Local Assets

| Resource Type | Source Name | Local Path / URL | Role & Switch Trigger |
| :--- | :--- | :--- | :--- |
| **Primary Syllabus Text** | **M. Morris Mano** (3rd Ed) | [[Computer_System_Architecture-M.Morris_Mano-3rd_ed.pdf]] | **1-to-1 Match for IGIT Exams.** Read Ch 5 (Basic Org), Ch 7 (Microprogrammed Control), Ch 8 (CPU), Ch 9 (Pipelining), Ch 10 (Arithmetic), and Ch 12 (Memory). Offset: $\text{PP} = \text{BP} + 14$. |
| **Systems Performance Text** | **Bryant & O'Hallaron (CS:APP)** (3rd Ed) | [[Computer_Systems:_A_Programmer's_Perspective-Bryant_&_O'Hallaron-3rd_ed.pdf]] | **Read for Systems Depth.** Ch 6 (The Memory Hierarchy & Cache Locality) and Ch 9 (Virtual Memory Architecture). Offset: $\text{PP} = \text{BP} + 35$. |
| **Reference Architecture Text** | **Carl Hamacher** (6th Ed) | [[Computer_Organization_And_Embedded_System-Carl_Hamacher-6th_ed.pdf]] | Reference for Bus arbitration, DMA transfers, and memory interleaving. Offset: $\text{PP} = \text{BP} + 24$. |
| **Visual Video Lectures** | **Gate Smashers** | [Gate Smashers COA Playlist](https://www.youtube.com/playlist?list=PLxCzCOWd7aiHMonh3G6QNKq53C6oNXGrX) | Whiteboard breakdowns of cache mapping, instruction cycles, and pipeline hazards. |
| **Physical Hardware Intuition** | **Ben Eater** | [Ben Eater 8-bit Computer Playlist](https://www.youtube.com/playlist?list=PLowKtXNTBypGqImE405J2565dvjafglHU) | Physical breadboard construction of registers, ALU, and control sequencer. Unmatched for visual intuition. |
| **Interactive Step-Through** | **Ripes Simulator** | [Ripes Visual RISC-V Simulator](https://github.com/mortbopet/Ripes) | Step instructions through the 5-stage pipeline live; visualize data forwarding and pipeline bubbles. |

---

## 3. Master Chronological Study Flow & Exact Page Mapping

### PHASE 1: Digital Logic Review & Computer Arithmetic (Module I — Fast Track)

```
[Start Here] Mano Ch 1-3 (BP 1-114 | PP 15-128) [FAST SCAN ONLY]
       │ (Review Adders, MUX, Decoders, JK Flip-Flops, Shift Registers in 45 mins)
       ▼ 
[Shift To] Mano Ch 10.1-10.4 (BP 337-370 | PP 351-384)
       │ (Booth's Multiplication Algorithm, Restoring/Non-Restoring Division)
       ▼
[Finish With] Mano Ch 10.5 (BP 371-380 | PP 385-394)
         (Floating-Point Arithmetic Representation: IEEE 754 Single/Double)
```

* **Step 1: Combinational & Sequential Logic Fast-Scan**
  * *Resource:* Mano Ch 1–3 (BP 1–114 | **PP 15–128**)
  * *Subtopics:* Half/Full Adder, Half/Full Subtractor, 4-to-1 Multiplexer realization, 3-to-8 Decoder, Master-Slave JK Flip-Flop, 4-bit Universal Shift Register, Synchronous Binary Counter.
* **Step 2: Fixed-Point Arithmetic & Booth's Algorithm**
  * *Resource:* Mano Ch 10.1–10.3 (BP 337–362 | **PP 351–376**)
  * *Subtopics:* Addition and subtraction with signed-magnitude and 2's complement, Booth's Multiplication Algorithm for signed-2's complement numbers (flowchart, $Q_n Q_{n+1}$ bit examination, arithmetic right shift), Restoring and Non-Restoring division algorithms.
* **Step 3: Floating-Point Arithmetic**
  * *Resource:* Mano Ch 10.4–10.5 (BP 363–380 | **PP 377–394**)
  * *Subtopics:* Floating-point addition, subtraction, multiplication, division; IEEE 754 standard (Single precision: 1 sign, 8 exponent [bias 127], 23 mantissa; Double precision: 1 sign, 11 exponent [bias 1023], 52 mantissa).
* **Skip List for Phase 1:**
  * Do NOT solve lengthy K-Map minimization exercises in Mano Ch 1–2.
  * Skip complex ECL and TTL transistor circuit physics.
* **The Dual Asset:**
  * **Systems Invariant:** Subtraction implemented as 2's complement addition allows a single adder circuit to handle both operations without signed hardware branches.
  * **Exam Representation:** Step-by-step trace table of Booth's Multiplication Algorithm (Registers $A, Q, Q_{n+1}$, Sequence Counter $SC$) and the full Booth flowchart.

---

### PHASE 2: Basic Computer Organization, Control Unit & CPU (Module II)

```
[Start Here] Mano Ch 5 (BP 123-172 | PP 137-186)
       │ (Registers PC, AR, DR, AC, IR, Common Bus System, Instruction Cycle)
       ▼ 
[Shift To] Mano Ch 7 (BP 213-240 | PP 227-254)
       │ (Microprogrammed Control: Control Memory, Address Sequencing, Sequencer)
       ▼
[Finish With] Mano Ch 8 (BP 241-298 | PP 255-312)
         (General Register Org, Stack Org/RPN, Instruction Formats, 8 Addressing Modes)
```

* **Step 1: Basic Computer Organization & Instruction Cycle**
  * *Resource:* Mano Ch 5.1–5.7 (BP 123–160 | **PP 137–174**)
  * *Subtopics:* Instruction codes, Stored program organization, Computer Registers (Program Counter $PC$, Address Register $AR$, Data Register $DR$, Accumulator $AC$, Instruction Register $IR$, Temporary Register $TR$), Common Bus System (3-state buffers, decoder selection), Instruction cycle: Fetch, Decode, Read Effective Address, Execute, Interrupt Cycle.
* **Step 2: Hardwired vs. Microprogrammed Control**
  * *Resource:* Mano Ch 7.1–7.4 (BP 213–240 | **PP 227–254**)
  * *Subtopics:* Control memory (ROM), Address sequencing (Branch logic, Mapping from opcode to microinstruction address, Subroutine register), Microprogram sequencer block diagram, Comparison between Hardwired control (fast, inflexible) and Microprogrammed control (flexible, microcode programmable).
* **Step 3: Central Processing Unit & Addressing Modes**
  * *Resource:* Mano Ch 8.1–8.8 (BP 241–298 | **PP 255–312**)
  * *Subtopics:* General register organization (ALU, MUX bus selectors), Stack organization (Register stack, Memory stack, Reverse Polish Notation RPN evaluation), Instruction formats (Three-, Two-, One-, Zero-Address instructions), Addressing modes: Immediate, Direct, Indirect, Register, Register Indirect, Relative ($EA = PC + \text{offset}$), Indexed ($EA = XR + \text{address}$), Base Register ($EA = BAR + \text{offset}$), RISC vs CISC architectural comparison.
* **Skip List for Phase 2:**
  * Skip accumulator design gate-level circuit minimization in Mano Sec 5.8–5.9.
  * Skip obsolete assembly programs in Mano Ch 6 (focus on concepts, not Mano's 1980 toy assembly syntax).
* **The Dual Asset:**
  * **Systems Invariant:** Microcode control memory as an internal hardware interpreter that decodes macro-instructions into control word bitvectors; orthogonality of instruction formats.
  * **Exam Representation:** Complete Instruction Cycle flowchart (Fetch $\to$ Decode $\to$ Execute $\to$ Check Interrupt) and the summary table of all 8 Addressing Modes with Effective Address formulas.

---

### PHASE 3: Pipelining & Input-Output Organization (Module III)

```
[Start Here] Mano Ch 9.1-9.4 (BP 299-322 | PP 313-336)
       │ (Parallel Processing, 4-Segment Instruction Pipeline, Hazards & Stalls)
       ▼ 
[Shift To] Mano Ch 9.5-9.7 (BP 323-336 | PP 337-350)
       │ (Speedup Ratio Derivation, Vector Processing & Array Processors)
       ▼
[Shift To] Mano Ch 11.1-11.4 (BP 381-412 | PP 395-426)
       │ (I/O Interface, Asynchronous Strobe vs Handshaking, Programmed & Interrupt I/O)
       ▼
[Finish With] Mano Ch 11.5-11.8 (BP 413-438 | PP 427-452) & Hamacher Ch 7 (PP 239-274)
         (Direct Memory Access DMA Controller, Priority Interrupt Daisy-Chaining)
```

* **Step 1: Pipelining Principles & Hazards**
  * *Resource:* Mano Ch 9.1–9.4 (BP 299–322 | **PP 313–336**)
  * *Subtopics:* 4-Segment instruction pipeline (Fetch instruction FI, Decode instruction DA, Fetch operand FO, Execute instruction EX), Arithmetic pipeline (floating-point adder pipeline), Pipeline hazards: Structural hazards (resource conflicts), Data hazards (RAW, WAR, WAW, data forwarding solutions), Control hazards (branch penalty, branch prediction, delayed branch).
* **Step 2: Pipeline Performance & Vector Processing**
  * *Resource:* Mano Ch 9.4–9.7 (BP 317–336 | **PP 331–350**)
  * *Subtopics:* Speedup ratio: $S_k = \frac{n \cdot t_n}{(k + n - 1) \cdot t_p}$, Efficiency $E = \frac{S_k}{k}$, Throughput $P = \frac{n}{(k + n - 1) \cdot t_p}$, Vector operations, Matrix multiplication vector loops, SIMD Array processors.
* **Step 3: Input-Output Organization & Asynchronous Transfer**
  * *Resource:* Mano Ch 11.1–11.4 (BP 381–412 | **PP 395–426**)
  * *Subtopics:* Peripheral devices, I/O bus vs Memory bus, Isolated I/O vs Memory-Mapped I/O, Asynchronous data transfer: Strobe pulse method (source-initiated vs destination-initiated) vs Handshaking method (REQ / ACK sequence).
* **Step 4: Modes of Transfer & Direct Memory Access (DMA)**
  * *Resource:* Mano Ch 11.5–11.7 (BP 413–438 | **PP 427–452**) & Hamacher Ch 7 (BP 215–250 | **PP 239–274**)
  * *Subtopics:* Programmed I/O, Interrupt-Initiated I/O, Priority Interrupts: Software polling vs Hardware Daisy-Chaining priority vs Parallel Priority Interrupt (Priority Encoder), Direct Memory Access (DMA): Bus Request ($BR$), Bus Grant ($BG$), DMA Controller registers (Address register, Word count register, Control register), Transfer modes: Burst transfer vs Cycle Stealing.
* **Skip List for Phase 3:**
  * Skip obsolete magnetic tape and drum peripheral mechanics in Mano Ch 11.
  * Skip complex gate-level parity bit generation circuits.
* **The Dual Asset:**
  * **Systems Invariant:** Hardware data forwarding and branch delay slots to prevent pipeline bubbles; DMA controller releasing CPU from memory bus churn during bulk storage I/O.
  * **Exam Representation:** Space-time diagram of a 4-segment instruction pipeline across 7 clock cycles, the mathematical speedup ratio derivation, and the complete Block Diagram of a DMA Controller showing $BR, BG, RD, WR$.

---

### PHASE 4: Memory Organization, Cache & Virtual Memory (Module IV)

```
[Start Here] Mano Ch 12.1-12.4 (BP 439-462 | PP 453-476)
       │ (Memory Hierarchy, RAM/ROM Chips, Associative Memory)
       ▼ 
[Shift To] Mano Ch 12.5 (BP 463-472 | PP 477-486)
       │ (Cache Memory: Direct, Associative, Set-Associative Mapping, Hit Ratio)
       ▼
[Shift To] CS:APP Ch 6.1-6.5 (BP 599-650 | PP 634-685)
       │ (Cache Locality: Spatial & Temporal Locality, Cache Line Bit Partitioning)
       ▼
[Shift To] Mano Ch 12.6-12.8 (BP 473-488 | PP 487-502)
       │ (Virtual Memory: Paging, Page Table, TLB, Page Replacement Algorithms)
       ▼
[Finish With] CS:APP Ch 9.1-9.6 (BP 827-875 | PP 862-910)
         (End-to-End Address Translation: Virtual Address -> TLB -> Page Table -> Physical)
```

* **Step 1: Memory Hierarchy & Auxiliary Memory**
  * *Resource:* Mano Ch 12.1–12.4 (BP 439–462 | **PP 453–476**)
  * *Subtopics:* Memory hierarchy pyramid (Registers, Cache, Main Memory, Secondary Storage), RAM chips (SRAM vs DRAM, cell structure), ROM chips (PROM, EPROM, EEPROM), Memory address map, Connection of RAM/ROM chips to CPU bus, Associative Memory (Content Addressable Memory CAM, Match logic).
* **Step 2: Cache Memory Mapping & Policies**
  * *Resource:* Mano Ch 12.5 (BP 463–472 | **PP 477–486**) $\to$ CS:APP Ch 6.1–6.5 (BP 599–650 | **PP 634–685**)
  * *Subtopics:* Cache structure (Cache lines, Tag, Set index, Block offset), Cache mapping techniques:
    * Direct Mapping ($Index = \text{Block} \bmod \text{Sets}$, single tag check).
    * Fully Associative Mapping (any block anywhere, parallel tag comparator).
    * $K$-Way Set-Associative Mapping (balance of speed and hardware cost).
  * *Hit Ratio & Miss Penalty:* Average Memory Access Time ($AMAT = T_{\text{hit}} + \text{Miss Rate} \times \text{Miss Penalty}$). Write policies: Write-Through vs Write-Back (dirty bit), Write-Allocate vs No-Write-Allocate.
* **Step 3: Virtual Memory Architecture & Paging**
  * *Resource:* Mano Ch 12.6–12.8 (BP 473–488 | **PP 487–502**) $\to$ CS:APP Ch 9.1–9.6 (BP 827–875 | **PP 862–910**)
  * *Subtopics:* Address space vs Memory space, Paging hardware, Page table entries (Valid bit, Dirty bit, Protection bits), Translation Lookaside Buffer (TLB), Multi-level page tables, Page Fault handling, Page replacement algorithms: FIFO, Least Recently Used (LRU), Optimal Page Replacement.
* **Skip List for Phase 4:**
  * Skip obsolete magnetic bubble memory sections in Mano Ch 12.
  * Skip complex multi-core cache coherence protocols (MESI/MOESI) in Mano Ch 13 unless reviewing for advanced systems depth.
* **The Dual Asset:**
  * **Systems Invariant:** The Memory Hierarchy Principle: Exploiting spatial locality (stride-1 memory access) and temporal locality (reusing recent variables) to bridge the 200x CPU-DRAM latency gap; two-level address translation via TLB.
  * **Exam Representation:** Step-by-step cache address bit-partitioning numerical (calculating Tag bits, Set bits, Word offset bits for Direct and Set-Associative mappings) and Page Fault sequence trace.

---

## 4. Tactical Execution Protocol (Per 60-Min Study Session)

1. **Step 1: Visual Seed (20 Mins):** Watch the targeted Gate Smashers COA video or step through instruction cycles on Ripes Simulator.
2. **Step 2: Targeted Book Extraction (30 Mins):** Jump directly to the exact PDF page listed above (Morris Mano for exam circuits, CS:APP for cache/virtual memory depth).
3. **Step 3: Dual Asset Note (10 Mins):** Open [[Academic Notes Template]] and record:
   - Invariant (memory latency hierarchy / hardware-software abstraction / pipelining speedup).
   - Exam Representation (block diagram / flowchart / bit-address partitioning numerical).
4. **Hard Stop (60 Mins Total):** Close book and move on.

---
# Reference

1. [[1. Number Systems.pdf]]
2. [[1.1 HARDWARE & SOFTWARE.pdf]]
3. [[2. Arithmetic Calculations.pdf]]
4. [[2.1 Arithmetic Calculation 2.pdf]]
5. [[3. Truth Table and logic Gates.pdf]]
6. [[3.1. Logic gates Book.pdf]]
7. [[4. Combinational Circuits.pdf]]
8. [[4.1. Combinational Circuits Book.pdf]]
9. [[5. Basic Input Output Operations.pdf]]
10. [[6. Basic Processing Unit.pdf]]
11. [[Computer_System_Architecture-M.Morris_Mano-3rd_ed.pdf]]