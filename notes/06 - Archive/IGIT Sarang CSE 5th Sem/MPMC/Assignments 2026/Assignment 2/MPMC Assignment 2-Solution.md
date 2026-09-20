
# MPMC Assignment 2 — Comprehensive Solutions & Professor Study Material References

> **Course**: Microprocessor and Microcontroller (PCCS4308)  
> **Programme**: B.Tech Computer Science & Engineering — 5th Semester  
> **Department**: Computer Science Engineering & Applications, IGIT Sarang  
> **Examination**: 1st Terminal Examination 2026 (Module 1 — 8085 Microprocessor)  
> **Source Question Paper**: [[MPMC assignment2|MPMC Assignment 2 Questions]] | [[MPMC_2026_Internal-1|Internal 1 Question Paper Image]]  
> **Primary Professor Materials**:  
> 1. `2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf` (Slides by Mr. Suvendu Kumar Jena - SKJ)  
> 2. `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf` (Lecture Notes by SKJ)  
> 3. `MPMC_Lab_Manual.pdf` (Lab Manual for 8085)  
> 4. `3.1. 8251 USART and Peripheral Interfacing.pdf`  
> 5. Text Book: Ramesh S. Gaonkar (*Microprocessor Architecture, Programming & Applications with 8085*)

---

## Quick Reference: Where to Draw Every Diagram from the Professor's Slides

| Question | Topic | Primary PDF File | Exact Slide / Page | Specific Diagram to Draw |
| :---: | :--- | :--- | :---: | :--- |
| **1.a** | ALE Signal & Demultiplexing | `2.1...Slides.pdf` | **Slide 45** | **"Demultiplexing AD7-AD0"** (8085, ALE, Latch 74LS373, $A_7-A_0$, $D_7-D_0$) |
| **1.b** | Program Counter (PC) | `2.1...Slides.pdf` | **Slide 36 & 40** | Register Array & PC function |
| **1.c** | I/O Mapped I/O | `3.1...Peripheral Interfacing.pdf`<br>`2.1...Slides.pdf` | **Page 12**<br>**Slide 30, 155** | I/O Port Addressing & $IO/\overline{M}=1$ description |
| **1.d** | Stack Pointer (SP) | `2.1...Slides.pdf`<br>`2...Lecture Notes.pdf` | **Slide 120**<br>**Pages 39–40** | **"The Stack"** (Downwards memory growth, PUSH/POP pointers) |
| **1.e** | Hardware Interrupts | `2.1...Slides.pdf` | **Slide 172 & 210** | **"The 8085 Interrupts"** Table (TRAP, RST 7.5, 6.5, 5.5, INTR) |
| **2.a** | 8085 Architecture Block Diagram | `2.1...Slides.pdf` | **Slide 33** (Block Diagram)<br>**Slide 31** (Pinout)<br>**Slide 37** (Flag Register) | **"Architecture of Intel 8085 Microprocessor"** (Complete hardware schematic block diagram) |
| **2.b** | Machine Cycles & Timing Diagrams | `2.1...Slides.pdf`<br>`2...Lecture Notes.pdf` | **Slides 98–101, 104**<br>**Pages 29, 33–38** | **Opcode Fetch (4T)** & **Memory Read (3T)** timing waveforms |
| **3.a** | 8-Bit Addition Assembly Program | `MPMC_Lab_Manual.pdf`<br>`2...Lecture Notes.pdf` | **Exp 1 & 2**<br>**Pages 20–28** | Flowchart and Assembly code table with Carry |
| **3.b** | Timing Diagram of `MVI A, 25H` | `2.1...Slides.pdf` | **Slide 104** (Main Diagram)<br>**Slide 102–103** | **"Timing Diagram for MVI A, 45h"** (7 T-states: $T_1-T_7$, draw with byte `25H`) |
| **4.a** | Interrupt Structure & Priority | `2.1...Slides.pdf` | **Slide 188** (Priority Circuit)<br>**Slide 199** (SIM Format)<br>**Slide 209–210** (Priority Order) | **"Multiple Interrupts and Priority"** (74366 Priority Encoder + Buffer + 8085) & **SIM mask format** |
| **4.b** | 2764 EPROM Interfacing (8KB) | `2.1...Slides.pdf`<br>`MPMC_Lab_Manual.pdf`<br>Gaonkar Textbook | **Slide 45** (Latch)<br>**Slide 154** (Chip Select Decoder)<br>**Slide 155** (Memory Map `0000H`)<br>**Lab Manual p. 6** | **"Chip Selection Example"** (8085 + 74LS373 latch + 74LS138 decoder + 2764 EPROM chip) |

---

