Type : #RawNote
Date : 2026-09-19
Tags : [[College]], [[CSA]]
~ ***Yash Agrawall*** ~

---
# CSA Assignment 1 — Comprehensive Solutions & Professor Study Material References

> **Course**: Computer System Architecture (`PECS5301`)  
> **Programme**: B.Tech (Computer Science & Engineering) — 5th Semester  
> **Department**: Computer Science Engineering & Applications, IGIT Sarang  
> **Examination**: Assignment 1 (2026)  
> **Source Question Paper**: [[CSA_2026_Assignment-1|CSA Assignment 1 Question Paper]] | `CSA_2026_Assignment-1.pdf`  
> **Primary Professor Study Materials (`Study Material By SKS`)**:  
> 1. `1. Number Systems.pdf` (Dr. Robert Harle) — Binary, data quantities, signed representation, overflow  
> 2. `1.1 HARDWARE & SOFTWARE.pdf` (SKS) — Hardware anatomy: Motherboard, CPU, RAM, SSD, HDD, Peripherals  
> 3. `2. Arithmetic Calculations.pdf` (M. Murdocca & V. Heuring) — Adders, CLA adder, overflow, multiplier/divider  
> 4. `2.1 Arithmetic Calculation 2.pdf` (SKS) — Booth multiplication algorithm & signed division hardware  
> 5. `3. Truth Table and logic Gates.pdf` & `3.1. Logic gates Book.pdf` — Digital logic gates & truth tables  
> 6. `4. Combinational Circuits.pdf` & `4.1. Combinational Circuits Book.pdf` — Adders, subtractors, MUX, DEMUX, Decoders, Encoders  
> 7. `5. Basic Input Output Operations.pdf` (SKS) — Programmed I/O, Interrupt-driven I/O, DMA, I/O module structure  
> 8. `6. Basic Processing Unit.pdf` (Carl Hamacher) — Datapath, single-bus CPU, registers, control units (hardwired vs microprogrammed)  
> 9. Textbooks: M. Morris Mano (*Computer System Architecture*, 3rd Ed.), Carl Hamacher (*Computer Organization*, 5th Ed.), William Stallings (*Computer Organization & Architecture*).

---

## Quick Reference: Teacher Materials & Diagram Mapping Table

| Q No. | Topic | Primary SKS Material / Text Reference | Slide / Page / Chapter | Diagram / Schematic to Draw |
| :---: | :--- | :--- | :---: | :--- |
| **1** | Computer Architecture vs. Organization | `6. Basic Processing Unit.pdf`<br>`03 - Notes/CSA COA Introduction.md` | Slide 3<br>Notes p. 1 | Architectural vs. Organizational Attributes block comparison |
| **2** | Functional Units of a Computer System | `6. Basic Processing Unit.pdf`<br>`1.1 HARDWARE & SOFTWARE.pdf` | Slide 3<br>All Slides | **"Content Coverage / Functional Units Block Diagram"** (Input, Memory, ALU, CU, Output with Control vs Data flow) |
| **3** | Instruction Cycle & Interrupt Cycle | `6. Basic Processing Unit.pdf`<br>`5. Basic Input Output Operations.pdf` | Slide 4, 10–12<br>Slide 12 | **"Instruction Cycle State Diagram / Flowchart"** (Fetch $	o$ Decode $	o$ Execute $	o$ Check Interrupt) |
| **4** | RISC vs. CISC Architectures | `6. Basic Processing Unit.pdf`<br>Morris Mano Ch. 8 / Stallings Ch. 15 | Slide 4, 13<br>Mano Sec 8-8 | RISC vs CISC Architectural Spectrum & Datapath Comparison Table |
| **5** | Pipelining & Pipeline Hazards | `2. Arithmetic Calculations.pdf`<br>`CSA Theory Syllabus.md` (Module III) | Slide 24–25<br>Hamacher Ch. 8 | **"4-Stage Instruction Pipeline Timing Chart"** & Hazard Resolution diagrams (Bypassing/Stall) |
| **6** | Memory Hierarchy & Cache Necessity | `6. Basic Processing Unit.pdf`<br>`1.1 HARDWARE & SOFTWARE.pdf` | Slide 3<br>RAM/SSD/HDD | **"Memory Hierarchy Pyramid"** (Registers $	o$ Cache $	o$ RAM $	o$ SSD/HDD $	o$ Tape) |
| **7** | Cache Mapping Techniques | `6. Basic Processing Unit.pdf`<br>Morris Mano Ch. 12 / Stallings Ch. 4 | Slide 3<br>Mano Sec 12-5 | **"Cache Address Formats & Mapping Schemes"** (Direct, Associative, Set-Associative) |
| **8** | SRAM vs. DRAM Comparison | `1.1 HARDWARE & SOFTWARE.pdf`<br>`Internal 2026/CSA_2026_Internal-1.md` | RAM Slides<br>Q2 | **"SRAM 6T Bistable Latch vs DRAM 1T-1C Cell"** schematics |
| **9** | Programmed I/O, Interrupt I/O, DMA | `5. Basic Input Output Operations.pdf`<br>`Internal 2026/CSA_2026_Internal-1.md` | Slides 3, 10, 12, 13–16<br>Q3 | **"Three Modes of I/O Transfer / DMA Block Diagram"** |
| **10** | CPU Execution Time Calculation | `CSA Theory Syllabus.md` (Module II)<br>Stallings Ch. 2 / Hennessy-Patterson | Module II<br>Perf. Eqn | Formula derivation & step-by-step arithmetic: $	ext{CPU Time} = 0.75	ext{ s}$ |
| **11** | Flynn's Classification (SISD, SIMD, MISD, MIMD) | `CSA Theory Syllabus.md` (Module III/IV)<br>Morris Mano Ch. 9 / Stallings Ch. 18 | Module III<br>Mano Sec 9-6 | **"Flynn's $2 	imes 2$ Classification Matrix"** & processing element layouts |
| **12** | CPU Registers (PC, IR, MAR, MDR, ACC, GPRs) | `6. Basic Processing Unit.pdf`<br>Morris Mano Ch. 5 | Slide 5–10<br>Table 5-1 | **"Single-Bus Datapath Register Architecture"** (MAR, MDR, PC, IR, Y, Z, ALU) |
| **13** | Instruction Formats (0-, 1-, 2-, 3-Address) | `6. Basic Processing Unit.pdf`<br>Morris Mano Ch. 8 | Slide 4, 9<br>Mano Sec 8-6 | Arithmetic Expression Evaluation Tree & Instruction Word Layouts |
| **14** | Hardwired vs. Microprogrammed Control | `6. Basic Processing Unit.pdf`<br>Morris Mano Ch. 7 | Slides 13–19<br>Mano Sec 7-1 | **"Hardwired Logic (Step Counter + Decoder) vs Microprogrammed (Control Memory + $\mu$PC)"** |
| **15** | Micro-operations (Register, Arith, Logic, Shift) | `6. Basic Processing Unit.pdf`<br>`2. Arithmetic Calculations.pdf` | Slide 6, 9, 10<br>Slide 3–14 | Register Transfer Datapath & 4-bit Arithmetic/Logic/Shift Function Table |
| **16** | Addressing Modes with Assembly Examples | `6. Basic Processing Unit.pdf`<br>Morris Mano Ch. 8 / Hamacher Ch. 2 | Slide 4, 10<br>Mano Sec 8-5 | Effective Address (EA) Computation diagrams for each mode |
| **17** | Virtual Memory: Paging & Segmentation | `CSA Theory Syllabus.md` (Module IV)<br>Morris Mano Ch. 12 / Stallings Ch. 8 | Module IV<br>Mano Sec 12-6 | **"Virtual-to-Physical Address Translation"** (Page Table & Segment Table) |
| **18** | Translation Lookaside Buffer (TLB) | `6. Basic Processing Unit.pdf`<br>Stallings Ch. 8 / Hamacher Ch. 5 | Slide 3<br>Hamacher Sec 5.7 | **"MMU Address Translation Flow with TLB Cache"** (TLB Hit vs Miss paths) |
| **19** | Locality of Reference (Temporal & Spatial) | `6. Basic Processing Unit.pdf`<br>Morris Mano Ch. 12 / Stallings Ch. 4 | Slide 3<br>Stallings Sec 4.1 | Temporal (Loop reuse) vs Spatial (Array row stride) memory access patterns |
| **20** | Write-Through vs. Write-Back Cache | `CSA Theory Syllabus.md` (Module IV)<br>Morris Mano Ch. 12 / Stallings Ch. 4 | Module IV<br>Mano Sec 12-5 | Write-Through (with Write Buffer) vs Write-Back (with Dirty Bit) block flow |
| **21** | Cache Replacement Policies (FIFO, LRU, Random) | `CSA Theory Syllabus.md` (Module IV)<br>Stallings Ch. 4 / Hamacher Ch. 5 | Module IV<br>Stallings Sec 4.3 | LRU Stack / Age Counter update sequence |
| **22** | Cache Coherence in Multicore Processors | `CSA Theory Syllabus.md` (Module IV)<br>Stallings Ch. 18 / Mano Ch. 13 | Module IV<br>Stallings Sec 18.3 | **"The Cache Coherence Problem & MESI State Transition Diagram"** |
| **23** | Multiprocessor vs. Multicore Systems | `1.1 HARDWARE & SOFTWARE.pdf`<br>`CSA Theory Syllabus.md` (Module IV) | Motherboard/CPU<br>Stallings Ch. 18 | Dual-Socket Multi-chip Server vs Single-die Multi-core CPU topology |
| **24** | Bus Architecture (Single/Multiple, Sync/Async) | `6. Basic Processing Unit.pdf`<br>Hamacher Ch. 7 / Stallings Ch. 3 | Slide 5, 10–12<br>Stallings Sec 3.4 | **"Single-Bus vs Multiple-Bus Hierarchy"** & **"Asynchronous Handshaking Waveform"** |
| **25** | Endianness: Big-Endian vs. Little-Endian | `1. Number Systems.pdf`<br>Stallings Ch. 12 / Hamacher Ch. 2 | Byte/Word Slides<br>Hamacher Sec 2.2 | **"Memory Byte-Address Layout for 32-bit Word `0x12345678`"** |
| **26** | Interrupts & Classification | `5. Basic Input Output Operations.pdf`<br>`Internal 2026/CSA_2026_Internal-1.md` | Slide 3, 12<br>Q4 | **"Interrupt Classification Hierarchy & CPU Context Save/Restore Flow"** |

---

