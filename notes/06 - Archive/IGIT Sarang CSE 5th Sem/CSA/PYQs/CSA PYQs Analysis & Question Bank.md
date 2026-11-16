Type : #Note    
Date : 2026-11-13    
Tags : [[College]] ; [[08 - Tags/computer architecture]]    
Status : #complete     
~ ***Yash Agrawall*** ~     

---

# Computer System Architecture (CSA) — PYQ Analysis & Question Bank

**Course Code:** PECS5301 | **Semester:** 5th Semester  
**Target:** End-Semester Examination & Class Tests  
**Associated Links:** [[CSA Theory Syllabus]] · [[CSA Study Flow & Execution Guide]] · [[CSA_2026_Internal-1]]

---

## 1. High-Yield Topic Frequency & Trend Analysis

### Module I: Arithmetic & Computer Performance
| Topic / Concept | Frequency | Recurring Exam Questions & References |
| :--- | :---: | :--- |
| **Booth's Multiplication Algorithm** | 4 | • **2023–24 Q2a:** Multiply `11001` with `10011` using Booth's Algorithm (5M)<br>• **2022–23 Q2a:** Multiply `0111` with `1001` using Booth's Algorithm (5M)<br>• 2022–23 Q8b (Short note on Booth's signed multiplication) |
| **Floating Point Division / Arithmetic** | 2 | • 2022–23 Q2b (5M - Division of floating-point numbers with flowchart) |
| **Performance Metrics (Processor Time, Elapsed Time, MIPS)** | 2 | • 2023 CT-1 Q2 (Processor Time, Elapsed Time, CPI) |

### Module II: Instruction Set Architecture & Control Unit
| Topic / Concept | Frequency | Recurring Exam Questions & References |
| :--- | :---: | :--- |
| **Hardwired vs Microprogrammed Control Units** | 4 | • 2023–24 Q7b (5M), 2022–23 Q4b (5M), 2023 CT-2 Q1a, 2023 CT-2 Q1b (Control memory) |
| **Control Sequencing for Instruction Execution** | 3 | • **2024–25 Q7b & 2023–24 Q5b:** Write control sequencing for executing `ADD R4, R5, R6` (Fetch, Decode, ALU execute, Register write-back) |
| **CISC vs RISC Architecture & Semantic Gap** | 3 | • 2023–24 Q1a, 2023 CT-1 Q1a (Developed to reduce semantic gap), 2022–23 |
| **Instruction Format & Addressing Modes** | 3 | • 2024–25 Q6, 2023 CT-2 Q1 (Instruction word bit fields: Opcode, Mode, Register, Address) |

### Module III: Memory Organization & Virtual Memory
| Topic / Concept | Frequency | Recurring Exam Questions & References |
| :--- | :---: | :--- |
| **Cache Memory Mapping Techniques** | 3 | • **2023–24 Q4 (10M):** Direct mapping, Associative mapping, Set-Associative mapping with merits and demerits<br>• Hit ratio, Cache lines, Block size |
| **Memory Interleaving (High-Order vs Low-Order)** | 3 | • **2023–24 Q6a (5M), 2022–23 Q7b (5M):** Concept of memory interleaving and bandwidth advantages |
| **Virtual Memory: Paging vs Segmentation** | 3 | • **2023–24 Q7a (5M), 2022–23 Q7a (5M):** Compare paging and segmentation for virtual memory implementation |
| **Associative Memory (CAM)** | 2 | • 2022–23 Q8a (5M - Hardware organization of associative memory) |

### Module IV: Pipelining & Multiprocessors
| Topic / Concept | Frequency | Recurring Exam Appearances & Problems |
| :--- | :---: | :--- |
| **Pipeline Hazards (Structural, Data, Control)** | 4 | • **2024–25 Q6, 2023–24 Q5a (5M):** Define Structural, Data (RAW, WAR, WAW), and Control hazards with mitigation (Forwarding, Branch Prediction)<br>• 2022–23 Q8c (Characteristics of a pipeline) |
| **5-Stage DLX / RISC Pipeline Stages** | 2 | • 2023–24 Q6b (5M - IF, ID, EX, MEM, WB stages) |
| **Flynn's Classification of Computers** | 2 | • 2023–24 Q2b (5M - SISD, SIMD, MISD, MIMD architectures) |
| **Vector Processors vs Array Processors** | 2 | • 2023–24 Q3b (5M) |
| **I/O Modes: Programmed I/O vs Interrupt-Driven I/O vs DMA** | 3 | • 2023–24 Q8b & Q8d, 2022–23 Q8d, 2023 CT-1 Q3 |

---

## 2. Transcribed Question Papers

### Academic Year 2023–24 (Regular Examination)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PECS5301*