## Navigation
- [Question 1: Short Answer Questions](#question-1-short-answer-questions-1-mark-each)
  - [1.a: Function of ALE Signal](#1a-what-is-the-function-of-the-ale-address-latch-enable-signal-in-8085)
  - [1.b: Purpose of Program Counter (PC)](#1b-what-is-the-purpose-of-the-program-counter-pc-in-8085)
  - [1.c: Define I/O Mapped I/O Addressing](#1c-define-io-mapped-io-addressing)
  - [1.d: Function of Stack Pointer (SP)](#1d-what-is-the-function-of-the-stack-pointer-sp-in-8085)
  - [1.e: Name Any Two Hardware Interrupts](#1e-name-any-two-hardware-interrupts-of-the-8085-microprocessor)
- [Question 2: Architecture & Execution Cycle](#question-2-architecture--execution-cycle-5-marks-each)
  - [2.a: 8085 Microprocessor Architecture & Functional Units](#2a-explain-the-architecture-of-8085-microprocessor-with-a-neat-block-diagram-discuss-its-major-registers-and-functional-units)
  - [2.b: Instruction Execution Cycle & Machine Cycles](#2b-explain-the-instruction-execution-cycle-of-8085-and-describe-the-different-machine-cycles-with-suitable-timing-diagrams)
- [Question 3: Assembly Programming & Timing Diagram](#question-3-assembly-programming--timing-diagram-5-marks-each)
  - [3.a: 8085 Assembly Program to Add Two 8-bit Numbers](#3a-write-an-8085-assembly-language-program-to-add-two-8-bit-numbers-and-explain-the-instructions-used)
  - [3.b: Timing Diagram of MVI A, 25H Instruction](#3b-draw-and-explain-the-timing-diagram-of-mvi-a-25h-instruction-of-8085)
- [Question 4: Interrupt Structure & Memory Interfacing](#question-4-interrupt-structure--memory-interfacing-5-marks-each)
  - [4.a: 8085 Interrupt Structure & Priority](#4a-explain-the-8085-interrupt-structure-describe-the-functions-and-priority-of-trap-rst-75-rst-65-rst-55-and-intr)
  - [4.b: Interfacing 2764 EPROM with 8085](#4b-explain-the-interfacing-of-2764-eprom-with-8085-with-a-neat-diagram-describe-the-address-decoding-address-bus-data-bus-and-control-signals-involved-in-the-interfacing)

---

# Question 1: Short Answer Questions (1 Mark Each)

---

### 1.a: What is the function of the ALE (Address Latch Enable) signal in 8085?

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf`
> - **Slide Number**: **Slide 44 & Slide 45**
> - **Diagram to Draw**: **"Demultiplexing AD7-AD0"** on **Slide 45** (Shows 8085 chip on left, ALE connecting to Latch enable, separating $AD_7-AD_0$ into Address $A_7-A_0$ and Data $D_7-D_0$).
> - **Lecture Notes Reference**: `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf`, **Pages 14–15** (*"Demultiplexing the Bus AD7-AD0"*).
> - **📍 Diagram Placement in Your Written Answer**: Draw this small block diagram (8085 $\to$ Latch 74LS373 $\to$ Address/Data) **at the very bottom of your answer**, immediately following the 3 core function bullet points.

#### **Answer:**
The **ALE (Address Latch Enable)** signal (Pin 30) is an active-high, positive-going pulse generated by the 8085 microprocessor during the first clock state ($T_1$) of every machine cycle.

#### **Core Functions:**
1. **Bus Demultiplexing**: In the 8085, the lower 8 address lines ($A_0 - A_7$) are time-multiplexed with the 8 data lines ($D_0 - D_7$) on pins $AD_0 - AD_7$ to reduce pin count on the 40-pin IC.
2. **Latching Address**: When ALE goes **HIGH**, it signals that the bits on $AD_0 - AD_7$ represent the lower-order memory or I/O address.
3. **External Latch Trigger**: On the high-to-low falling edge of ALE, an external transparent octal latch (IC 74LS373 or Intel 8212) captures and holds the address $A_0 - A_7$ stable for the remainder of the machine cycle ($T_2, T_3, T_4$). During $T_2$ and $T_3$, the $AD_0 - AD_7$ lines are free to function as the bidirectional data bus ($D_0 - D_7$).

---

### 1.b: What is the purpose of the Program Counter (PC) in 8085?

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf`
> - **Slide Number**: **Slide 36 & Slide 40** (*"Program Counter (PC)"*)
> - **Lecture Notes Reference**: `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf`, **Page 13 & Page 46**

#### **Answer:**
The **Program Counter (PC)** is a **16-bit special-purpose register** in the 8085 architecture used for sequential instruction sequencing and control transfer.

#### **Key Purposes:**
1. **Instruction Pointer**: It holds the 16-bit memory address of the *next instruction byte* to be fetched from memory for execution.
2. **Auto-Increment**: As each instruction byte is fetched during Opcode Fetch or Memory Read machine cycles, the internal 16-bit Incrementer automatically increments the PC ($\text{PC} \leftarrow \text{PC} + 1$).
3. **Branching & Calls**: During branch instructions (`JMP`, `CALL`, `RET`, `RST`), the PC is updated with the target destination address.
4. **Reset State**: When the microprocessor is reset via $\overline{\text{RESET IN}}$, the Program Counter is automatically cleared to `0000H`, forcing the 8085 to fetch its first instruction from memory address `0000H`.

---

### 1.c: Define I/O mapped I/O addressing.

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `3.1. 8251 USART and Peripheral Interfacing.pdf`, **Page 12**
> - **Slides Reference**: `2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf`, **Slide 30 & Slide 155**
> - **Lab Manual Reference**: `MPMC_Lab_Manual.pdf`, **Section 2.2** (*"Input/Output Mapping"*)

#### **Answer:**
**I/O Mapped I/O** (also known as **Isolated I/O** or **Standard I/O**) is an interfacing method where I/O devices (input/output ports) are addressed within an independent, isolated 8-bit address space, distinct from system memory.

#### **Key Characteristics:**
- **Address Space**: Uses an **8-bit device address** (port number), providing up to $2^8 = 256$ input ports and $256$ output ports (range `00H` to `FFH`).
- **Bus Duplication**: During I/O machine cycles, the 8-bit port address is duplicated onto both higher-order address lines ($A_{15}-A_8$) and lower-order address lines ($A_7-A_0$).
- **Control Signals**: The status pin $IO/\overline{M}$ is set to **Logic 1 (HIGH)**. Operations use the control signals $\overline{\text{IOR}}$ (I/O Read) and $\overline{\text{IOW}}$ (I/O Write).
- **Dedicated Instructions**: Data transfer is strictly between the Accumulator (Register A) and I/O devices via only two assembly instructions: `IN port-address` and `OUT port-address`.
- **Memory Conservation**: Does not consume any space from the 64 KB memory map.

---

### 1.d: What is the function of the Stack Pointer (SP) in 8085?

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf`
> - **Page Number**: **Pages 39–40** (**Chapter 9: "Stack and Subroutines"**)
> - **Slides Reference**: `2.1...Slides.pdf`, **Slides 114–122**; **Diagram on Slide 120** shows data being PUSHed and POPped with SP pointer positions.

#### **Answer:**
The **Stack Pointer (SP)** is a **16-bit special-purpose register** that stores the memory address of the current **Top of the Stack (TOS)** located in read/write (RAM) memory.

#### **Key Functions & Mechanics:**
- **LIFO Data Structure**: Operates on a **Last-In, First-Out** basis and grows **downwards** (from higher memory addresses to lower memory addresses).
- **Push / Subroutine Call (`PUSH`, `CALL`)**: Decrements SP before writing (`SP` $\leftarrow$ `SP - 1`, higher byte saved; `SP` $\leftarrow$ `SP - 1`, lower byte saved).
- **Pop / Return (`POP`, `RET`)**: Reads data from the current SP location and increments SP by 2 (`SP` $\leftarrow$ `SP + 2`).
- **Initialization**: Initialized by software at the highest available RAM address using `LXI SP, address` (e.g., `LXI SP, 20FFH` or `LXI SP, FFFFH`).

---

### 1.e: Name any two hardware interrupts of the 8085 microprocessor.

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf`
> - **Slide Number**: **Slide 171 & Slide 172** (**"The 8085 Interrupts" Table**) and **Slide 325**
> - **Master Comparison Table**: **Slide 210**

#### **Answer:**
The 8085 microprocessor has 5 dedicated hardware interrupt pins. Any two of the following are valid:

1. **TRAP** (Highest priority, non-maskable, both level- and edge-sensitive, vectored at address `0024H`).
2. **RST 7.5** (Second highest priority, maskable, rising edge-sensitive, vectored at address `003CH`).

*(Other hardware interrupts include **RST 6.5** at `0034H`, **RST 5.5** at `002CH`, and **INTR** which is non-vectored).*

---
---

# Question 2: Architecture & Execution Cycle (5 Marks Each)

---

### 2.a: Explain the architecture of 8085 microprocessor with a neat block diagram. Discuss its major registers and functional units.

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf`
> - **Main Diagram to Draw**: **Slide 33 — "Architecture of Intel 8085 Microprocessor"**
>   - *(This is Professor SKJ's full schematic block diagram showing ALU, Accumulator, Flags, General Purpose Registers B, C, D, E, H, L, Temporary Registers W & Z, Stack Pointer, Program Counter, Instruction Register, Decoder, Timing & Control unit, Interrupt Control, Serial I/O, and internal 8-bit bus).*
> - **Pin Diagram**: **Slide 31**
> - **Flag Register Format**: **Slide 37** (Diagram of bits $D_7 - D_0$: $S, Z, X, AC, X, P, X, CY$)
> - **Register Array Diagram**: **Slide 36**
> - **Lecture Notes Reference**: `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf`, **Pages 8–16**
> - **📍 Diagram Placement in Your Written Answer**:
>   1. **Main Block Diagram (Slide 33)**: Draw in the **upper half of your answer**, right after the 3-line Architectural Overview (Section 1), and BEFORE listing Section 2 (Major Registers). This establishes the visual blueprint of the CPU first.
>   2. **Flag Register Format (Slide 37)**: Draw the small 8-bit status format box ($S, Z, X, AC, X, P, X, CY$) inside **Section 2, directly under bullet 4 (Flag Register)**.

#### **1. Architectural Overview**
The Intel 8085 is an 8-bit NMOS microprocessor packaged in a 40-pin DIP. It operates with an internal clock frequency of 3 MHz (from a 6 MHz external crystal across $X_1$ and $X_2$) and requires a single $+5\text{V}$ power supply. It provides a 16-bit address bus capable of addressing $2^{16} = 64\text{ KB}$ of memory and an 8-bit multiplexed address/data bus ($AD_0 - AD_7$).

![[Pasted image 20260918192753.png]]

#### **2. Major Registers of 8085** *(Slide 36–41)*
1. **Accumulator (Register A)**: 8-bit working register for all ALU operations. Holds one operand and receives the result.
2. **General-Purpose Registers (B, C, D, E, H, L)**: Six 8-bit registers used individually or as 16-bit pairs (**BC, DE, HL**). The **HL pair** functions as the **Memory Pointer ($M$)**.
3. **Temporary Registers (W and Z)**: Internal 8-bit registers used strictly by the CPU control unit during multi-byte execution (`CALL`, `XCHG`); not programmer-accessible.
4. **Flag Register (Status Register)** *(Slide 37)*: 8-bit register containing 5 status flip-flops:
   - **Sign Flag (S)**: 1 if bit $D_7 = 1$ (negative).
   - **Zero Flag (Z)**: 1 if result is zero (`00H`).
   - **Auxiliary Carry Flag (AC)**: 1 if carry generated from $D_3$ to $D_4$ in BCD arithmetic.
   - **Parity Flag (P)**: 1 if result contains even number of 1s (even parity).
   - **Carry Flag (CY)**: 1 if carry out of $D_7$ or borrow generated.
5. **Program Counter (PC)**: 16-bit register holding memory address of the next instruction byte.
6. **Stack Pointer (SP)**: 16-bit register pointing to current Top of Stack in RAM.

#### **3. Functional Units of 8085** *(Slide 34–42)*
1. **Arithmetic and Logic Unit (ALU)**: Performs 8-bit addition, subtraction, AND, OR, XOR, compare, rotate, increment, and decrement.
2. **Instruction Register (IR) & Decoder**: IR stores opcode fetched from memory; Decoder decodes the opcode and drives machine cycle generation.
3. **Timing and Control Unit**: Generates clock signals, control lines ($\overline{\text{RD}}, \overline{\text{WR}}, \text{ALE}$), status lines ($IO/\overline{M}, S_0, S_1$), DMA lines ($\text{HOLD}, \text{HLDA}$), and reset lines.
4. **Interrupt Control**: Prioritizes and acknowledges external interrupt signals (TRAP, RST 7.5, RST 6.5, RST 5.5, INTR, $\overline{\text{INTA}}$).
5. **Serial I/O Control**: On-chip serial data transfer via SID and SOD pins.

---

### 2.b: Explain the instruction execution cycle of 8085 and describe the different machine cycles with suitable timing diagrams.

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf`
> - **Page Number**: **Page 29 & Pages 33–38**
>   - **Page 33**: Section *"Timing Diagram"* lists mandatory signals to draw: Higher Order Address Bus ($A_{15}-A_8$), Lower Address/Data bus ($AD_7-AD_0$), ALE, $\overline{\text{RD}}$, $\overline{\text{WR}}$, $IO/\overline{M}$.
> - **Slides Reference**: `2.1...Slides.pdf`, **Slides 98–101 & Slide 104**
> - **Diagrams to Draw from Slides**:
>   - **Slide 98–100**: Opcode Fetch Cycle ($T_1 - T_4$)
>   - **Slide 101**: Memory Read Cycle ($T_1 - T_3$)
>   - **Slide 104**: Waveforms showing CLK, $A_{15}-A_8$, $AD_7-AD_0$, ALE, $\overline{\text{RD}}$, $\overline{\text{WR}}$, $IO/\overline{M}$.
> - **📍 Diagram Placement in Your Written Answer**: Draw each timing waveform **directly underneath its respective machine cycle explanation in Section 3 ("Machine Cycle Waveforms Summary")**:
>   - Draw the **Opcode Fetch (4T)** waveform under Section 3.1.
>   - Draw the **Memory Read (3T)** waveform under Section 3.2.
>   - Draw the **Memory Write (3T)** waveform under Section 3.3.

#### **1. Execution Cycle Foundations**
- **Instruction Cycle (IC)**: Total time required to fetch, decode, and execute an instruction.
- **Machine Cycle (MC)**: Time required to access memory or an external I/O port. An instruction cycle consists of 1 to 5 machine cycles ($M_1 - M_5$).
- **T-State**: One clock cycle ($T = 1 / f_{\text{CLK}} \approx 333.3\text{ ns}$ at 3 MHz).
- **Formula**: $\text{Instruction Cycle} = \sum \text{Machine Cycles} = \sum \text{T-states} \times T$.

#### **2. Machine Cycles Status Table** *(Lecture Notes p. 29)*

| Machine Cycle | $IO/\overline{M}$ | $S_1$ | $S_0$ | Control Signal Active | T-States | Purpose |
| :--- | :---: | :---: | :---: | :---: | :---: | :--- |
| **Opcode Fetch ($M_1$)** | 0 | 1 | 1 | $\overline{\text{RD}} = 0$ | 4 T (or 6 T) | Fetch opcode from memory and decode inside CPU |
| **Memory Read** | 0 | 1 | 0 | $\overline{\text{RD}} = 0$ | 3 T | Read data or operand from memory location |
| **Memory Write** | 0 | 0 | 1 | $\overline{\text{WR}} = 0$ | 3 T | Write accumulator or register byte to memory |
| **I/O Read** | 1 | 1 | 0 | $\overline{\text{RD}} = 0$ | 3 T | Read data byte from input port |
| **I/O Write** | 1 | 0 | 1 | $\overline{\text{WR}} = 0$ | 3 T | Write byte from accumulator to output port |
| **Interrupt Acknowledge** | 1 | 1 | 1 | $\overline{\text{INTA}} = 0$ | 6 T or 12 T | Acknowledge interrupt & fetch vector instruction |
| **Bus Idle** | 0 / 1 | 0 | 0 | None ($\overline{\text{RD}}=\overline{\text{WR}}=1$) | 3 T | Internal CPU operations (e.g. `DAD`, `DCX`) |

#### **3. Machine Cycle Waveforms Summary**
- **Opcode Fetch ($M_1$ — 4 T-States)**: In $T_1$, address placed on buses, ALE pulses HIGH. In $T_2$, $\overline{\text{RD}}$ goes LOW. In $T_3$, opcode byte read into IR, $\overline{\text{RD}}$ goes HIGH. In $T_4$, opcode is decoded internally.
- **Memory Read (3 T-States)**: Similar to fetch, but status is $IO/\overline{M}=0, S_1=1, S_0=0$, and no internal decode state $T_4$ is needed.
- **Memory Write (3 T-States)**: Status is $IO/\overline{M}=0, S_1=0, S_0=1$. In $T_2$, data placed on $AD_7-AD_0$ and $\overline{\text{WR}}$ goes LOW. In $T_3$, write completes and $\overline{\text{WR}}$ goes HIGH.

---
---

# Question 3: Assembly Programming & Timing Diagram (5 Marks Each)

---

### 3.a: Write an 8085 assembly language program to add two 8-bit numbers and explain the instructions used.

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `MPMC_Lab_Manual.pdf`
> - **Experiment Number**: **Experiment 1 & Experiment 2** (Programs on 8-bit addition with carry handling, flowcharts, and memory verification).
> - **Lecture Notes Reference**: `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf`, **Pages 20–28** (*Instruction Set & Arithmetic Operations*).
> - **📍 Diagram Placement in Your Written Answer**: Draw the **Program Flowchart** right before the code table (or alongside the algorithm steps) to visualize the decision logic (Start $\to$ Init C $\to$ Load Pointer $\to$ ADD M $\to$ Check Carry $\to$ Store Sum & Carry $\to$ HLT).

#### **1. Assembly Program Code Table**

| Memory Address | Machine Code (Hex) | Labels | Mnemonic & Operands | Bytes | T-States | Detailed Comments |
| :---: | :---: | :--- | :--- | :---: | :---: | :--- |
| `2000H` | `0E 00` | | `MVI C, 00H` | 2 | 7 | Clear register C to 00H to track carry |
| `2002H` | `21 50 20` | | `LXI H, 2050H` | 3 | 10 | Point HL register pair to first number (`2050H`) |
| `2005H` | `7E` | | `MOV A, M` | 1 | 7 | Load first number from memory `M` into Accumulator |
| `2006H` | `23` | | `INX H` | 1 | 6 | Increment HL pair to point to second number (`2051H`) |
| `2007H` | `86` | | `ADD M` | 1 | 7 | Add second number in `M` to Accumulator ($A \leftarrow A + M$) |
| `2008H` | `D2 0C 20` | | `JNC NOCARRY` | 3 | 10/7 | If Carry Flag $CY = 0$, jump past carry increment |
| `200BH` | `0C` | | `INR C` | 1 | 4 | If $CY = 1$, increment Carry register ($C \leftarrow C + 1$) |
| `200CH` | `23` | `NOCARRY:` | `INX H` | 1 | 6 | Increment HL pointer to destination `2052H` |
| `200DH` | `77` | | `MOV M, A` | 1 | 7 | Store 8-bit Sum from Accumulator into `2052H` |
| `200EH` | `23` | | `INX H` | 1 | 6 | Increment HL pointer to destination `2053H` |
| `200FH` | `71` | | `MOV M, C` | 1 | 7 | Store Carry from register C into `2053H` |
| `2010H` | `76` | | `HLT` | 1 | 5 | Halt microprocessor execution |

#### **2. Instructions Used & Flags Affected**
- `MVI C, 00H`: Immediate addressing; loads 8-bit data into C. Flags: None.
- `LXI H, 2050H`: Immediate addressing; loads 16-bit address into HL. Flags: None.
- `MOV A, M`: Register indirect addressing; copies byte from memory location in HL to A. Flags: None.
- `INX H`: Register addressing; increments HL by 1. **Crucial point: `INX` does NOT modify any flags!**
- `ADD M`: Register indirect addressing; adds byte in memory to Accumulator. **Modifies all flags: S, Z, AC, P, CY**.
- `JNC NOCARRY`: Immediate/absolute addressing; jumps to target address if Carry flag $CY = 0$.
- `INR C`: Register addressing; increments register C by 1. Modifies S, Z, AC, P flags, but **leaves CY unaffected**.
- `MOV M, A` / `MOV M, C`: Register indirect addressing; stores byte into memory location pointed to by HL. Flags: None.
- `HLT`: Inherent addressing; stops execution.

---

### 3.b: Draw and explain the timing diagram of MVI A, 25H instruction of 8085.

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf`
> - **Main Diagram to Draw**: **Slide 104 — "Timing Diagram for MVI A, 45h"**
>   - *(Draw Professor SKJ's exact waveform from Slide 104 across all 7 T-states $T_1 - T_7$, replacing operand `45h` with `25H` in $T_6-T_7$, and opcode `3Eh` in $T_2-T_3$)*.
> - **Cycle Breakdown Reference**: **Slide 103** (Shows Op-Code Fetch Cycle OFC + Memory Read Cycle MEMR).
> - **Instruction Coding Reference**: **Slide 102** (`3E` for opcode, `45` / `25` for immediate operand).
> - **Lecture Notes Reference**: `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf`, **Page 34**.
> - **📍 Diagram Placement in Your Written Answer**: Draw the **7 T-state timing diagram (Slide 104)** across the **middle of your page**, immediately below Section 1 (Instruction Analysis) and BEFORE writing the detailed T-state explanations in Section 2.

#### **1. Instruction Analysis**
- **Instruction**: `MVI A, 25H` (2-byte instruction).
- **Opcode**: `3EH` stored at address `2000H` (Opcode Fetch cycle $M_1$, 4 T-states).
- **Data**: `25H` stored at address `2001H` (Memory Read cycle $M_2$, 3 T-states).
- **Total Execution**: $4 + 3 = 7\text{ T-states}$ ($\approx 2.33\ \mu\text{s}$ at 3 MHz).

#### **2. Detailed Step-by-Step T-State Breakdown**
- **Machine Cycle 1: Opcode Fetch ($M_1$ — $T_1$ to $T_4$)**:
  - **$T_1$**: $A_{15}-A_8$ outputs `20H`; $AD_7-AD_0$ outputs `00H`. **ALE goes HIGH** and falls to latch `00H`. Status lines: $IO/\overline{M} = 0, S_1 = 1, S_0 = 1$.
  - **$T_2$**: $AD_7-AD_0$ enters high-Z state. $\overline{\text{RD}}$ goes **LOW**. Memory reads address `2000H`.
  - **$T_3$**: Memory places opcode `3EH` on $AD_7-AD_0$. 8085 reads `3EH` into Instruction Register. $\overline{\text{RD}}$ goes **HIGH**. PC increments to `2001H`.
  - **$T_4$**: Instruction decoder decodes opcode `3EH` as `MVI A`. Data bus is idle.
- **Machine Cycle 2: Memory Read ($M_2$ — $T_5$ to $T_7$)**:
  - **$T_5$**: $A_{15}-A_8$ outputs `20H`; $AD_7-AD_0$ outputs `01H`. **ALE pulses HIGH** to latch `01H`. Status: $IO/\overline{M} = 0, S_1 = 1, S_0 = 0$.
  - **$T_6$**: $AD_7-AD_0$ floats. $\overline{\text{RD}}$ goes **LOW**. Memory reads location `2001H`.
  - **$T_7$**: Memory outputs data byte `25H` onto data bus. 8085 reads `25H` into Accumulator. $\overline{\text{RD}}$ goes **HIGH**. PC increments to `2002H`.

---
---

# Question 4: Interrupt Structure & Memory Interfacing (5 Marks Each)

---

### 4.a: Explain the 8085 interrupt structure. Describe the functions and priority of TRAP, RST 7.5, RST 6.5, RST 5.5 and INTR.

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf`
> - **Main Circuit Diagram to Draw**: **Slide 188 — "Multiple Interrupts and Priority"**
>   - *(Circuit diagram showing 8 interrupting devices Dev 0–Dev 7, Priority Encoder 74366, Tri-State Buffer, $\text{INTR}$, $\overline{\text{INTA}}$, and $AD_7-AD_0$ connected to the 8085)*.
> - **SIM Instruction Bit Format Diagram**: **Slide 199** (**"Using the SIM Instruction to Modify the Interrupt Masks"** showing bits $SOD, SDE, X, R7.5, MSE, M7.5, M6.5, M5.5$).
> - **Priority Hierarchy**: **Slide 209** (*"Internal Interrupt Priority"*)
> - **Interrupt Master Table**: **Slide 172 & Slide 210** (Listing Maskable, Vectored, and Triggering Method).
> - **Lecture Notes Reference**: `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf`, **Pages 54–65**.
> - **📍 Diagram Placement in Your Written Answer**:
>   1. **Priority Encoder Circuit Diagram (Slide 188)**: Draw in the **middle of your answer**, right after the Interrupt Priority Table (Section 1), and before starting the descriptions of TRAP, RST 7.5, etc.
>   2. **SIM Register Format Box (Slide 199)**: Draw the 8-bit accumulator box ($SOD, SDE, X, R7.5, MSE, M7.5, M6.5, M5.5$) directly inside **Section 3 (SIM Instruction Format)**.

#### **1. Interrupt Priority & Classification Table** *(Slides 172, 209, 210)*

| Priority | Interrupt Name | Maskable? | Triggering Mechanism | Vector Formula | Vector Address (Hex) | Application |
| :---: | :--- | :---: | :--- | :---: | :---: | :--- |
| **1 (Highest)** | **TRAP** (RST 4.5) | **No** (Non-maskable) | Level **AND** Rising-Edge Sensitive | $4.5 \times 8 = 36$ | `0024H` | Power failure, emergency shutdown |
| **2** | **RST 7.5** | Yes | **Rising-Edge Sensitive** | $7.5 \times 8 = 60$ | `003CH` | High-priority asynchronous I/O |
| **3** | **RST 6.5** | Yes | **High-Level Sensitive** | $6.5 \times 8 = 52$ | `0034H` | General peripheral devices |
| **4** | **RST 5.5** | Yes | **High-Level Sensitive** | $5.5 \times 8 = 44$ | `002CH` | Lower-priority peripherals |
| **5 (Lowest)** | **INTR** | Yes | **High-Level Sensitive** | Non-vectored (Supplied via $\overline{\text{INTA}}$) | User-defined | Multi-device expander (8259A PIC) |

#### **2. Key Characteristics of Each Interrupt**
1. **TRAP (Pin 6)**: Highest priority, non-maskable (cannot be disabled by `DI` or `SIM`). Edge- and level-sensitive to reject noise glitches while ensuring recognition. Vectors directly to `0024H`.
2. **RST 7.5 (Pin 7)**: Second highest priority. Rising-edge sensitive; sets an internal D flip-flop on low-to-high transition. Reset automatically during service, by `SIM` bit $D_4$, or reset. Vectors to `003CH`.
3. **RST 6.5 (Pin 8) & RST 5.5 (Pin 9)**: High-level sensitive; line must remain HIGH until sampled during the penultimate T-state of an instruction cycle. Masked via `SIM` bits $D_1$ and $D_0$. Vector to `0034H` and `002CH`.
4. **INTR (Pin 10)**: Lowest priority, non-vectored. Microprocessor responds with active-low pulse on $\overline{\text{INTA}}$ (Pin 12). External device provides vector opcode (`RST n` or `CALL addr`). Controlled by `EI` and `DI`.

#### **3. SIM Instruction Format** *(Slide 199)*
- Bit $D_0 = M5.5$, Bit $D_1 = M6.5$, Bit $D_2 = M7.5$ (Mask bits: 1 = Masked).
- Bit $D_3 = MSE$ (Mask Set Enable: must be 1 to update masks).
- Bit $D_4 = R7.5$ (Reset RST 7.5 flip-flop if 1).
- Bit $D_6 = SDE$ (Serial Data Enable), Bit $D_7 = SOD$ (Serial Output Data).

---

### 4.b: Explain the interfacing of 2764 EPROM with 8085 with a neat diagram. Describe the address decoding, address bus, data bus and control signals involved in the interfacing.

> [!TIP]
> **📖 Location in Professor's Study Materials:**
> - **File**: `2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf`
> - **Main Interfacing Circuit to Draw**: **Slide 154 — "Chip Selection Example"**
>   - *(Shows address lines, decoder, chip select lines $\overline{CS}$, $\overline{\text{RD}}, \overline{\text{WR}}$, and data lines connected to memory chips)*.
> - **Demultiplexing Latch Reference**: **Slide 45** (Shows 8085 connected to Latch 74LS373 with ALE to provide address lines $A_0 - A_7$).
> - **Memory Map Reference**: **Slide 155 — "Memory Map and Addresses"** (Shows EPROM located at the very start of memory space `0000H`).
> - **Lecture Notes Reference**: `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf`, **Pages 49–51** (*"Dimensions of Memory, Chip Selection Example, Memory Map and Addresses"*).
> - **Lab Manual Reference**: `MPMC_Lab_Manual.pdf`, **Page 6** (*"0000H TO 3FFFH: Monitor EPROM socket 2764"*).
> - **Textbook Standard Interfacing Diagram**: **Ramesh S. Gaonkar**, Chapter 3 & 4 (*Interfacing 8KB 2764 EPROM with 8085 using 74LS138 decoder*).
> - **📍 Diagram Placement in Your Written Answer**: Draw the **Interfacing Circuit Diagram (Slide 154 / Gaonkar)** immediately after the **Memory Map & Address Decoding Table (Section 2)** and BEFORE writing out the detailed bus connections in Section 3. This allows the examiner to cross-check decoder pins ($A_{15}-A_{13}$) and chip enable directly against the table.

#### **1. 2764 EPROM Chip Specifications**
- **Capacity**: $64\text{ Kbits} = 8\text{ Kbytes} = 8192\text{ bytes}$ ($8\text{K} \times 8$).
- **Address Lines Needed**: 13 lines ($A_0 - A_{12}$, because $2^{13} = 8192$).
- **Data Lines**: 8 lines ($D_0 - D_7$).
- **Control Pins**: $\overline{\text{CE}}$ (Chip Enable, active low), $\overline{\text{OE}}$ (Output Enable, active low), $V_{PP}$ (tied to $+5\text{V}$ for read mode).

#### **2. Memory Map & Address Decoding Table**
Since the 8085 Program Counter initializes to `0000H` upon reset, the monitor/boot EPROM **must start at `0000H`**. For an 8 KB ($2000\text{H}$) chip:
$$\text{Address Range} = \mathbf{0000H} \text{ to } \mathbf{1FFFH}$$

| Line | $A_{15}$ | $A_{14}$ | $A_{13}$ | $A_{12}$ | $A_{11}$ | $A_{10}$ | $A_9$ | $A_8$ | $A_7$ | $A_6$ | $A_5$ | $A_4$ | $A_3$ | $A_2$ | $A_1$ | $A_0$ | Hex Address |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :--- |
| **Start** | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | **`0000H`** |
| **End** | 0 | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | 1 | **`1FFFH`** |
| **Usage** | $\leftarrow$ Decoder 74LS138 $\rightarrow$ | $\leftarrow$ |  |  | Direct | Address | Lines | into | 2764 | EPROM | ($A_0 - A_{12}$) |  |  |  |  | $\rightarrow$ |  |

#### **3. Interfacing Circuit Architecture**
1. **Address Bus Demultiplexing ($A_0 - A_7$)**: $AD_0 - AD_7$ connected to inputs of 74LS373 latch; ALE connects to latch enable pin $G$; output control $\overline{OE}$ grounded. Outputs provide stable address lines $A_0 - A_7$.
2. **Address Inputs to 2764**: Lines $A_0 - A_7$ (from 74LS373) and $A_8 - A_{12}$ (from 8085) connect directly to address pins $A_0 - A_{12}$ of the 2764 EPROM chip.
3. **Address Decoding (74LS138 3-to-8 Decoder)**:
   - Select inputs: $A \leftarrow A_{13}$, $B \leftarrow A_{14}$, $C \leftarrow A_{15}$.
   - Enable inputs: $G_1 \leftarrow +5\text{V}$, $\overline{G_{2A}} \leftarrow IO/\overline{M}$ (active only when $IO/\overline{M} = 0$), $\overline{G_{2B}} \leftarrow \text{GND}$.
   - When $A_{15} A_{14} A_{13} = 000$ and $IO/\overline{M} = 0$, output **$\overline{Y_0}$** goes **LOW** and connects to **$\overline{\text{CE}}$** of 2764.
4. **Data Bus**: Pins $D_0 - D_7$ of 2764 connect directly to $AD_0 - AD_7$ of 8085.
5. **Control Signals**: $\overline{\text{RD}}$ from 8085 connects to $\overline{\text{OE}}$ of 2764; $\overline{\text{WR}}$ is left unconnected (EPROM is read-only).