## Navigation
- [Q1: Computer Architecture vs. Computer Organization](#q1-define-computer-architecture-and-computer-organization-explain-the-difference-with-suitable-examples-3-marks)
- [Q2: Functional Units of a Computer System](#q2-draw-and-explain-the-functional-units-of-a-computer-system-input-unit-memory-alu-control-unit-and-output-unit-4-marks)
- [Q3: Instruction Cycle and Interrupt Cycle](#q3-explain-the-instruction-cycle-including-fetch-decode-execute-and-interrupt-cycles-4-marks)
- [Q4: RISC vs. CISC Architectures](#q4-compare-risc-and-cisc-architectures-based-on-instruction-set-execution-time-memory-use-and-applications-3-marks)
- [Q5: Pipelining and Pipeline Hazards](#q5-what-is-pipelining-explain-pipeline-hazardsstructural-data-and-control-hazardswith-examples-4-marks)
- [Q6: Memory Hierarchy and Necessity of Cache](#q6-describe-the-memory-hierarchy-of-a-computer-system-why-are-cache-memories-necessary-3-marks)
- [Q7: Cache Mapping Techniques](#q7-explain-direct-mapping-associative-mapping-and-set-associative-mapping-techniques-used-in-cache-memory-3-marks)
- [Q8: SRAM vs. DRAM and Typical Uses](#q8-differentiate-between-sram-and-dram-state-their-typical-uses-in-a-computer-system-2-marks)
- [Q9: Programmed I/O, Interrupt-Driven I/O, and DMA](#q9-explain-programmed-io-interrupt-driven-io-and-direct-memory-access-dma-compare-their-advantages-2-marks)
- [Q10: CPU Execution Time Calculation](#q10-a-processor-has-a-clock-rate-of-2-ghz-and-executes-a-program-containing-109-instructions-with-an-average-cpi-of-15-calculate-the-cpu-execution-time-2-marks)
- [Q11: Flynn's Classification of Computer Architectures](#q11-explain-flynns-classification-of-computer-architectures-sisd-simd-misd-and-mimd-give-one-real-world-example-of-each-5-marks)
- [Q12: Role of Registers in CPU](#q12-explain-the-role-of-registers-in-a-cpu-describe-pc-ir-mar-mdr-acc-and-general-purpose-registers-4-marks)
- [Q13: Instruction Formats (0, 1, 2, 3-Address)](#q13-what-is-an-instruction-format-explain-zero--one--two--and-three-address-instruction-formats-with-examples-4-marks)
- [Q14: Hardwired vs. Microprogrammed Control](#q14-differentiate-between-hardwired-control-and-microprogrammed-control-units-3-marks)
- [Q15: Micro-operations and Their Classification](#q15-explain-the-concept-of-micro-operations-illustrate-register-transfer-arithmetic-logic-and-shift-micro-operations-4-marks)
- [Q16: Addressing Modes with Assembly Examples](#q16-describe-the-different-addressing-modes-with-suitable-assembly-level-examples-4-marks)
- [Q17: Virtual Memory, Paging, and Segmentation](#q17-what-is-virtual-memory-explain-paging-and-segmentation-4-marks)
- [Q18: Role of Translation Lookaside Buffer (TLB)](#q18-explain-the-role-of-a-translation-lookaside-buffer-tlb-in-virtual-memory-management-2-marks)
- [Q19: Locality of Reference (Temporal & Spatial)](#q19-define-locality-of-reference-explain-temporal-and-spatial-locality-with-examples-3-marks)
- [Q20: Write-Through vs. Write-Back Cache Policies](#q20-compare-write-through-and-write-back-cache-policies-3-marks)
- [Q21: Cache Replacement Policies (FIFO, LRU, Random)](#q21-explain-cache-replacement-policies-fifo-lru-and-random-replacement-3-marks)
- [Q22: Cache Coherence in Multicore Processors](#q22-what-is-cache-coherence-why-is-it-important-in-multicore-processors-3-marks)
- [Q23: Multiprocessor vs. Multicore Systems](#q23-explain-the-difference-between-multiprocessor-and-multicore-systems-3-marks)
- [Q24: Bus Architecture (Single/Multiple, Sync/Async)](#q24-describe-bus-architecture-compare-single-bus-multiple-bus-synchronous-and-asynchronous-buses-4-marks)
- [Q25: Endianness: Big-Endian vs. Little-Endian](#q25-explain-the-concept-of-endianness-differentiate-between-big-endian-and-little-endian-representation-2-marks)
- [Q26: Interrupts and Classification](#q26-what-are-interrupts-classify-interrupts-into-hardware-software-internal-and-external-interrupts-3-marks)

---

# Detailed Solutions

---

### Q1: Define computer architecture and computer organization. Explain the difference with suitable examples. (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 3** (*"Content Coverage: CPU, Operational Registers, ALU, Control Unit, Main Memory System, I/O System"*).
> - **Syllabus & Notes Reference**: `CSA Theory Syllabus.md` (*Module II*), `03 - Notes/CSA COA Introduction.md` (*"Architecture: Conceptual design & attributes visible to programmer; Organization: Physical devices and interconnections"*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 1, p. 1–3); William Stallings (*Computer Organization & Architecture*, 10th Ed., Ch. 1, p. 14–17).
> - **🎨 Diagram to Draw**: Draw a two-column architectural level vs. organizational level hierarchy: **Programmer View (ISA / Architecture)** at the top pointing down to **Hardware Implementation (Datapath + Control Unit / Organization)**.

#### **1. Definitions**

- **Computer Architecture**:  
  Computer Architecture refers to the **abstract, programmer-visible attributes** and the conceptual structure of a computer system that directly impact the logical execution of programs. It defines *what* the computer does from the assembly/machine-language programmer's and compiler writer's perspective.  
  *Key Architectural Attributes include*: Instruction Set Architecture (ISA), instruction formats, addressing modes, data types and representations (e.g., 2's complement integers, IEEE 754 floating-point), register set available to software, and mechanisms for addressing memory and handling I/O.

- **Computer Organization**:  
  Computer Organization refers to the **operational hardware units and their physical interconnections** that realize the architectural specifications. It describes *how* the architectural features are physically implemented in hardware to achieve performance, cost, and power targets.  
  *Key Organizational Attributes include*: Hardware control signals, interfaces between the CPU and peripherals, memory technology used (SRAM cache vs. DRAM main memory), internal datapath bus widths, clock frequency, and ALU circuit design (e.g., ripple-carry vs. carry-lookahead adder).

---

#### **2. Key Differences Between Architecture and Organization**

| Comparison Parameter | Computer Architecture | Computer Organization |
| :--- | :--- | :--- |
| **Primary Focus** | **What** the computer does (logical view). | **How** the hardware implements it (physical view). |
| **Target Audience** | Software programmer, compiler designer, system architect. | Hardware engineer, logic designer, chip architect. |
| **Visibility** | Directly visible to the machine/assembly language programmer. | Transparent (hidden) from the software programmer. |
| **Design Level** | High-level conceptual and functional design. | Low-level hardware, circuit, and microarchitecture design. |
| **Stability Across Family** | Long-lasting; preserved across decades to ensure backward software compatibility. | Evolves frequently with advances in semiconductor fabrication technology. |
| **Core Elements** | Instruction sets, addressing modes, CPU registers, data formats. | Control signals, clock frequency, memory bus width, cache layout, pipeline depth. |

---

#### **3. Illustrative Examples**

1. **The Multiply Instruction Example**:
   - **Architectural Specification**: The ISA specifies that the processor supports a multiplication instruction (e.g., `MUL R1, R2`). Any software written for this architecture can legally issue this opcode and expect the mathematical product in register `R1`.
   - **Organizational Realization**:
     - In an entry-level, low-cost microcontroller implementation, the organization may realize `MUL` using a microcoded routine that executes **repeated additions** and shifts via the standard adder.
     - In a high-performance workstation processor of the same architecture, the organization may implement a dedicated **hardware Booth-Wallace tree multiplier** that completes the operation in a single clock cycle.
   - *Result*: Both implementations share the exact same architecture, but their underlying organizations are drastically different.

2. **The Intel x86 Family Example**:
   - The Intel x86 ISA architecture (instructions, registers `EAX`, `EBX`, addressing modes) was introduced decades ago and remains consistent so that legacy binary programs run unmodified.
   - However, an Intel 80386 (unpipelined, no cache, 16–33 MHz) and a modern Intel Core i9 (16-stage out-of-order pipeline, multi-level caches, multi-core, 5.8 GHz) have completely different computer organizations while sharing the same underlying architecture.

---

### Q2: Draw and explain the functional units of a computer system: input unit, memory, ALU, control unit, and output unit. (4 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 3** (*"Content Coverage: Main Memory System, CPU (Operational Registers, ALU, Control Unit, Cache Memory), Input/Output System"*).
> - **File**: `1.1 HARDWARE & SOFTWARE.pdf`, **Slides 5–27** (*"Motherboard, CPU, Processor, RAM, SSD, HDD, Peripherals"*).
> - **Textbook Reference**: Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 1, Sec 1.2, p. 4–8); M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 1).
> - **🎨 Diagram to Draw**: Replicate the complete Functional Units block diagram showing **solid lines for data/instruction paths** and **dashed lines for control signal paths**.

#### **1. Block Diagram of Functional Units**

```
                  +-----------------------------------------------+
                  |          CENTRAL PROCESSING UNIT (CPU)        |
                  |                                               |
                  |  +------------------+   Control   +--------+  |
                  |  |   Control Unit   | - - - - - > |  ALU   |  |
                  |  |       (CU)       |             +---+----+  |
                  |  +--------+---------+                 |       |
                  |           |                           | Data  |
                  |           | Control Signals           v Flow  |
                  |           v                     +----------+  |
                  |  +------------------+           | Internal |  |
                  |  | CPU Registers    | <-------> | Datapath |  |
                  |  | (PC, IR, MAR...) |           | (Buses)  |  |
                  |  +------------------+           +----------+  |
                  +-----------|---------------------------|-------+
                              | Control                   | Data
                              v                           v
+------------+       +------------------+       +------------------+       +-------------+
|            | Data  |                  | Data  |                  | Data  |             |
| Input Unit | ----> |   Main Memory    | <---> | Central Process. | ----> | Output Unit |
| (Keyboard, |       | (RAM, ROM, Cache)|       |   Unit (CPU)     |       |  (Monitor,  |
| Mouse, Mic)|       +------------------+       +------------------+       | Printer)    |
+------------+                ^                                            +-------------+
                              | Block Transfer
                              v
                     +------------------+
                     | Secondary Memory |
                     |   (SSD, HDD)     |
                     +------------------+

Legend:
  ────> Solid Lines  : Data / Instruction Flow
  - - > Dashed Lines : Timing and Control Signals
```

---

#### **2. Detailed Explanation of Functional Units**

1. **Input Unit**:
   - Accepts binary coded data and programs from human operators or external physical transducers.
   - Electrically converts electro-mechanical, optical, or analog signals into standard binary digital signals compatible with internal CPU logic.
   - *Examples*: Keyboard, mouse, barcode scanner, microphone, network interface card (NIC). (Covered in `1.1 HARDWARE & SOFTWARE.pdf` under *Peripherals*).

2. **Memory Unit**:
   - Stores instructions (programs) and data operands required by the CPU, as well as intermediate and final computation results.
   - Organized hierarchically:
     - **Primary Memory (Main Memory / RAM)**: Volatile, fast semiconductor storage directly addressable by the CPU via MAR/MDR (DDR4/DDR5 RAM).
     - **Cache Memory**: Ultra-fast SRAM placed on the processor die to bridge the speed disparity between the CPU core and main memory (`6. Basic Processing Unit.pdf`, Slide 3).
     - **Secondary Memory**: Non-volatile, high-capacity mass storage for long-term file retention (NVMe SSD, HDD).

3. **Arithmetic and Logic Unit (ALU)**:
   - The primary computational engine inside the CPU where all arithmetic calculations and logical decisions are executed.
   - **Arithmetic Operations**: Fixed-point and floating-point addition, subtraction, multiplication, and division (`2. Arithmetic Calculations.pdf`).
   - **Logical Operations**: Bitwise Boolean functions (AND, OR, NOT, XOR) and relational comparisons ($=, \neq, <, >$).
   - Contains temporary holding registers ($Y$, $Z$) and flag flip-flops (Carry, Overflow, Zero, Sign) to evaluate conditional branch conditions (`6. Basic Processing Unit.pdf`, Slide 5).

4. **Control Unit (CU)**:
   - Acts as the central nervous system and coordinator of the entire computer.
   - Issues electrical timing and control signals that orchestrate the step-by-step actions of all other functional units.
   - Repeatedly fetches instructions from memory into the Instruction Register (IR), decodes their opcodes, and generates sequential micro-orders to route data across internal buses (`6. Basic Processing Unit.pdf`, Slide 13–14).

5. **Output Unit**:
   - Delivers processed computational results from the computer to the outside world in a format intelligible to human users or external actuators.
   - Converts internal binary words into visual text/graphics, printed documents, or audio signals.
   - *Examples*: Video Display Monitor (GPU/HDMI), printers, audio speakers, robotic motor controllers.

---

### Q3: Explain the instruction cycle, including fetch, decode, execute, and interrupt cycles. (4 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 4** (*"Instruction Execution: Step 1 fetch IR $\leftarrow$ [[PC]], Step 2 PC $\leftarrow$ [PC]+4, Step 3 carry out actions specified by IR. Fetch phase, decode phase, execute phase"*).
> - **File**: `6. Basic Processing Unit.pdf`, **Slides 10–12** (*"Control Sequence: Step 1 to 7 with WMFC signal"*).
> - **File**: `5. Basic Input Output Operations.pdf`, **Slide 12** (*"Processor checks for interrupts at the end of the instruction cycle; saves context; restores context"*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 5, Sec 5-5, p. 139–147); William Stallings (*COA*, 10th Ed., Ch. 3, p. 76–84).
> - **🎨 Diagram to Draw**: Draw the complete **Instruction Cycle State Flowchart** (Start $\to$ Fetch $\to$ Decode $\to$ Execute $\to$ Check Interrupt $\to$ Fetch).

#### **1. Complete Instruction Cycle State Diagram**

```
                  +---------------------------+
                  |           START           |
                  +-------------+-------------+
                                |
                                v
               +---------------------------------+
               |          FETCH CYCLE            |
               | MAR <- [PC]                     |
               | Memory Read, IR <- M[MAR]       |
               | PC <- [PC] + Instruction_Length |
               +----------------+----------------+
                                |
                                v
               +---------------------------------+
               |          DECODE CYCLE           |
               | Decoder decodes Opcode in IR    |
               | Compute Effective Address (EA)  |
               +----------------+----------------+
                                |
                                v
               +---------------------------------+
               |         EXECUTE CYCLE           |
               | Route operands to ALU           |
               | Perform computation / transfer  |
               | Store result to Register/Memory |
               +----------------+----------------+
                                |
                                v
               +---------------------------------+
               |         INTERRUPT CHECK         |
               | Is Interrupt Pending & Enabled? |
               +--------+---------------+--------+
                        |               |
                   NO   |               |  YES
                        |               v
                        |     +--------------------+
                        |     |  INTERRUPT CYCLE   |
                        |     | Push PC onto Stack |
                        |     | Save Status/Context|
                        |     | PC <- ISR Address  |
                        |     | Disable Interrupts |
                        |     +---------+----------+
                        |               |
                        +-------+-------+
                                |
                                v
                   (Loop back to Next Fetch)
```

---

#### **2. Detailed Phases of the Instruction Cycle**

#### **Phase 1: Fetch Cycle**
The CPU retrieves the instruction word from the memory address currently designated by the Program Counter (PC) and places it into the Instruction Register (IR).
- **Step 1 ($T_0$)**: $\text{MAR} \leftarrow \text{PC}$  
  The content of the PC is transferred over the internal bus into the Memory Address Register (MAR), and a `Read` control signal is asserted on the memory bus.
- **Step 2 ($T_1$)**: $\text{MDR} \leftarrow \text{Memory}[\text{MAR}]$ (Wait for Memory Function Complete, `WMFC`), and $\text{PC} \leftarrow \text{PC} + 4$  
  *(assuming a 32-bit byte-addressable system, as taught in `6. Basic Processing Unit.pdf`, Slide 4)*.
- **Step 3 ($T_2$)**: $\text{IR} \leftarrow \text{MDR}$  
  The fetched instruction word is latched from the Memory Data Register (MDR) into the Instruction Register (IR).

#### **Phase 2: Decode Cycle**
- The control unit's combinational instruction decoder interprets the operation code (opcode) field of the IR.
- Simultaneously, if the instruction references memory operands, the addressing mode bits are evaluated to compute the **Effective Address (EA)** of the operand.
- Register select signals are asserted to read source register operands into internal temporary buffers ($Y$).

#### **Phase 3: Execute Cycle**
- The control unit generates the required sequence of control micro-orders to carry out the specific task demanded by the decoded opcode:
  - **Memory-Reference Instructions**: If reading an operand, $\text{MAR} \leftarrow \text{EA}$, `Read`, $\text{MDR} \leftarrow \text{Memory}[\text{MAR}]$, and then ALU operation.
  - **Register-Reference Instructions**: Direct ALU operations (e.g., $\text{ALU} \leftarrow R_1 + R_2$, result latched into $Z$, then transferred to destination register $R_3$).
  - **Control-Transfer / Branch Instructions**: If conditional status flags are satisfied, $\text{PC} \leftarrow \text{Branch Target Address}$.

#### **Phase 4: Interrupt Cycle**
As explicitly detailed in `5. Basic Input Output Operations.pdf` (Slide 12), the CPU tests for external or internal interrupt requests **at the very end of the execution phase** of every instruction:
1. If no interrupt is requested (or interrupts are masked), the CPU immediately advances to the next instruction fetch cycle ($\text{PC}$ unchanged).
2. If an active, unmasked interrupt is detected:
   - **Context Save**: The current content of the Program Counter (return address) and processor status flags (PSW) are pushed onto the system stack or saved to a designated memory location ($M[0]$).
   - **Vector Branch**: The PC is loaded with the starting address of the corresponding **Interrupt Service Routine (ISR)** retrieved from the interrupt vector table.
   - **Masking**: Interrupts are disabled ($\text{IEN} \leftarrow 0$) to prevent nested collision before critical context is preserved.
   - The CPU then loops back to fetch the first instruction of the ISR.

---

### Q4: Compare RISC and CISC architectures based on instruction set, execution time, memory use, and applications. (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 4** (*Single-cycle instruction execution steps*), **Slide 13–14** (*Hardwired Control Unit organization designed for simple, fast instructions*).
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module II & Module III: RISC Pipeline*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 8, Sec 8-8, p. 283–288); William Stallings (*COA*, 10th Ed., Ch. 15, p. 550–568).
> - **🎨 Diagram to Draw**: Replicate the comparison table below, highlighting the **Load/Store vs. Memory-to-Memory** architecture distinction.

#### **Comprehensive Comparison Table**

| Comparison Parameter | RISC (Reduced Instruction Set Computer) | CISC (Complex Instruction Set Computer) |
| :--- | :--- | :--- |
| **1. Instruction Set Characteristics** | - **Small, simple** set of primitive instructions.<br>- **Fixed instruction length** (uniform 32-bit format).<br>- Few, highly standardized instruction formats.<br>- Hardwired control unit (`6. Basic Processing Unit.pdf`, Slide 13). | - **Large, diverse** set of complex, multi-operation instructions.<br>- **Variable instruction length** (e.g., 1 to 15 bytes in x86).<br>- Many complex instruction formats.<br>- Microprogrammed control store (`6. Basic Processing Unit.pdf`, Slide 18). |
| **2. Execution Time & CPI** | - Almost all instructions execute in a **single clock cycle** ($\text{CPI} \approx 1$).<br>- Highly optimized for deep, linear instruction pipelining without stalls. | - Instructions require **multiple clock cycles** ($\text{CPI} \gg 1$) depending on complexity.<br>- Harder to pipeline efficiently due to variable instruction lengths and memory stalls. |
| **3. Memory Use & Data Access** | - **Strict Load/Store Architecture**: Only dedicated `LOAD` and `STORE` instructions access memory.<br>- All arithmetic and logical operations execute strictly between CPU registers.<br>- Requires **larger memory footprint** for code (lower code density). | - **Memory-to-Memory / Memory-to-Register**: Arithmetic instructions can directly operate on operands stored in RAM (e.g., `ADD [EBX], EAX`).<br>- High code density (**smaller program memory footprint**). |
| **4. Addressing Modes** | - Few, simple addressing modes (typically 3 to 5: Immediate, Register, Base-Offset). | - Rich and complex addressing modes (10 to 20+ modes: Indirect, Scaled Indexed, Auto-increment). |
| **5. Register File** | - Large general-purpose register file (typically 32 to 128+ registers) to keep operands on-chip. | - Small general-purpose register file (historically 8 to 16 registers). |
| **6. Target Applications** | - Embedded systems, smartphones, IoT devices, cloud servers, and supercomputers where power efficiency and throughput dominate.<br>- *Real-World Examples*: **ARM Cortex** (used in Apple silicon, Snapdragon), **RISC-V**, **MIPS**, **SPARC**. | - General-purpose desktop computing, laptops, and enterprise legacy servers requiring rich backward software compatibility.<br>- *Real-World Examples*: **Intel Core / Xeon (x86)**, **AMD Ryzen**, **VAX-11**, **Motorola 68000**. |

---

### Q5: What is pipelining? Explain pipeline hazards—structural, data, and control hazards—with examples. (4 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2. Arithmetic Calculations.pdf`, **Slides 24–25** (*"High Performance Arithmetic: Pipelined addition, carry-lookahead parallelism"*).
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module III: Pipeline and Vector Processing, Parallel Processing, Instruction Pipeline*).
> - **Textbook Reference**: Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 8, Sec 8.1–8.3, p. 455–480); M. Morris Mano (*CSA*, 3rd Ed., Ch. 9, Sec 9-1 to 9-4, p. 301–320).
> - **🎨 Diagram to Draw**: Draw a 4-stage pipeline execution space-time diagram ($IF, ID, EX, WB$ across clock cycles $1 \dots 6$) and a data hazard forwarding diagram.

#### **1. Definition and Concept of Pipelining**

**Pipelining** is an implementation technique where multiple instructions are overlapped in execution, analogous to an industrial manufacturing assembly line.  
- The complete instruction execution sequence is partitioned into independent sequential sub-stages (e.g., **IF**: Instruction Fetch, **ID**: Instruction Decode, **EX**: Execute, **WB**: Write Back).
- Each stage is separated by interface latch registers and runs concurrently under a common clock.
- **Ideal Speedup**: For a $k$-stage pipeline executing $n$ instructions, the total time required is $T_k = [k + (n - 1)] \times \tau$. The speedup over a sequential non-pipelined processor ($T_{seq} = n \times k \times \tau$) is:
  $$\text{Speedup } S = \frac{n \times k}{k + n - 1} \xrightarrow{n \to \infty} k$$

```
Clock Cycle:      1      2      3      4      5      6      7
Instruction 1: [ IF ] [ ID ] [ EX ] [ WB ]
Instruction 2:        [ IF ] [ ID ] [ EX ] [ WB ]
Instruction 3:               [ IF ] [ ID ] [ EX ] [ WB ]
Instruction 4:                      [ IF ] [ ID ] [ EX ] [ WB ]
```

---

#### **2. Pipeline Hazards and Their Resolution**

A **pipeline hazard** is any condition that prevents the next instruction in the instruction stream from executing in its designated clock cycle, causing pipeline stalls ("bubbles").

#### **A. Structural Hazards (Resource Conflicts)**
- **Cause**: Occurs when two or more concurrent instructions require access to the same physical hardware resource simultaneously.
- **Example**: In a unibus unified-memory processor (von Neumann architecture), if Instruction 1 is in the **MEM (Memory Operand Access)** stage while Instruction 4 is simultaneously in the **IF (Instruction Fetch)** stage, both compete for the single memory bus.
- **Resolution**:
  1. **Harvard Architecture**: Employ separate physical L1 instruction cache and L1 data cache so fetch and operand access proceed concurrently.
  2. **Pipeline Stall**: Insert a one-cycle hardware bubble delaying the fetch of Instruction 4.

#### **B. Data Hazards (Data Dependencies)**
- **Cause**: Occurs when an instruction depends on the result of a preceding instruction that has not yet completed execution and written its result back to the register file.
- **Types**:
  1. **RAW (Read-After-Write / True Dependency)**: Instruction $J$ attempts to read a register before Instruction $I$ writes to it.
  2. **WAR (Write-After-Read / Anti-Dependency)**: Instruction $J$ attempts to write before Instruction $I$ reads.
  3. **WAW (Write-After-Write / Output Dependency)**: Instruction $J$ attempts to write before Instruction $I$ writes.
- **Concrete Example (RAW)**:
  ```assembly
  I1: ADD R1, R2, R3    ; R1 <- R2 + R3 (Result computed in cycle 3, written in cycle 4)
  I2: SUB R4, R1, R5    ; R4 <- R1 - R5 (Requires R1 in cycle 3 during decode/read!)
  ```
- **Resolution**:
  1. **Operand Forwarding (Bypassing)**: Route the computed ALU output directly from the output buffer of the $EX$ stage back to the input multiplexer of the ALU for the next instruction, eliminating stalls.
  2. **Software/Compiler Scheduling**: The compiler inserts independent instructions between `I1` and `I2` or adds `NOP` (No-operation) instructions.

#### **C. Control Hazards (Branch Hazards)**
- **Cause**: Arises from instructions that alter the Program Counter ($\text{PC}$)—such as conditional branches (`BEQ`, `BNE`), unconditional jumps, and subroutine calls. The pipeline does not know which instruction to fetch next until the branch condition is resolved in the $EX$ stage.
- **Concrete Example**:
  ```assembly
  I1: CMP R1, R2
  I2: BEQ Target        ; If R1 == R2, branch to Target
  I3: ADD R3, R4, R5    ; Already fetched into pipeline! Stale if branch is taken!
  ```
- **Resolution**:
  1. **Branch Prediction**:
     - *Static Prediction*: Assume all backward branches (loops) are Taken, and forward branches are Not Taken.
     - *Dynamic Prediction*: Maintain a 2-bit saturating counter in a Branch History Table (BHT) to predict based on recent execution history.
  2. **Branch Target Buffer (BTB)**: An associative cache storing target branch addresses for instant lookup during the fetch stage.
  3. **Delayed Branching**: Define a "branch delay slot" where the compiler places an instruction that must always execute regardless of whether the branch is taken.

---

### Q6: Describe the memory hierarchy of a computer system. Why are cache memories necessary? (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 3** (*"Content Coverage: Operational Registers, Cache memory, Main Memory System"*).
> - **File**: `1.1 HARDWARE & SOFTWARE.pdf`, **Slides 9–20** (*"CPU $\to$ RAM $\to$ SSD $\to$ HDD hierarchy"*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 12, Sec 12-1, p. 445–448); William Stallings (*COA*, 10th Ed., Ch. 4, p. 118–124).
> - **🎨 Diagram to Draw**: Draw the **Memory Hierarchy Pyramid** showing the 5 levels, annotated with arrows indicating increasing speed/cost upward and increasing capacity downward.

#### **1. The Memory Hierarchy Pyramid**

```
                       / \
                      /   \           Level 0: CPU Internal Registers
                     / Reg \          (Access Time: < 0.5 ns | Capacity: < 1 KB)
                    /-------\
                   /  Cache  \        Level 1: Cache Memory (L1, L2, L3 SRAM)
                  / (L1,L2,L3)\       (Access Time: 0.5 - 5 ns | Capacity: 32 KB - 64 MB)
                 /-------------\
                /  Main Memory  \     Level 2: Main Memory (DRAM / DDR4 / DDR5)
               /     (DRAM)      \    (Access Time: 50 - 100 ns | Capacity: 8 GB - 128 GB)
              /-------------------\
             /  Secondary Storage  \  Level 3: Solid State Drive (SSD) & Magnetic Hard Disk (HDD)
            /     (SSD / HDD)       \ (Access Time: 50 us - 10 ms | Capacity: 512 GB - 16 TB)
           /-------------------------\
          /      Tertiary Storage     \ Level 4: Magnetic Tape & Optical Disks
         /      (Tape Library / Cloud) \ (Access Time: seconds to mins | Capacity: Petabytes)
        +-------------------------------+

  ▲  HIGHER SPEED (Lower Latency)             |  ▲  HIGHER COST PER BIT
  |  LOWER CAPACITY                           |  |  LOWER ACCESS TIME
  +-------------------------------------------+--+---------------------------------------
```

#### **Core Design Trade-Offs in the Hierarchy**:
1. **Access Time**: Decreases as we move upward toward the CPU core (Registers are fastest; Magnetic tape is slowest).
2. **Storage Capacity**: Increases dramatically as we move downward away from the CPU core.
3. **Cost per Bit**: Increases steeply as we move upward (SRAM is expensive per bit; Flash/Magnetic storage is cheap per bit).

---

#### **2. Why Cache Memories are Necessary**

1. **The Processor-Memory Speed Gap ("The Memory Wall")**:
   - Over past decades, semiconductor processor clock frequencies advanced from MHz to multiple GHz (sub-nanosecond instruction cycles).
   - In contrast, dynamic RAM (DRAM) access latencies improved very slowly, stagnating around 50–100 ns.
   - Without an intermediate buffer, a 3 GHz processor would have to stall and waste **150 to 300 clock cycles** every time it accesses an operand from main memory!

2. **Bridging the Latency Disparity via Locality of Reference**:
   - Programs exhibit intense temporal and spatial locality.
   - By placing a small, ultra-fast static RAM (SRAM) cache on the processor die running at the core clock frequency (1–3 cycles latency), the CPU finds its requested instructions and data in the cache **90% to 98% of the time (Hit Rate)**.
   - **Effective Memory Access Time ($T_{avg}$)**:
     $$T_{avg} = h \times T_{cache} + (1 - h) \times T_{main}$$
     *Example*: If $T_{cache} = 2\text{ ns}$, $T_{main} = 60\text{ ns}$, and hit ratio $h = 0.95$:
     $$T_{avg} = 0.95 \times 2\text{ ns} + 0.05 \times 60\text{ ns} = 1.9 + 3.0 = 4.9\text{ ns}$$
     *(A more than 12-fold performance speedup compared to accessing main memory directly!)*

---

### Q7: Explain direct mapping, associative mapping, and set-associative mapping techniques used in cache memory. (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 3** (*"Cache memory and Main Memory Interfacing"*).
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module IV: Cache Memory — Associative Mapping, Direct Mapping, Set-Associative Mapping*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 12, Sec 12-5, p. 463–471); William Stallings (*COA*, 10th Ed., Ch. 4, p. 128–142).
> - **🎨 Diagram to Draw**: Draw the 3 memory address division formats:  
>   1. Direct: `[ Tag | Line / Index | Word / Offset ]`  
>   2. Associative: `[ Tag | Word / Offset ]`  
>   3. Set-Associative: `[ Tag | Set Index | Word / Offset ]`

#### **1. Direct Mapping**

- **Principle**: Each block of main memory maps to **exactly one specific cache line**.  
- **Mapping Function**:
  $$i = j \pmod m$$
  *(where $i$ is the cache line number, $j$ is the main memory block number, and $m$ is the total number of lines in the cache).*
- **Address Format**:
  ```
  +--------------------+------------------------+---------------------+
  |     TAG Field      |   LINE / INDEX Field   |  WORD OFFSET Field  |
  +--------------------+------------------------+---------------------+
  ```
- **Operation**: The Line field directly indexes into the cache directory. The stored Tag in that cache line is compared with the address Tag using a single comparator. If equal and valid, it is a **Cache Hit**.
- **Pros**: Simplest hardware implementation; lowest cost; fastest lookup time.
- **Cons**: Severe **conflict misses (thrashing)** if a program repeatedly alternates accesses between two memory blocks that map to the exact same cache line.

---

#### **2. Fully Associative Mapping**

- **Principle**: Any block of main memory can be placed in **any arbitrary cache line**.
- **Address Format**:
  ```
  +---------------------------------------------+---------------------+
  |                  TAG Field                  |  WORD OFFSET Field  |
  +---------------------------------------------+---------------------+
  ```
- **Operation**: Because a block can be stored anywhere, the index field is eliminated. The Tag field is searched simultaneously against the Tags of **all lines in the cache in parallel** using dedicated associative comparison logic.
- **Pros**: Maximum flexibility; completely eliminates conflict misses; highest cache hit ratio.
- **Cons**: Extremely expensive hardware; requires an individual comparator for every single cache line; slower as cache size scales.

---

#### **3. Set-Associative Mapping (The Practical Compromise)**

- **Principle**: The cache lines are partitioned into $S$ sets, where each set contains $k$ cache lines (known as a **$k$-way set-associative cache**).
- **Mapping Function**:
  $$s = j \pmod S$$
  *(where $s$ is the set number, and $S = m / k$ is the total number of sets).*
- A memory block maps to a specific **set**, but can reside in **any of the $k$ lines** within that set.
- **Address Format**:
  ```
  +--------------------+------------------------+---------------------+
  |     TAG Field      |    SET INDEX Field     |  WORD OFFSET Field  |
  +--------------------+------------------------+---------------------+
  ```
- **Operation**: The Set Index selects the specific set. Then, only $k$ Tag comparators operate in parallel to inspect the lines within that set.
- **Pros**: Delivers hit ratios very close to fully associative cache while maintaining hardware comparator cost and lookup latency close to direct mapping. Modern CPUs typically use 4-way, 8-way, or 16-way set associativity.

---

### Q8: Differentiate between SRAM and DRAM. State their typical uses in a computer system. (2 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `1.1 HARDWARE & SOFTWARE.pdf`, **Slides 9–14** (*"RAM: Internal architecture and system role"*).
> - **Internal Exam Reference**: `CSA_2026_Internal-1.md`, **Question 2** (*"Differentiate between SRAM and DRAM"*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 12, Sec 12-2, p. 448–450); William Stallings (*COA*, 10th Ed., Ch. 5, p. 160–164).
> - **🎨 Diagram to Draw**: Draw a quick circuit sketch: **SRAM 6T Flip-Flop (cross-coupled inverters)** vs. **DRAM 1T-1C cell (1 MOSFET transistor + 1 storage capacitor)**.

#### **1. Comprehensive Comparison Table**

| Comparison Parameter | SRAM (Static Random Access Memory) | DRAM (Dynamic Random Access Memory) |
| :--- | :--- | :--- |
| **1. Basic Memory Cell** | Consists of a **bistable flip-flop latch** constructed using **4 to 6 transistors** per bit. | Consists of **1 transistor and 1 tiny capacitor (1T-1C)** per bit. |
| **2. Refresh Requirement** | **No refresh circuitry needed**. Holds stored data continuously as long as power is applied. | **Requires periodic refresh cycles** (every few milliseconds) because charge leaks from capacitors. |
| **3. Access Latency / Speed** | **Extremely Fast**: Access time ranges between **0.5 ns to 5 ns**. | **Moderate**: Access time ranges between **20 ns to 70 ns** (slower due to precharge/refresh). |
| **4. Density & Cell Size** | **Lower Density**: Larger physical silicon footprint per bit (complex 6-transistor cell). | **Very High Density**: Extremely compact cell footprint; allows billions of bits on a single die. |
| **5. Power Consumption** | Low standby power, but higher dynamic power dissipation at maximum operating frequency. | Higher overall standby power due to continuous refresh cycle bursts. |
| **6. Manufacturing Cost** | **Expensive** per gigabyte of capacity. | **Inexpensive / Low cost** per gigabyte of capacity. |

---

#### **2. Typical Uses in a Computer System**

- **Typical Uses of SRAM**:
  1. **CPU On-Chip Cache Memories**: Implemented as **Level 1 (L1), Level 2 (L2), and Level 3 (L3) Caches** integrated directly on the processor die (`6. Basic Processing Unit.pdf`, Slide 3).
  2. **Internal Register Files**: High-speed internal registers (Accumulator, Program Counter, General Purpose Registers).
  3. **High-Speed Buffers**: Hard drive write caches, router packet lookup tables, and Translation Lookaside Buffers (TLBs).

- **Typical Uses of DRAM**:
  1. **Main System Memory (System RAM)**: Packaged on DIMM/SO-DIMM modules as **DDR4, DDR5, and LPDDR5** modules used for executing OS and application software (`1.1 HARDWARE & SOFTWARE.pdf`, Slide 9).
  2. **Graphics Memory (VRAM)**: Specialized high-bandwidth DRAM (GDDR6, GDDR7, HBM3) used on graphics processing units (GPUs) for 3D rendering buffers and machine learning tensor weights.

---

### Q9: Explain programmed I/O, interrupt-driven I/O, and Direct Memory Access (DMA). Compare their advantages. (2 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `5. Basic Input Output Operations.pdf`, **Slide 3** (*"Three principal I/O techniques: Programmed I/O, Interrupt-driven I/O, DMA"*).
> - **File**: `5. Basic Input Output Operations.pdf`, **Slide 10** (*"Programmed I/O: Processor periodically checks status until complete; busy waiting"*).
> - **File**: `5. Basic Input Output Operations.pdf`, **Slide 12** (*"Interrupt-Driven I/O: Processor view vs. I/O module view"*).
> - **File**: `5. Basic Input Output Operations.pdf`, **Slides 13–16** (*"DMA: Specialized I/O processor takes over control to move large block of data"*).
> - **Internal Exam Reference**: `CSA_2026_Internal-1.md`, **Question 3**.

#### **1. Explanation of the Three I/O Techniques**

1. **Programmed I/O (Busy-Waiting / Polling)**:
   - *Working*: When a program requests an I/O operation, the CPU issues an I/O command to the I/O module. The CPU then enters a **continuous software polling loop**, repeatedly checking the status register of the I/O module until the device becomes ready.
   - *Characteristics*: Data moves strictly through the CPU accumulator; the CPU is completely stalled during slow peripheral operations.

2. **Interrupt-Driven I/O**:
   - *Working*: The CPU issues an I/O read/write command to the I/O module and **immediately resumes executing other useful application programs**.
   - *Interrupt Signaling*: When the I/O module has collected the data byte/word and is ready for transfer, it asserts a hardware interrupt line to the processor.
   - *Servicing*: At the end of the current instruction cycle, the CPU pauses, saves its context, transfers the data word via an Interrupt Service Routine (ISR), and returns to the interrupted program (`5. Basic Input Output Operations.pdf`, Slide 12).

3. **Direct Memory Access (DMA)**:
   - *Working*: Used for high-speed, bulk data transfers (e.g., hard drives, network cards). A dedicated hardware controller (DMA Controller) takes over control of the system address and data buses from the CPU.
   - *Block Transfer*: The CPU initializes the DMA controller with: (a) starting memory address, (b) transfer direction (read/write), and (c) number of words. The DMA controller transfers the entire block of data **directly between the I/O device and main memory** cycle-by-cycle without passing through CPU registers.
   - *Completion*: When the entire block transfer completes, the DMA controller issues a single interrupt to the CPU.

---

#### **2. Comparison of Advantages**

| I/O Technique | CPU Utilization | Hardware Complexity | Data Transfer Rate | Primary Advantage |
| :--- | :--- | :--- | :--- | :--- |
| **Programmed I/O** | **Extremely Poor** (CPU tied up in busy-waiting loop). | **Minimal** (Simple I/O port logic, no interrupt controller). | Very Slow (Limited by peripheral response). | Simple to implement on low-cost microcontrollers; zero interrupt latency overhead. |
| **Interrupt-Driven I/O** | **Moderate to High** (CPU free between individual byte transfers). | **Moderate** (Requires interrupt lines, priority arbiters, and ISR stack). | Moderate (Slowed down by context switching per byte). | Eliminates CPU idle waiting; ideal for unpredictable, low-to-moderate data rate devices (keyboards, serial ports). |
| **Direct Memory Access (DMA)** | **Maximum Efficiency** (CPU interrupted only once per entire block). | **High** (Requires DMA controller chip, bus arbiter, address counters). | **Maximum / High Speed** (Operates at bus bandwidth limits). | Bypasses the CPU completely for large block transfers; essential for disks, SSDs, video streaming, and Gigabit Ethernet. |

---

### Q10: A processor has a clock rate of 2 GHz and executes a program containing 10⁹ instructions with an average CPI of 1.5. Calculate the CPU execution time. (2 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module II: Basic Computer Organization and Design — CPU Performance Equation*).
> - **Textbook Reference**: William Stallings (*COA*, 10th Ed., Ch. 2, p. 55–58); John L. Hennessy & David A. Patterson (*Computer Architecture: A Quantitative Approach*, Ch. 1).
> - **🎯 Key Formula**:
>   $$\text{CPU Execution Time } (T) = \frac{\text{Instruction Count } (I_c) \times \text{CPI}}{\text{Clock Frequency } (f)} = I_c \times \text{CPI} \times \tau$$

#### **1. Given Data**
- **Processor Clock Rate ($f$)**:  
  $$f = 2\text{ GHz} = 2 \times 10^9\text{ Hz} = 2 \times 10^9\text{ cycles per second}$$
- **Instruction Count ($I_c$)**:  
  $$I_c = 10^9\text{ instructions}$$
- **Average Cycles Per Instruction ($\text{CPI}$)**:  
  $$\text{CPI} = 1.5\text{ cycles/instruction}$$

---

#### **2. Step-by-Step Calculation**

#### **Method 1: Using Total Clock Cycles**
1. **Calculate the Total Clock Cycles required by the program**:
   $$\text{Total Clock Cycles} = I_c \times \text{CPI}$$
   $$\text{Total Clock Cycles} = 10^9 \times 1.5 = 1.5 \times 10^9\text{ cycles}$$

2. **Calculate the CPU Execution Time ($T$)**:
   $$T = \frac{\text{Total Clock Cycles}}{f}$$
   $$T = \frac{1.5 \times 10^9\text{ cycles}}{2 \times 10^9\text{ cycles/second}}$$
   $$T = \frac{1.5}{2}\text{ seconds} = 0.75\text{ seconds}$$

---

#### **Method 2: Using Clock Cycle Duration ($\tau$)**
1. **Calculate the duration of one clock cycle ($\tau$)**:
   $$\tau = \frac{1}{f} = \frac{1}{2 \times 10^9\text{ s}^{-1}} = 0.5 \times 10^{-9}\text{ s} = 0.5\text{ ns}$$

2. **Calculate the CPU Execution Time ($T$)**:
   $$T = I_c \times \text{CPI} \times \tau$$
   $$T = 10^9 \times 1.5 \times (0.5 \times 10^{-9}\text{ s})$$
   $$T = 1.5 \times 0.5 = 0.75\text{ seconds}$$

---

#### **Final Answer**:
$$\mathbf{\text{CPU Execution Time} = 0.75\text{ seconds } \quad (\text{or } 750\text{ milliseconds})}$$

---

### Q11: Explain Flynn’s classification of computer architectures: SISD, SIMD, MISD, and MIMD. Give one real-world example of each. (5 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module III: Pipeline and Vector Processing — Parallel Processing; Module IV: Multiprocessors*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 9, Sec 9-6, p. 325–329); William Stallings (*COA*, 10th Ed., Ch. 18, p. 675–680).
> - **🎨 Diagram to Draw**: Draw Flynn's **2 × 2 Classification Matrix** (Single/Multiple Instruction Stream vs. Single/Multiple Data Stream) and functional layouts of Control Unit (CU) and Processing Elements (PE).

#### **1. Flynn's 2 × 2 Classification Matrix**

Michael J. Flynn (1966) classified computer systems based on the multiplicity of hardware streams: the **Instruction Stream (IS)** (sequence of instructions executed by the machine) and the **Data Stream (DS)** (sequence of data operands called upon by the instruction stream).

```
                     +-----------------------------------+-----------------------------------+
                     |     SINGLE DATA STREAM (SDS)      |    MULTIPLE DATA STREAM (MDS)     |
+--------------------+-----------------------------------+-----------------------------------+
| SINGLE INSTRUCTION |               SISD                |               SIMD                |
| STREAM (SIS)       | Single Instruction, Single Data   | Single Instruction, Multiple Data |
|                    | (Classical von Neumann CPU)       | (Vector Processors, GPUs)         |
+--------------------+-----------------------------------+-----------------------------------+
| MULTIPLE           |               MISD                |               MIMD                |
| INSTRUCTION        | Multiple Instruction, Single Data | Multiple Instruction, Multiple    |
| STREAM (MIS)       | (Systolic Arrays, Fault-Tolerant) | (Multi-core CPUs, Clusters)       |
+--------------------+-----------------------------------+-----------------------------------+
```

---

#### **2. Detailed Description of the Four Architectures**

#### **1. SISD (Single Instruction Stream, Single Data Stream)**
- **Architecture**: A single Control Unit (CU) fetches and decodes a single instruction stream from memory, and directs a single Processing Element (ALU) to operate on a single data operand stream at any given moment.
- **Operation**: Purely sequential uniprocessor execution. Even if pipelining is employed to overlap instruction stages, it remains SISD because only one instruction completes on one data word per cycle.
- **Real-World Example**: Classic uniprocessor personal computers and microcontrollers—such as the **Intel 8086**, **Motorola 68000**, and early **Intel Pentium 4** single-core processors.

#### **2. SIMD (Single Instruction Stream, Multiple Data Stream)**
- **Architecture**: A single master Control Unit (CU) broadcasts a **single instruction** concurrently to an array of multiple identical Processing Elements (ALUs). Each processing element executes the exact same operation simultaneously, but each operates on its own **unique local data item** from its local data memory.
- **Operation**: Highly effective for data-parallel computing, such as matrix multiplications, image/video filtering, digital signal processing (DSP), and deep neural network matrix tensor operations.
- **Real-World Example**: Modern **Graphics Processing Units (GPUs)** such as **NVIDIA RTX 4090 / H100 Tensor Cores**, vector supercomputers like the **Cray-1**, and CPU SIMD multimedia instruction extensions like **Intel AVX-512** and **ARM Neon**.

#### **3. MISD (Multiple Instruction Stream, Single Data Stream)**
- **Architecture**: Multiple distinct Control Units issue different instructions to multiple processing units that all operate simultaneously on the **very same shared stream of data**.
- **Operation**: This category is largely theoretical and extremely rare in general-purpose computing. It is utilized primarily in ultra-high-reliability mission-critical systems where redundant processors execute different diagnostic/filtering algorithms on identical input sensor streams to cross-validate results through majority voting.
- **Real-World Example**: **NASA Space Shuttle Flight Control Computers** (quad-redundant computers voting on identical sensor data), cryptographic pipelined decoders, and **Systolic Arrays** performing frequency-domain signal processing.

#### **4. MIMD (Multiple Instruction Stream, Multiple Data Stream)**
- **Architecture**: Multiple independent processors, each equipped with its own private Control Unit and ALU, asynchronously fetch and execute **different instruction streams** while operating on **different data streams**.
- **Organization**: Can be organized as **Shared-Memory Multiprocessors (SMP / UMA / NUMA)** or **Distributed-Memory Multi-computers (Clusters)** communicating over high-speed networks.
- **Real-World Example**: Modern multi-core and multi-socket microprocessors such as the **Intel Core i9-14900K**, **AMD Ryzen 9 7950X**, Apple Silicon **M3 Max**, distributed cloud servers, and supercomputers like **Frontier** (ORNL) and **Fugaku**.

---

### Q12: Explain the role of registers in a CPU. Describe PC, IR, MAR, MDR, ACC, and general-purpose registers. (4 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 3** (*"Content Coverage: Operational Registers, Central Processing Unit"*).
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 5** (*"Single-Bus Organization of the Datapath: PC, MAR, MDR, IR, Y, Z, TEMP, R0 to R(n-1)"*).
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 6–10** (*"Register Transfers, Arithmetic Operations, and Memory Fetch sequences"*).
> - **Textbook Reference**: Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 2 & Ch. 7, p. 412–420); M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 5, Table 5-1, p. 126).
> - **🎨 Diagram to Draw**: Draw the **Single-Bus CPU Datapath Register Architecture** from Slide 5 of `6. Basic Processing Unit.pdf`.

#### **1. The Role of Registers in a CPU**

Internal processor registers form the **highest, fastest tier of the memory hierarchy**:
1. **Zero-Latency Storage**: Located directly on the CPU silicon die adjacent to the ALU, providing sub-nanosecond single-cycle access and completely avoiding memory bus latency.
2. **Intermediate Result Buffering**: Temporarily hold intermediate calculation operands so the ALU does not constantly incur main memory traffic.
3. **Control & Addressing Support**: Hold instruction opcodes, memory pointer addresses, status flags, and subroutine return pointers during instruction execution.

---

#### **2. Detailed Description of Key Registers**

```
+-------------------------------------------------------------------------+
|                      INTERNAL PROCESSOR BUS                             |
+---+----------+----------+----------+----------+----------+----------+---+
    ^          ^          |          |          ^          ^          |
    |          |          v          v          |          |          v
 +--+---+   +--+---+   +--+---+   +--+---+   +--+---+   +--+---+   +--+---+
 |  PC  |   |  IR  |   | MAR  |   | MDR  |   | ACC  |   |  R0  |   | R(n) |
 +------+   +------+   +---+--+   +--+---+   +------+   +------+   +------+
                           |         ^
                 Address   |         | Data
                 Lines     v         v Lines
              ==============================
                     EXTERNAL MEMORY BUS
```

1. **PC (Program Counter)**:
   - A special-purpose register that holds the **memory address of the next sequential instruction** to be fetched for execution (`6. Basic Processing Unit.pdf`, Slide 4).
   - Automatically incremented by the instruction word length during the fetch cycle ($\text{PC} \leftarrow \text{PC} + 4$). Updated with target addresses during branch/jump/subroutine calls.

2. **IR (Instruction Register)**:
   - Holds the **operation code and operand specifiers of the instruction currently being decoded and executed**.
   - Connected directly to the instruction decoder and control logic (`6. Basic Processing Unit.pdf`, Slide 5).

3. **MAR (Memory Address Register)**:
   - Directly drives the external **system address bus**.
   - Holds the physical memory address from which data is to be read or to which data is to be written. Loaded from the PC during instruction fetch, or from an effective address register during operand access.

4. **MDR (Memory Data Register / MBR - Memory Buffer Register)**:
   - Directly interfaces with the external **bidirectional system data bus**.
   - Acts as a two-way buffer: captures data arriving from memory during a Read operation, and holds data words waiting to be driven onto the memory bus during a Write operation (`6. Basic Processing Unit.pdf`, Slide 10).

5. **ACC (Accumulator)**:
   - The primary working register in accumulator-based architectures.
   - Holds one of the input operands for arithmetic/logic operations and receives the output result produced by the ALU. Implicitly referenced in single-address instruction formats.

6. **General-Purpose Registers (GPRs: $R_0, R_1, \dots, R_{n-1}$)**:
   - A collection of user-accessible, multipurpose data registers accessible by the compiler and assembly programmer.
   - Used for holding intermediate variables, loop counters, array base pointers, and return values, maximizing compute efficiency and reducing memory traffic.

---

### Q13: What is an instruction format? Explain zero-, one-, two-, and three-address instruction formats with examples. (4 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 4 & Slide 9** (*"Add R3, R1, R2 (3-address) and Move (R1), R2 (2-address)"*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 8, Sec 8-6, p. 273–280); William Stallings (*COA*, 10th Ed., Ch. 12, p. 434–442).
> - **🎨 Diagram to Draw**: Draw the 4 instruction word bit-field layouts and show the evaluation of the expression:  
>   $$X = (A + B) \times (C + D)$$

#### **1. Definition of Instruction Format**

An **Instruction Format** defines the layout of bits within a machine instruction word. It partitions the binary instruction into distinct fields:
1. **Opcode Field**: Specifies the operation to be performed (e.g., `ADD`, `SUB`, `LOAD`).
2. **Address / Register Fields**: Designate the locations of source operands and destination results.
3. **Addressing Mode Field**: Specifies how the effective memory address of an operand is interpreted.

---

#### **2. Evaluation of Expression $X = (A + B) \times (C + D)$ Across Formats**

#### **A. Three-Address Instructions**
- **Format**: `[ Opcode | Destination (R1) | Source 1 (R2) | Source 2 (R3) ]`
- Both source operands and the destination location are explicitly specified in separate fields.
- **Assembly Program**:
  ```assembly
  ADD R1, A, B       ; R1 <- Memory[A] + Memory[B]
  ADD R2, C, D       ; R2 <- Memory[C] + Memory[D]
  MUL X, R1, R2      ; Memory[X] <- R1 * R2
  ```
- *Advantage*: Very compact programs (fewer total instructions).  
- *Disadvantage*: Instruction words are long (require many bits to encode three addresses).

#### **B. Two-Address Instructions**
- **Format**: `[ Opcode | Destination / Source 1 (R1) | Source 2 (R2) ]`
- One address field serves a dual purpose as both a source operand and the destination where the result is stored, overwriting the original content.
- **Assembly Program**:
  ```assembly
  MOV R1, A          ; R1 <- Memory[A]
  ADD R1, B          ; R1 <- R1 + Memory[B]
  MOV R2, C          ; R2 <- Memory[C]
  ADD R2, D          ; R2 <- R2 + Memory[D]
  MUL R1, R2         ; R1 <- R1 * R2
  MOV X, R1          ; Memory[X] <- R1
  ```
- *Characteristic*: Standard format in commercial architectures (e.g., Intel x86).

#### **C. One-Address Instructions (Accumulator-Based)**
- **Format**: `[ Opcode | Memory Address (A) ]`
- Utilizes an implicit **Accumulator (ACC)** register for all operations. The instruction specifies only one memory address operand; the second operand and destination are implicitly the Accumulator.
- **Assembly Program**:
  ```assembly
  LOAD A             ; ACC <- Memory[A]
  ADD B              ; ACC <- ACC + Memory[B]
  STORE T            ; Memory[T] <- ACC (Save intermediate result)
  LOAD C             ; ACC <- Memory[C]
  ADD D              ; ACC <- ACC + Memory[D]
  MUL T              ; ACC <- ACC * Memory[T]
  STORE X            ; Memory[X] <- ACC
  ```
- *Characteristic*: Short instruction words; common in classic early architectures.

#### **D. Zero-Address Instructions (Stack-Based)**
- **Format**: `[ Opcode ]`
- Operands are held implicitly on a **Last-In, First-Out (LIFO) Evaluation Stack**. Arithmetic instructions pop the top two values ($TOS$ and $TOS-1$), execute the operation, and push the result back onto the stack.
- Converts the algebraic expression to **Postfix Notation (Reverse Polish Notation - RPN)**:
  $$X = A B + C D + \times$$
- **Assembly Program**:
  ```assembly
  PUSH A             ; TOS <- Memory[A]
  PUSH B             ; TOS <- Memory[B]
  ADD                ; TOS <- A + B
  PUSH C             ; TOS <- Memory[C]
  PUSH D             ; TOS <- Memory[D]
  ADD                ; TOS <- C + D
  MUL                ; TOS <- (A + B) * (C + D)
  POP X              ; Memory[X] <- TOS
  ```
- *Characteristic*: Extremely short opcodes; used in Java Virtual Machine (JVM) bytecode and HP calculators.

---

### Q14: Differentiate between hardwired control and microprogrammed control units. (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 13** (*"Control Approaches: Hardwired control and Microprogrammed control"*).
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 14–17** (*"Hardwired Control: Clock, Step counter, Decoder/encoder, FSM, PLA, ROM"*).
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 18–19** (*"Microprogrammed Control: Control memory, Microprogram counter, Microinstruction format"*).
> - **Textbook Reference**: Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 7, Sec 7.4–7.5, p. 425–445); M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 7, p. 213–225).
> - **🎨 Diagram to Draw**: Draw side-by-side block diagrams:  
>   (a) Hardwired: `[ Clock + Step Counter + IR Decoder ] -> Combinational Logic Gates -> Control Signals`  
>   (b) Microprogrammed: `[ Micro-PC + Address Sequencer ] -> Control ROM Memory -> Micro-order Bits`

#### **1. Structural Architectures**

- **Hardwired Control Unit** (`6. Basic Processing Unit.pdf`, Slide 14):  
  Employs a **fixed combinational logic network** (gates, decoders, multiplexers, and programmable logic arrays - PLAs) driven by a clock step counter and instruction opcode decoder to directly generate electrical control pulses.
- **Microprogrammed Control Unit** (`6. Basic Processing Unit.pdf`, Slide 18):  
  Treats control generation as a **software execution problem**. Control signals are represented as binary bit patterns (**microinstructions**) stored in a dedicated high-speed on-chip **Control Memory (ROM)**. A Microprogram Counter ($\mu\text{PC}$) and sequencer fetch consecutive microinstructions to drive the datapath.

---

#### **2. Comprehensive Comparison Table**

| Feature | Hardwired Control Unit | Microprogrammed Control Unit |
| :--- | :--- | :--- |
| **1. Implementation Core** | Hardware logic gates, decoders, step counters, and flip-flops. | Firmware / Microcode stored in on-chip Control Read-Only Memory (ROM). |
| **2. Operating Speed** | **Extremely Fast**: Operates at maximum semiconductor gate switching speeds. | **Slower**: Incurs memory access latency to read microinstructions from control ROM. |
| **3. Flexibility & Modification** | **Extremely Rigid**: Modifying or adding instructions requires physical circuit rewiring/redesign. | **Highly Flexible**: Modifying instructions simply requires updating the microcode stored in ROM. |
| **4. Architectural Fit** | **RISC Processors** (Simple, uniform, single-cycle instruction sets). | **CISC Processors** (Complex, variable-length, multi-step instruction sets). |
| **5. Chip Area & Cost** | Compact for small instruction sets; grows exponentially complex for rich ISAs. | Systematic, regular silicon layout; cost-effective for complex instruction sets. |
| **6. Instruction Decoding** | Direct combinational gate decoding (`6. Basic Processing Unit.pdf`, Slide 15). | Address mapping ROM resolves opcode to microprogram starting routine address. |

---

### Q15: Explain the concept of micro-operations. Illustrate register transfer, arithmetic, logic, and shift micro-operations. (4 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 6** (*"Register Transfers: Riin, Rjout, Yin, Zin, Zout"*).
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 9** (*"Arithmetic Operation: Add R3, R1, R2"*).
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 10** (*"Memory Transfer: R1out, MARin, Read, MDRinE, WMFC"*).
> - **File**: `2. Arithmetic Calculations.pdf`, **Slides 3–14** (*"Arithmetic calculations, adders, subtractors, and shifts"*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 4, Sec 4-1 to 4-7, p. 93–122).
> - **🎨 Diagram to Draw**: Draw a **Bus-Connected Register Transfer** diagram and a 4-bit Arithmetic/Logic/Shift Function Table.

#### **1. Concept of Micro-operations**

A **Micro-operation** is an elementary, atomic operation performed on data stored in one or more registers during a single clock pulse cycle.  
- A complete machine instruction (such as `ADD R1, R2`) is decomposed into a sequential series of micro-operations executed over successive clock states ($T_1, T_2, \dots, T_k$).
- Expressed formally using **Register Transfer Language (RTL)**.

---

#### **2. The Four Categories of Micro-operations**

#### **A. Register Transfer Micro-operations**
Transmit binary data from one register to another without altering the data contents.
- **Direct Transfer**: $R_2 \leftarrow R_1$ (Content of register $R_1$ is copied into register $R_2$).
- **Conditional Transfer**: $P: R_2 \leftarrow R_1$ (If control condition $P = 1$, transfer data on the next clock pulse).
- **Bus-Gated Transfer** (`6. Basic Processing Unit.pdf`, Slide 6):
  $$R1_{out}, MAR_{in}$$
  *(Enables output gate of $R_1$ onto the internal bus and asserts input latch of $MAR$).*

#### **B. Arithmetic Micro-operations**
Execute numeric computations on numeric data stored in registers (`2. Arithmetic Calculations.pdf`):
- **Addition**: $R_3 \leftarrow R_1 + R_2$ (Binary sum of $R_1$ and $R_2$).
- **Subtraction (using 2's Complement)**:
  $$R_3 \leftarrow R_1 + \overline{R_2} + 1$$
  *(Add 1's complement of $R_2$ plus 1 to $R_1$).*
- **Increment**: $R_1 \leftarrow R_1 + 1$ (Increment register by 1).
- **Decrement**: $R_1 \leftarrow R_1 - 1$ (Decrement register by 1).

#### **C. Logic Micro-operations**
Execute bitwise Boolean operations on individual bit pairs of registers (useful for bit manipulation, masking, and setting flags):
- **Bitwise AND (Clearing / Masking)**:
  $$R_1 \leftarrow R_1 \wedge R_2$$
- **Bitwise OR (Setting Bits)**:
  $$R_1 \leftarrow R_1 \vee R_2$$
- **Bitwise XOR (Inverting / Toggling Bits)**:
  $$R_1 \leftarrow R_1 \oplus R_2$$
- **Complement (1's Complement / NOT)**:
  $$R_1 \leftarrow \overline{R_1}$$

#### **D. Shift Micro-operations**
Shift the binary bits of a register one position to the left or right:
1. **Logical Shift**:
   - `shl R1`: Shifts bits left; inserts $0$ into the least significant bit ($LSB$). High bit discarded.
   - `shr R1`: Shifts bits right; inserts $0$ into the most significant bit ($MSB$). Low bit discarded.
2. **Circular Shift (Rotate)**:
   - `rol R1`: Rotates bits left; the bit leaving the $MSB$ re-enters the $LSB$.
   - `ror R1`: Rotates bits right; the bit leaving the $LSB$ re-enters the $MSB$.
3. **Arithmetic Shift** (Preserves the signed magnitude):
   - `ashl R1`: Equivalent to multiplying a 2's complement number by 2 (checks for overflow).
   - `ashr R1`: Shifts bits right; **retains the sign bit ($MSB$)**, copying it into the vacated position. Equivalent to dividing by 2.

---

### Q16: Describe the different addressing modes with suitable assembly-level examples. (4 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 4** (*"Instruction Execution: Interpretation of IR"*), **Slide 10** (*"Move (R1), R2: Register Indirect addressing example"*).
> - **Notes Reference**: `03 - Notes/CSA COA Introduction.md` (*"Architecture includes: Addressing Modes, Instruction Set"*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 8, Sec 8-5, p. 263–272); Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 2, Sec 2.5, p. 48–62).
> - **🎨 Diagram to Draw**: Draw a summary table detailing each mode along with its **Effective Address (EA)** formula and an assembly instruction example.

#### **1. Definition of Addressing Mode**

An **Addressing Mode** specifies the rule or mechanism used by the control unit to interpret the address field of an instruction in order to locate the **Effective Address (EA)** of an operand in memory or registers.

---

#### **2. Detailed Breakdown of Addressing Modes**

| Addressing Mode | Effective Address ($\text{EA}$) Formula | Operational Meaning | Assembly-Level Example | Typical Use Case |
| :--- | :--- | :--- | :--- | :--- |
| **1. Immediate Mode** | $\text{Operand} = \text{Address Field Value}$ | The operand value is stored directly inside the instruction word itself. | `MVI A, 45H`<br>`ADD R1, #10` | Initializing loop counters or constants. |
| **2. Direct / Absolute** | $\text{EA} = A$ | The instruction address field contains the actual physical memory address. | `LDA 2050H`<br>`MOV R1, (1000H)` | Accessing global static variables. |
| **3. Indirect Mode** | $\text{EA} = \text{Memory}[A]$ | The address field points to a memory location that contains the effective address. | `LDA @2050H`<br>`MOV R1, @(1000)` | Pointer dereferencing (`*ptr` in C). |
| **4. Register Direct** | $\text{Operand} = \text{Register}[R]$ | The operand resides inside a designated CPU general-purpose register. | `MOV A, B`<br>`ADD R1, R2` | Fast arithmetic on local variables (`6. Basic Processing Unit.pdf`, Slide 9). |
| **5. Register Indirect** | $\text{EA} = \text{Register}[R]$ | The designated register holds the memory address of the operand. | `MOV A, M`<br>`Move (R1), R2` | Traversing dynamic arrays in memory (`6. Basic Processing Unit.pdf`, Slide 10). |
| **6. Relative Mode** | $\text{EA} = \text{PC} + \text{Offset}$ | The effective address is formed by adding a signed offset to the Program Counter ($\text{PC}$). | `JNZ Label`<br>`BEQ +12` | Position-independent code and conditional branch jumps. |
| **7. Indexed Mode** | $\text{EA} = \text{Index Register } [XR] + A$ | Adds a constant base address $A$ to an index register ($XR$). | `MOV R1, 100(R2)`<br>`LDA 2000H(X)` | Accessing arrays where base is constant and index varies (`arr[i]`). |
| **8. Base Register** | $\text{EA} = \text{Base Register } [BR] + \text{Displacement}$ | Adds a runtime base address in $BR$ to an instruction displacement. | `LOAD R1, 24(BR)` | Relocatable operating system code and segments. |
| **9. Auto-Increment / Auto-Decrement** | $\text{EA} = [R]$, then $R \leftarrow R + d$<br>$R \leftarrow R - d$, then $\text{EA} = [R]$ | Automatically steps the pointer register after (post) or before (pre) access. | `MOV (R1)+, R2`<br>`MOV -(SP), R0` | Sequential array traversal and stack PUSH/POP operations. |

---

### Q17: What is virtual memory? Explain paging and segmentation. (4 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module IV: Memory Organization — Virtual Memory, Address Space and Memory Space, Address Mapping Using Pages*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 12, Sec 12-6, p. 471–478); William Stallings (*COA*, 10th Ed., Ch. 8, p. 280–298).
> - **🎨 Diagram to Draw**: Draw the **Paging Address Translation Diagram** (Virtual Address `[p | d]` $\to$ Page Table in RAM $\to$ Physical Address `[f | d]`).

#### **1. Concept of Virtual Memory**

**Virtual Memory** is a memory management architecture coordinated by the operating system and CPU Memory Management Unit (MMU).
- **Core Purpose**: Creates the illusion for application software of having an expansive, uniform, contiguous main memory, even if physical installed RAM is much smaller.
- **Address Space vs. Memory Space**:
  - **Virtual (Logical) Address Space**: The address space generated by the CPU executing program code ($0 \dots 2^N - 1$).
  - **Physical Memory Space**: The actual physical address range provided by installed RAM chips ($0 \dots 2^M - 1$).
- **Mechanism**: Inactive code and data are stored on secondary disk storage (swap space/pagefile) and dynamically swapped into physical RAM blocks on demand.

```
       CPU Virtual Address: [ Page Number (p) | Offset (d) ]
                                    |               |
                                    v               |
                           +------------------+     |
                           |    PAGE TABLE    |     |
                           |------------------|     |
                           | p -> Frame No(f) |     |
                           +--------+---------+     |
                                    |               |
                                    v               v
      Physical RAM Address: [ Frame Number (f)| Offset (d) ]
```

---

#### **2. Paging**

- **Structure**: The virtual address space is partitioned into **fixed-size blocks called Pages** (typically 4 KB). Physical main memory is partitioned into identical fixed-size blocks called **Page Frames**.
- **Virtual Address Format**: `[ Page Number (p) | Page Offset (d) ]`
- **Translation**:
  1. The hardware extracts the Page Number $p$ and indexes into the process's **Page Table**.
  2. The page table entry provides the corresponding **Physical Frame Number $f$** and a **Present/Valid Bit** (indicating if the page is currently in RAM).
  3. If Present $= 1$, physical address is concatenated: `[ f | d ]`.
  4. If Present $= 0$, a **Page Fault** trap occurs, prompting the OS kernel to load the missing page from disk into a free RAM frame.
- **Advantage**: Completely eliminates external fragmentation; simple allocation.

---

#### **3. Segmentation**

- **Structure**: Memory is partitioned into **variable-length logical units called Segments** that directly mirror the logical modularity of the software program (e.g., Code Segment, Global Data Segment, Stack Segment, Subroutine Modules).
- **Virtual Address Format**: `[ Segment Number (s) | Segment Offset (d) ]`
- **Translation**:
  1. The Segment Number $s$ indexes into a **Segment Table**.
  2. Each entry contains: (a) **Base Address** (physical starting location of the segment in RAM), and (b) **Limit / Length** (maximum size of that segment).
  3. **Protection Check**: The MMU verifies whether the Offset $d < \text{Limit}$. If $d \ge \text{Limit}$, a **Segmentation Fault** trap is raised.
  4. Physical address: $\text{Physical Address} = \text{Base} + d$.
- **Advantage**: Provides natural memory protection and sharing between processes (e.g., shared code libraries).

---

#### **4. Comparison Between Paging and Segmentation**

| Parameter | Paging | Segmentation |
| :--- | :--- | :--- |
| **Block Size** | **Fixed size** (e.g., 4 KB, determined by hardware). | **Variable size** (determined by programmer/compiler). |
| **Programmer Visibility** | Completely **transparent** to software. | **Visible** to compiler and operating system. |
| **Address Dimensions** | Single 1-dimensional linear virtual address. | 2-dimensional address: (Segment number, Offset). |
| **Fragmentation** | Suffers from **Internal Fragmentation** (unused space inside the last page). Zero external fragmentation. | Suffers from **External Fragmentation** (variable holes between allocated segments). Zero internal fragmentation. |

---

### Q18: Explain the role of a Translation Lookaside Buffer (TLB) in virtual memory management. (2 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 3** (*"Cache Memory and Address Translation"*).
> - **Textbook Reference**: William Stallings (*COA*, 10th Ed., Ch. 8, Sec 8.2, p. 288–294); Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 5, Sec 5.7, p. 340–346).
> - **🎨 Diagram to Draw**: Draw the **TLB Address Translation Flow**: CPU Virtual Address $\to$ Parallel TLB lookup $\to$ (Hit $\to$ Physical Address) OR (Miss $\to$ Page Table in RAM).

#### **1. The Problem: The Two-Memory-Access Penalty**

In a pure virtual memory paging system, the Page Table resides in physical main memory (DRAM). Consequently, every single CPU memory reference requires **two separate physical memory accesses**:
1. **First Access**: Fetch the page table entry from DRAM to translate the Virtual Page Number into a Physical Frame Number.
2. **Second Access**: Read or write the actual data word in physical memory.  
*Result*: Memory performance is slashed by **50%**.

---

#### **2. The Role and Operation of the TLB**

A **Translation Lookaside Buffer (TLB)** is a small, ultra-fast, on-chip **associative hardware cache** situated directly inside the processor's Memory Management Unit (MMU). It stores the most recently used **Page Table Entries (Virtual Page Number $\to$ Physical Frame Number mappings)**.

```
                  CPU Virtual Address: [ VPN | Offset ]
                                          |
                        +-----------------+-----------------+
                        |                                   |
                        v                                   v
             +--------------------+               +--------------------+
             |      TLB CACHE     |               |    Page Offset     |
             |   (On-Chip SRAM)   |               |     (Passed        |
             +---------+----------+               |    Unchanged)      |
                       |                          +---------+----------+
           +-----------+-----------+                        |
           |                       |                        |
       TLB HIT                 TLB MISS                     |
           |                       |                        |
           v                       v                        |
     [ Frame Number ]      Access Page Table in RAM         |
           |               Load entry into TLB              |
           |                       |                        |
           +-----------> + <-------+                        |
                         |                                  |
                         v                                  v
              Physical Address: [ Frame Number (f) | Offset (d) ]
```

1. **TLB Hit (Typical: 95% - 99% of accesses)**:
   - The MMU performs an instantaneous parallel associative search for the Virtual Page Number in the TLB.
   - The Physical Frame Number is retrieved in **less than 1 nanosecond (zero-cycle penalty)**.
   - The physical memory is accessed directly in a single memory cycle.

2. **TLB Miss**:
   - If the mapping is absent from the TLB, the hardware traverses the page table in DRAM ("page table walk").
   - The retrieved mapping is loaded into the TLB (evicting an older entry via LRU) so future references achieve instant hits.

#### **Effective Access Time ($\text{EAT}$)**:
$$\text{EAT} = h_{\text{TLB}} \times (t_{\text{TLB}} + t_{\text{mem}}) + (1 - h_{\text{TLB}}) \times (t_{\text{TLB}} + 2 \times t_{\text{mem}})$$
*Example*: For TLB hit rate $h = 98\%$, $t_{\text{TLB}} = 1\text{ ns}$, and $t_{\text{mem}} = 50\text{ ns}$:
$$\text{EAT} = 0.98 \times (1 + 50) + 0.02 \times (1 + 100) = 49.98 + 2.02 = 52\text{ ns}$$
*(Drastically faster than 100 ns without a TLB!)*

---

### Q19: Define locality of reference. Explain temporal and spatial locality with examples. (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 3** (*"Cache Memory Fundamental Foundation"*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 12, Sec 12-5, p. 463); William Stallings (*COA*, 10th Ed., Ch. 4, Sec 4.1, p. 118–122).
> - **🎨 Diagram to Draw**: Illustrate a code loop accessing an array sequentially to demonstrate both Temporal (loop counter / sum variable) and Spatial (array indexing) locality simultaneously.

#### **1. Definition of Locality of Reference**

**Locality of Reference** (or the *Principle of Locality*) is an empirical phenomenon in computer science stating that **computer programs do not access all memory locations uniformly; rather, they tend to reference a relatively small and localized portion of their address space repeatedly during any brief execution window**.  
This foundational property is the physical justification for why memory hierarchies, multi-level caches, and virtual memory paging operate with high hit rates (typically 90%–98%).

---

#### **2. Types of Locality with Examples**

#### **A. Temporal Locality (Locality in Time)**
- **Principle**: If a particular memory location or instruction is referenced at time $t$, it has a very high probability of being **referenced again in the near future**.
- **Causes**: Program execution loops, iterative mathematical algorithms, subroutine calls, and frequently reused variables.
- **Example**:
  ```c
  int sum = 0;
  for (int i = 0; i < 1000; i++) {
      sum = sum + arr[i];   // 'sum' and 'i' are referenced 1000 times in rapid succession!
  }
  ```
  *In this loop*: The variables `sum` and `i`, along with the loop instructions themselves, exhibit intense temporal locality.
- **Hardware Exploitation**: The CPU retains recently referenced data in ultra-fast L1/L2 cache lines so subsequent repeated accesses incur zero main-memory delay.

#### **B. Spatial Locality (Locality in Space)**
- **Principle**: If a particular memory storage address $A$ is referenced, there is a high probability that **nearby contiguous memory addresses ($A+1, A+2, \dots$) will be referenced soon**.
- **Causes**: Sequential instruction execution (the Program Counter increments sequentially by 4 bytes), linear traversal of 1D and 2D arrays, structure/record access, and sequential table lookups.
- **Example**:
  ```c
  int arr[1000];
  for (int i = 0; i < 1000; i++) {
      arr[i] = 0;          // Accesses arr[0], arr[1], arr[2] sequentially in physical memory
  }
  ```
  *In this traversal*: When `arr[0]` is accessed, adjacent elements `arr[1]`, `arr[2]`, and `arr[3]` reside at adjacent sequential memory addresses.
- **Hardware Exploitation**: When a cache miss occurs, the hardware does not fetch merely a single byte; it transfers an entire **Cache Block / Cache Line** (typically 64 bytes) into the cache, ensuring subsequent contiguous references result in immediate cache hits.

---

### Q20: Compare write-through and write-back cache policies. (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module IV: Cache Memory — Writing into Cache*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 12, Sec 12-5, p. 468–469); William Stallings (*COA*, 10th Ed., Ch. 4, Sec 4.3, p. 142–144).
> - **🎨 Diagram to Draw**: Replicate the comparison table below, and sketch the **Dirty Bit** flag mechanism used in Write-Back caches.

#### **1. Operational Principles**

When the CPU executes a `STORE` or memory-write instruction and the addressed line is present in the cache (a *Write Hit*), the cache controller must follow one of two policies to maintain data consistency between the cache and main memory:

1. **Write-Through Policy**:
   - The data word is written **simultaneously to both the cache and main memory** on every single write operation.
   - *Write Buffer*: To avoid stalling the processor at slow DRAM write speeds, an intermediate FIFO hardware **Write Buffer** is used.

2. **Write-Back Policy (Copy-Back)**:
   - The data word is written **only to the cache memory line**.
   - Main memory is **not updated immediately**.
   - **Dirty Bit (Modified Bit)**: Each cache line is equipped with a 1-bit status flag called the Dirty Bit. When a write occurs, the Dirty Bit is set to $1$.
   - **Deferred Update**: The modified block is written back to main memory **only when that cache line is evicted** to make room for a new block on a future cache miss.

---

#### **2. Detailed Comparison Table**

| Comparison Parameter | Write-Through Policy | Write-Back Policy |
| :--- | :--- | :--- |
| **1. Memory Bus Traffic** | **Very High**: Every single store instruction generates an active write transaction on the external memory bus. | **Very Low**: Memory bus is accessed only when a modified (dirty) block is evicted. |
| **2. Write Latency / Speed** | **Slower**: Constrained by main memory access speed (unless mitigated by an expensive write buffer). | **Fastest**: Writes proceed at full internal cache SRAM speeds. |
| **3. Memory Consistency** | **Always Consistent**: Main memory is always completely up-to-date with cache data. | **Temporarily Inconsistent**: Main memory contains stale data until the dirty cache block is flushed. |
| **4. Dirty Bit Requirement** | **Not Required**: Cache lines do not need to track modification state. | **Mandatory**: Every cache line requires a Dirty/Modified status bit. |
| **5. Multiprocessor Coherence** | Simpler to maintain cache coherence across multiple cores (snooping bus writes is straightforward). | Requires sophisticated coherence protocols (e.g., MESI) to handle dirty private blocks. |
| **6. Crash / Fault Recovery** | Simple: Data in main memory is always current if power fails or reset occurs. | Complex: Unflushed dirty data in volatile cache is permanently lost during abrupt power loss. |

---

### Q21: Explain cache replacement policies: FIFO, LRU, and Random replacement. (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module IV: Cache Memory & Virtual Memory Page Replacement*).
> - **Textbook Reference**: William Stallings (*COA*, 10th Ed., Ch. 4, Sec 4.3, p. 140–142); Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 5, Sec 5.5, p. 325–328).
> - **🎨 Diagram to Draw**: Draw a 4-line cache set showing how an **LRU Stack / Age Counter** updates when a cache block is referenced.

#### **1. Purpose of Cache Replacement Policies**

In a **direct-mapped cache**, no replacement policy is needed because each memory block maps to exactly one line. However, in **fully associative** or **$k$-way set-associative caches**, when a cache miss occurs and all slots in the targeted set are already occupied, a **Replacement Policy** must algorithmically decide which existing block to evict to make room for the newly requested memory block.

---

#### **2. Detailed Breakdown of Replacement Policies**

#### **A. FIFO (First-In, First-Out)**
- **Principle**: Evicts the cache block that has **resided in the set for the longest continuous amount of time**, regardless of how frequently or recently it was accessed.
- **Hardware Implementation**: Maintained using a simple circular counter or modulo pointer per set. When a new block enters, it replaces the block pointed to by the counter, and the counter increments ($\text{Pointer} = (\text{Pointer} + 1) \pmod k$).
- **Advantages**: Minimal hardware complexity; very simple to implement with standard logic gates.
- **Disadvantages**: Suboptimal performance. A heavily referenced block (such as an active loop variable) will still be evicted if it arrived earlier than less important blocks. Can suffer from anomalies (such as Belady's anomaly in paging).

#### **B. LRU (Least Recently Used)**
- **Principle**: Evicts the cache block that has **remained unreferenced for the longest period of time**. Directly capitalizes on the principle of **temporal locality** (if a block hasn't been accessed recently, it is unlikely to be needed soon).
- **Hardware Implementation**:
  1. *Timestamp / Age Counters*: Each line maintains an integer counter. On every access to a line, its counter is reset to $0$, and all other counters in the set increment. The line with the highest counter value is the victim.
  2. *Hardware LRU Stack*: The referenced block is moved to the top of the stack; the bottom of the stack is always the victim.
- **Advantages**: Delivers the **highest hit ratio** among practical replacement algorithms; standard choice in modern processor caches.
- **Disadvantages**: Significant hardware overhead as associativity grows (tracking LRU for 8-way or 16-way caches requires multiple bits and complex comparison logic).

#### **C. Random Replacement**
- **Principle**: Selects a victim block for eviction completely **at random** with uniform probability from among all lines in the set, without tracking access history or arrival time.
- **Hardware Implementation**: A simple pseudorandom number generator (such as a Linear Feedback Shift Register - LFSR) generates a random index between $0$ and $k-1$ when an eviction is required.
- **Advantages**: **Zero hardware state tracking overhead** (no age counters, no timestamps, no stack logic).
- **Disadvantages & Practicality**: Does not exploit locality; performance is unpredictable on small caches. However, on very large multi-megabyte caches with high associativity (16-way or 32-way), Random replacement performs remarkably close to LRU while completely avoiding complex tracking hardware.

---

### Q22: What is cache coherence? Why is it important in multicore processors? (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module IV: Multiprocessors — Characteristics, Cache Coherence Protocols*).
> - **Textbook Reference**: William Stallings (*COA*, 10th Ed., Ch. 18, Sec 18.3, p. 685–695); M. Morris Mano (*CSA*, 3rd Ed., Ch. 13, Sec 13-4, p. 504–511).
> - **🎨 Diagram to Draw**: Draw the **Cache Coherence Conflict Scenario**: Core 1 and Core 2 both caching variable $X=5$; Core 1 writes $X=10$; Core 2 reading stale $X=5$.

#### **1. Definition of Cache Coherence**

**Cache Coherence** is the uniformity and consistency of shared data stored in multiple local private caches across a symmetric multiprocessor or multi-core system.  
A memory system is coherent if:
1. **Write Propagation**: Any write to a memory address by one processor core is eventually made visible to all other processor cores.
2. **Write Serialization**: All writes to the same memory location are observed in the exact same sequential order by all processor cores.

---

#### **2. Why Cache Coherence is Critical in Multicore Processors**

In modern multi-core chips, each CPU core possesses its own dedicated, ultra-fast **private L1 and L2 caches**, while sharing a common on-die **L3 cache and main system memory (RAM)**.

```
       +--------------------+                    +--------------------+
       |       CORE 1       |                    |       CORE 2       |
       |  Writes: X = 10    |                    |  Reads: X = ?      |
       +---------+----------+                    +---------+----------+
                 |                                         |
                 v                                         v
       +--------------------+                    +--------------------+
       |  Private L1 Cache  |                    |  Private L1 Cache  |
       |     [ X = 10 ]     |                    |     [ X = 5 ]      |
       |  (Modified/Dirty)  |                    |      (STALE!)      |
       +---------+----------+                    +---------+----------+
                 |                                         |
                 +-------------------+---------------------+
                                     |
                          INTERCONNECT / SYSTEM BUS
                                     |
                                     v
                           +-------------------+
                           |    Main Memory    |
                           |     [ X = 5 ]     |
                           +-------------------+
```

#### **The Inconsistency Dilemma**:
1. Suppose variable $X$ with value $5$ is copied from main memory into the private L1 caches of both **Core 1** and **Core 2**.
2. **Core 1** executes a write instruction, updating $X \leftarrow 10$ in its private write-back L1 cache.
3. If this write is not broadcast or synchronized:
   - The copy of $X$ in Core 2's private cache still holds the **stale value $5$**.
   - Main memory also still holds the **stale value $5$**.
4. If **Core 2** subsequently executes a read of variable $X$, it will read erroneous, stale data, corrupting multithreaded software execution, race locks, and operating system scheduling!

---

#### **3. Common Hardware Solutions**

1. **Snooping (Bus-Based) Protocols**:
   - Every private cache controller constantly "snoops" (monitors) the shared memory bus for read/write broadcasts initiated by other cores.
   - **MESI Protocol (Illinois Protocol)**: Each cache line is maintained in one of four states:
     - **M (Modified)**: Line is present only in this cache and is dirty (modified).
     - **E (Exclusive)**: Line is present only in this cache, but is clean (matches memory).
     - **S (Shared)**: Line is clean and present in multiple caches.
     - **I (Invalid)**: Line contains stale data and cannot be read.
   - When Core 1 writes to a shared line, it broadcasts an **Invalidate Transaction**, forcing Core 2 to transition its local copy to the **Invalid (I)** state.

2. **Directory-Based Protocols**:
   - A centralized or distributed directory tracks which processor caches currently hold copies of every memory block. Point-to-point messages invalidate specific caches without requiring shared bus broadcasts, enabling scalability to dozens of cores.

---

### Q23: Explain the difference between multiprocessor and multicore systems. (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `1.1 HARDWARE & SOFTWARE.pdf`, **Slides 5–8** (*"Motherboard, CPU Sockets, Single vs Multi-chip hardware"*).
> - **Syllabus Reference**: `CSA Theory Syllabus.md` (*Module IV: Multiprocessors*).
> - **Textbook Reference**: William Stallings (*COA*, 10th Ed., Ch. 18, p. 674–678); Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 12).
> - **🎨 Diagram to Draw**: Draw side-by-side architectural schematics:  
>   (a) Multiprocessor: Multiple physical CPU socket chips interconnected across a motherboard PCB bus.  
>   (b) Multicore: Multiple execution cores on a single silicon die sharing an on-chip L3 cache.

#### **1. Architectural Concepts**

- **Multiprocessor System**: A computer system that contains **two or more physically separate discrete CPU chips (sockets)** mounted on a shared motherboard, interconnected via a high-speed system bus or crossbar fabric.
- **Multicore System**: A processor architecture where **two or more complete, independent execution cores (ALU, CU, registers, L1/L2 caches)** are integrated fabricated directly onto a **single, unified silicon semiconductor die**.

---

#### **2. Comprehensive Comparison Table**

| Comparison Parameter | Multiprocessor System | Multicore System |
| :--- | :--- | :--- |
| **1. Physical Packaging** | Consists of **multiple separate physical CPU packages/sockets** seated across a motherboard (`1.1 HARDWARE & SOFTWARE.pdf`, Slide 5). | Consists of **multiple CPU cores fabricated on a single silicon die (monolithic or chiplet)**. |
| **2. Interconnect Medium** | Interconnected via **external motherboard PCB copper traces** or system buses (e.g., Intel UPI, AMD Infinity Fabric, QPI). | Interconnected via **ultra-fast on-die interconnects** (e.g., on-chip crossbar, ring bus, or 2D mesh). |
| **3. Communication Latency** | **Higher Latency**: Communication between CPUs requires driving external motherboard signals (50–100 ns). | **Extremely Low Latency**: Inter-core communication occurs on-chip at gigahertz speeds (< 1–5 ns). |
| **4. Interconnect Bandwidth** | Lower bandwidth (limited by external pin counts and PCB trace physical capacitance). | **Massive Bandwidth**: Terabytes/sec transfer rates across on-die buses. |
| **5. Cache Sharing** | Each discrete CPU has its own private caches. Caches are rarely shared on-chip; sharing occurs via main memory. | Cores share a massive on-chip **Level 3 (L3) Cache / Last-Level Cache (LLC)**. |
| **6. Power Consumption & Heat** | Significantly higher power consumption; requires separate heat sinks, VRMs, and cooling per socket. | Highly power efficient; cores can dynamically scale clock frequencies and enter power-gating sleep states together. |
| **7. Manufacturing Cost & Footprint**| High cost; requires complex multi-socket server motherboards and large chassis. | Low cost; standard consumer packaging fits into laptops, desktops, and mobile smartphones. |
| **8. Real-World Examples** | Dual/Quad-socket enterprise servers (e.g., Dual **Intel Xeon Platinum**, **AMD EPYC** server platforms). | Modern consumer processors (e.g., **Intel Core i7-14700K**, **AMD Ryzen 7 7800X3D**, Apple **M3 Pro**). |

---

### Q24: Describe bus architecture. Compare single-bus, multiple-bus, synchronous, and asynchronous buses. (4 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `6. Basic Processing Unit.pdf`, **Slide 5** (*"Single-Bus Organization of the Datapath: Control signals, Address lines, Data lines, MAR, MDR, ALU"*).
> - **File**: `6. Basic Processing Unit.pdf`, **Slides 10–12** (*"Control Sequences on the internal bus with WMFC"*).
> - **Textbook Reference**: William Stallings (*COA*, 10th Ed., Ch. 3, Sec 3.4, p. 94–104); Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 7, Sec 7.1–7.2, p. 412–422).
> - **🎨 Diagram to Draw**: Draw the **Single-Bus vs Multiple-Bus datapath layout** and the **Asynchronous Handshaking timing waveform** (Master-Ready asserted $\to$ Slave-Ready asserted $\to$ Data captured $\to$ Master-Ready deasserted $\to$ Slave-Ready deasserted).

#### **1. Bus Architecture Overview**

A **Bus** is a shared communication pathway consisting of a collection of conducting transmission lines that transfer binary signals between functional units:
1. **Data Lines (Data Bus)**: Bidirectional lines that transport actual program instructions and operand words between CPU, memory, and I/O. Bus width (e.g., 32-bit or 64-bit) determines word transfer capacity.
2. **Address Lines (Address Bus)**: Unidirectional lines driven by the bus master (CPU or DMA) to select a specific physical memory location or I/O device register. Width ($K$ lines) dictates maximum addressable space ($2^K$).
3. **Control Lines (Control Bus)**: Transmit timing signals, read/write commands (`MemRead`, `MemWrite`), transfer acknowledgments (`MFC` - Memory Function Complete), and interrupt/bus arbitration requests.

---

#### **2. Comparison: Single-Bus vs. Multiple-Bus Architecture**

```
(a) Single-Bus Architecture:
+--------+       +--------+       +-------------+
|  CPU   | <===> | Memory | <===> | I/O Devices |
+--------+       +--------+       +-------------+
         ============== SINGLE SYSTEM BUS ============== (Severe Bottleneck)

(b) Multiple-Bus Architecture:
+--------+ <== Processor Bus ==> +-------------+
|  CPU   |                       | Cache Memory|
+--------+                       +------+------+
                                        | System Bus
                                        v
                                 +------+------+
                                 | Main Memory |
                                 +------+------+
                                        | PCI / PCIe Expansion Bus
                                        v
                                 +------+------+
                                 | I/O Devices |
                                 +-------------+
```

| Parameter | Single-Bus Architecture | Multiple-Bus Architecture |
| :--- | :--- | :--- |
| **Structure** | All system components (CPU, Memory, I/O) share a **single common physical bus** (`6. Basic Processing Unit.pdf`, Slide 5). | Organizes buses into a **hierarchy of dedicated buses** (Internal CPU bus, System Memory bus, High-speed PCI Express bus). |
| **Throughput & Contention** | **Severe Bottleneck**: Only one pair of units can communicate at any given moment; all other units must wait. | **High Throughput**: Allows concurrent data transfers (e.g., CPU accesses L2 cache while DMA transfers disk data to RAM). |
| **Hardware Cost & Complexity**| Simple interface logic; minimal wiring; low manufacturing cost. | Complex bridge controllers (Northbridge/Southbridge/PCH); higher manufacturing cost. |
| **System Speed** | Operating speed is limited by the slowest peripheral connected to the common bus. | High-speed devices operate on ultra-fast buses without being slowed down by slow peripherals. |

---

#### **3. Comparison: Synchronous vs. Asynchronous Buses**

| Parameter | Synchronous Bus | Asynchronous Bus |
| :--- | :--- | :--- |
| **Timing Mechanism** | Bus operations are synchronized by a **central system clock signal**. Events occur at fixed clock cycle boundaries. | **No central clock**. Transfers are coordinated via a **handshaking control protocol** between master and slave. |
| **Handshaking Signals** | None required; devices read/write data at predetermined clock edges. | Requires bidirectional handshake lines: `Master-Ready` (Request) and `Slave-Ready` (Acknowledge). |
| **Device Speed Flexibility** | Poor: The bus clock cycle must be chosen long enough to accommodate the **slowest possible device** on the bus. | **Excellent**: Naturally adapts to devices of widely varying speeds (fast devices respond immediately; slow devices take longer). |
| **Physical Distance** | Sensitive to **clock skew** over long physical bus lengths; restricted to short on-board connections. | Immune to clock skew; highly robust over longer physical cables and backplanes. |
| **Hardware Complexity** | Simpler bus interface circuitry. | More complex interface logic required to manage handshaking state machines. |

---

### Q25: Explain the concept of endianness. Differentiate between big-endian and little-endian representation. (2 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `1. Number Systems.pdf`, **Slide 12–16** (*"Data Quantities: Byte, Word, MSB, LSB, byte addressing"*).
> - **Textbook Reference**: William Stallings (*COA*, 10th Ed., Ch. 12, Sec 12.3, p. 444–448); Carl Hamacher (*Computer Organization*, 5th Ed., Ch. 2, Sec 2.2, p. 36–38).
> - **🎨 Diagram to Draw**: Draw a memory cell byte-layout table storing the 32-bit hexadecimal word `0x12345678` starting at address `0x1000`.

#### **1. Concept of Endianness**

**Endianness** refers to the ordering convention used by a computer system to arrange and store the individual bytes of a multi-byte word (such as a 16-bit, 32-bit, or 64-bit integer) in consecutive byte-addressable memory locations.
- Every multi-byte binary word consists of:
  - **Most Significant Byte (MSB)**: The byte carrying the highest mathematical weight (leftmost byte).
  - **Least Significant Byte (LSB)**: The byte carrying the lowest mathematical weight (rightmost byte).

---

#### **2. Big-Endian vs. Little-Endian Memory Representation**

Consider storing the **32-bit (4-byte) hexadecimal integer**:
$$\mathbf{0x12345678}$$
- $\text{Byte 0 (MSB)} = \mathbf{12_{16}}$
- $\text{Byte 1} = \mathbf{34_{16}}$
- $\text{Byte 2} = \mathbf{56_{16}}$
- $\text{Byte 3 (LSB)} = \mathbf{78_{16}}$

Starting at byte address **`0x1000`**:

```
Byte Address:         0x1000        0x1001        0x1002        0x1003
                  +-------------+-------------+-------------+-------------+
BIG-ENDIAN:       |     12      |     34      |     56      |     78      |
                  |    (MSB)    |             |             |    (LSB)    |
                  +-------------+-------------+-------------+-------------+
                  (MSB is stored at the LOWEST memory address)

                  +-------------+-------------+-------------+-------------+
LITTLE-ENDIAN:    |     78      |     56      |     34      |     12      |
                  |    (LSB)    |             |             |    (MSB)    |
                  +-------------+-------------+-------------+-------------+
                  (LSB is stored at the LOWEST memory address)
```

---

#### **3. Comparison Summary**

| Feature | Big-Endian Representation | Little-Endian Representation |
| :--- | :--- | :--- |
| **Storage Rule** | The **Most Significant Byte (MSB)** is stored at the **lowest (smallest) memory address**. | The **Least Significant Byte (LSB)** is stored at the **lowest (smallest) memory address**. |
| **Human Readability** | Intuitive and natural; reads from left-to-right exactly like standard human writing. | Appears reversed when inspecting raw hexadecimal memory dumps. |
| **Mathematical Ease** | Testing the sign bit of a number is instantaneous (always located at byte address offset 0). | Facilitates multi-precision arithmetic and type-casting (e.g., reading a 32-bit int as a 16-bit short at the same pointer address). |
| **Dominant Uses** | **Internet Protocol Suite (TCP/IP)** standard (*"Network Byte Order"*); IBM z/Architecture mainframes; SPARC. | **x86 / x64 Architecture** (Intel, AMD); **RISC-V**; default in **ARM** processors. |

---

### Q26: What are interrupts? Classify interrupts into hardware, software, internal, and external interrupts. (3 marks)

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `5. Basic Input Output Operations.pdf`, **Slide 3** (*"Interrupt-driven I/O: Program issues I/O command and continues until interrupted by hardware"*).
> - **File**: `5. Basic Input Output Operations.pdf`, **Slide 12** (*"Interrupt-Driven I/O: Processor checks for interrupts at end of instruction cycle; saves context; restores context"*).
> - **Internal Exam Reference**: `CSA_2026_Internal-1.md`, **Question 4** (*"What are interrupts? Classify interrupts into hardware, software, internal, and external interrupts"*).
> - **Textbook Reference**: M. Morris Mano (*Computer System Architecture*, 3rd Ed., Ch. 5, Sec 5-7, p. 153–157 & Ch. 8, Sec 8-7, p. 281–283); William Stallings (*COA*, 10th Ed., Ch. 3, Sec 3.2, p. 77–86).
> - **🎨 Diagram to Draw**: Draw an **Interrupt Classification Hierarchy Tree** branching into Hardware vs Software and External vs Internal.

#### **1. Definition of Interrupts**

An **Interrupt** is an asynchronous or synchronous signal sent to the processor by hardware or software indicating an event that requires immediate attention and processing.  
- **Operational Flow** (`5. Basic Input Output Operations.pdf`, Slide 12):
  1. When an interrupt is recognized at the end of the current instruction cycle, the CPU suspends execution of the current program.
  2. The CPU saves its critical execution context (Program Counter $\text{PC}$ and Processor Status Word $\text{PSW}$) onto the system stack.
  3. The CPU vectors to and executes a dedicated subroutine called the **Interrupt Service Routine (ISR)**.
  4. Upon completing the ISR (executing an `IRET` instruction), the CPU pops the saved context and seamlessly resumes the interrupted task.

---

#### **2. Classification of Interrupts**

```
                                  INTERRUPTS
                                       |
                   +-------------------+-------------------+
                   |                                       |
            HARDWARE INTERRUPTS                     SOFTWARE INTERRUPTS
          (Physical Signal Pins)                  (Instruction Generated)
                   |                                       |
         +---------+---------+                             |
         |                   |                             v
      EXTERNAL            INTERNAL                 System Calls / Traps
     INTERRUPTS          INTERRUPTS                (e.g., INT 21H, SYSCALL)
  (I/O, Timer, Power)  (Exceptions, Faults)
```

#### **A. Hardware Interrupts vs. Software Interrupts**
1. **Hardware Interrupts**:
   - Generated externally by physical peripheral hardware chips through dedicated electrical interrupt request pins on the CPU package (e.g., `INTR`, `NMI`).
   - *Characteristics*: Asynchronous with instruction execution; used for peripheral I/O signaling, keyboard key presses, timer tick interrupts, and network packet arrivals.
2. **Software Interrupts**:
   - Initiated intentionally from within a running program by executing a special machine language instruction (e.g., `INT 21H`, `SYSCALL`, `TRAP`).
   - *Characteristics*: Synchronous with instruction execution; used by user application programs to request privileged operating system kernel services (System Calls) and to enter supervisor mode.

#### **B. External Interrupts vs. Internal Interrupts (Exceptions)**
1. **External Interrupts**:
   - Originate from **devices outside the CPU core**.
   - *Sources*:
     - **I/O Device Interfaces**: Input device ready, printer out of paper, disk transfer complete (`5. Basic Input Output Operations.pdf`, Slide 12).
     - **Hardware Timing Devices**: Periodic system clock timer ticks used by the OS scheduler for multi-tasking time-slicing.
     - **Catastrophic Hardware Failures**: Power supply voltage drop warnings, memory parity errors, bus timeout errors.
   - *Nature*: Completely asynchronous with the program currently running on the CPU.
2. **Internal Interrupts (Traps / Exceptions)**:
   - Generated **internally by the CPU execution logic** as a direct result of executing an exceptional, illegal, or erroneous instruction.
   - *Sources*:
     - **Arithmetic Errors**: Division by zero, signed arithmetic overflow (`2. Arithmetic Calculations.pdf`, Slide 5).
     - **Illegal Operations**: Undefined/illegal opcode, attempts to execute privileged supervisor instructions in user mode.
     - **Memory Management Violations**: Protection violation, segmentation fault, or Page Fault requiring page fetch from swap disk (`CSA Theory Syllabus.md`, Module IV).
   - *Nature*: Synchronous with the instruction causing the fault; reproducible at the exact same program address.

---

## Final Review & Submission Checklist

- [x] All 26 questions answered completely and rigorously without omissions.
- [x] Every question mapped to specific files and slides in `Study Material By SKS`.
- [x] All mathematical calculations verified (Q10 CPU time: $0.75\text{ s}$).
- [x] All diagrams, circuit schematics, and comparison tables formatted with academic precision.