#### Q1. Compulsory Short Answer Questions (10 × 1 = 10 Marks)
- **(a)** Both CISC and RISC architectures have been developed to reduce the: *(a) Time delay (b) Semantic gap (c) Cost (d) All of the mentioned*
- **(b)** ________ are the different type(s) of generating control signals: *(a) Hardwired (b) Micro-instruction (c) Micro-programmed (d) Both Micro-programmed and Hardwired*
- **(c)** When all general purpose registers are combined into a single block, it is called a ________.
- **(d)** The VLIW architecture follows a ________ approach to achieve parallelism.
- **(e)** If the programs and data are divided into logical parts, then those parts are called ________.
- **(f)** The average time required to capture the contents of a memory location is called ________.
- **(g)** Explain Hit-ratio in cache memory.
- **(h)** ________ endian architecture is applied on RTF.
- **(i)** ________ register holds temporary data which is being transferred.
- **(j)** Explain Subroutine linkage with an example.

#### Long Answer Questions (Answer any 5 — 5 × 10 = 50 Marks)
- **Q2 (a) (5M):** Multiply `11001` with `10011` by using BOOTH's Algorithm. Trace all intermediate register states ($A, Q, Q_{-1}$, Count).
- **Q2 (b) (5M):** Explain Flynn's classification of computers with neat diagrams and examples.
- **Q3 (a) (5M):** What are the three categories of computer architecture?
- **Q3 (b) (5M):** Differentiate between a Vector processor and an Array processor.
- **Q4 (10M):** Discuss the different mapping techniques used in cache memories (Direct, Associative, Set-Associative) and their relative merits and demerits with appropriate examples.
- **Q5 (a) (5M):** Define structural, data, and control hazards in a pipelined processor with proper examples.
- **Q5 (b) (5M):** Write the control sequencing for executing the instruction: `ADD R4, R5, R6` in a single-bus datapath.
- **Q6 (a) (5M):** Discuss the concept of Memory Interleaving and give its advantages.
- **Q6 (b) (5M):** What are the five stages in a DLX / RISC pipeline?
- **Q7 (a) (5M):** What do you mean by virtual memory? Discuss how paging helps in implementing virtual memory.
- **Q7 (b) (5M):** What are the differences between Hardwired and Micro-programmed control units?
- **Q8 Short Notes (Answer any TWO — 2 × 5 = 10M):**
  - **(a)** PROMs and Flash Memory
  - **(b)** Programmed I/O vs Interrupt-driven I/O
  - **(c)** Volatile vs Non-volatile memory
  - **(d)** Direct Memory Access (DMA) transfer modes

---

### Academic Year 2022–23 (Regular Examination)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PECS5301*

- **Q1 (10M):** Compulsory questions on register transfer language, bus multiplexing, ALU control flags, cache locality (temporal vs spatial), and virtual addressing.
- **Q2 (a) (5M):** Multiply `0111` with `1001` by using BOOTH's Algorithm.
- **Q2 (b) (5M):** Write an algorithm for the division of floating-point numbers and illustrate with a flowchart.
- **Q3 (10M):** Instruction execution cycle: Detailed timing and micro-operations for instruction fetch, indirect address evaluation, and execution.
- **Q4 (10M):** Microprogrammed Control Unit: Control memory address sequencing, micro-instruction format, and horizontal vs vertical microprogramming.
- **Q5 (10M):** Cache Memory: Address translation in 2-way and 4-way set associative caches; cache replacement policies (LRU, FIFO).
- **Q6 (10M):** DMA Controller: Block transfer operation, bus request / bus grant handshake, cycle stealing vs burst mode.
- **Q7 (a) (5M):** Comparing paging and segmentation mechanisms for implementing virtual memory.
- **Q7 (b) (5M):** Discuss the concept of Memory Interleaving and its impact on memory bandwidth.
- **Q8 Short Notes (Answer any TWO — 2 × 5 = 10M):**
  - **(a)** Associative Memory (CAM)
  - **(b)** BOOTH's multiplication algorithm for signed integers
  - **(c)** Characteristics and performance bounds of a pipeline processor
  - **(d)** Interrupt-driven I/O

---

### Internal Examinations (Class Tests) 2023–24

#### 1st Class Test (Full Marks: 15 | Time: 1 Hour)
1. Answer the following with appropriate explanation: [5 × 1 = 5M]
   - (a) Both CISC and RISC architectures have been developed to reduce semantic gap.
   - (b) In CISC architecture most of the complex instructions are stored in control memory.
   - (c) In a 4M-bit chip organization with 19 external connections and 8 data lines, calculate address pins ($19 - 8 - \text{control} = 9$).
   - (d) Monitor/Display role in computer systems.
   - (e) Processor error reporting mechanism.
2. Short notes on: Processor Time, Elapsed Time, IR, PC, MAR, MDR. [5M]
3. Drawbacks of Programmed I/O and Interrupt-driven I/O. [2M]
4. Single-bus CPU organization and register transfer micro-operations. [3M]

#### 2nd Class Test (Full Marks: 15 | Time: 1 Hour)
1. Answer the following: [5 × 1 = 5M]
   - (a) Hardwired and micro-programmed control signal generation.
   - (b) Control memory storing micro-routines.
   - (c) Controller multiplexing after receiving request signal.
   - (d) Memory access time and cycle time.
   - (e) Logical division of program and data (segments/pages).
2. Brief notes: Datapath, Multiprogramming, RAM vs ROM. [3M]
3. Instruction word format and field bit sizing for an indirect addressing architecture. [4M]
4. Micro-routine branching and condition checking in control units. [3M]
