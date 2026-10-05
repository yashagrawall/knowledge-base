
Type : #RawNote       
Date : 2026-09-27        
Tags :  [[College]] ; [[MPMC]]   
~ ***Yash Agrawall*** ~     

---
# Microprocessors & Microcontrollers (MPMC) — Study Flow & Execution Guide

**Course Code:** PCCS4308 | **Credits:** 3 (Theory) + 2 (Lab) = **5 Credits**  
**Target Grade:** **E / O (9–10)** | **Strategic Role:** The High-Yield Academic Tax. Accounts for **~24% of your 5th-semester GPA**. Must be secured with maximum efficiency and minimum cognitive drain.  
**Associated Notes:** [[MPMC Theory Syllabus]] · [[Core_Subjects_Study_Method_and_Visual_Sources]]

---

## 1. Executive Strategy: The "Minimum Effective Dose" Protocol

MPMC represents legacy 8-bit / 16-bit hardware architecture (8085 was released in 1976). It has near-zero relevance to modern AI systems, multi-agent modeling, or European graduate research:

> [!CAUTION]
> ### The Strategic Law for MPMC
> * **Zero Textbooks:** Do NOT buy or read 800-page books (Gaonkar, Roy/Bhurchandi, Mazidi). Reading deep hardware manuals for an 8085 is an unproductive time sink.
> * **Exclusively Use Faculty Lecture Notes:** Prof. Suvendu Kumar Jena (SKJ) literally authors your internal questions and semester exams. Study what SKJ wrote in his lecture slides—nothing more.
> * **Exploit Spatial Memory:** 70% of exam marks in MPMC are awarded for **clean, accurately labeled architectural and pin diagrams**. Watch Bharat Acharya, draw each diagram twice from memory, and lock in the marks.
> * **Protect the 2-Credit Lab (Monday 14:00–16:30):** Lab grades in state colleges are based on attendance, timely program execution, and neat record books. Securing an **'O' (10/10)** in the 2-credit lab guarantees an easy buffer.
> * **Strict Time Cap:** **1.5 Hours per week maximum** (Wednesday night *Core - MPMC* block).

---

## 2. Resource Mapping & Local Assets

| Resource Type | Source Name | Local Vault Path | Role & Usage Rule |
| :--- | :--- | :--- | :--- |
| **Primary Exam Source (8085 & 8086)** | **Prof. SKJ Lecture Notes** | [[06 - Archive/IGIT Sarang CSE 5th Sem/MPMC/Study Materials by SKJ/2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf]] | **109 Pages.** Single source of truth for 8085 & 8086 architecture, timing diagrams, interrupts, and addressing modes. |
| **Comprehensive Slides** | **Prof. SKJ Architecture Slides** | [[06 - Archive/IGIT Sarang CSE 5th Sem/MPMC/Study Materials by SKJ/2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf]] | **330 Slides.** Use for crystal clear pinout diagrams and minimum/maximum mode bus timing. |
| **Peripheral Interfacing Source** | **Prof. SKJ Interfacing Notes** | [[06 - Archive/IGIT Sarang CSE 5th Sem/MPMC/Study Materials by SKJ/3. Peripheral Interfacing - 8255, 8259, 8253, 8279 and ADC-DAC.pdf]] | **107 Pages.** Complete coverage of 8255, 8259, 8253/8254, 8279, and ADC/DAC interfacing. |
| **DMA Controller Source** | **Prof. SKJ DMA Notes** | [[06 - Archive/IGIT Sarang CSE 5th Sem/MPMC/Study Materials by SKJ/4. DMA Controller 8257 Notes.pdf]] | **12 Pages.** Shortest path to 8257 DMA architecture and transfer modes. |
| **Microcontroller Source** | **Prof. SKJ 8051 Notes** | [[06 - Archive/IGIT Sarang CSE 5th Sem/MPMC/Study Materials by SKJ/5. 8051 Microcontroller - Architecture, Memory and Peripherals.pdf]] | **33 Pages.** Direct mapping for 8051 architecture, RAM layout, timers, and serial comms. |
| **Visual Architecture Lectures** | **Bharat Acharya Education** | [Bharat Acharya 8085 / 8086 Playlist](https://www.youtube.com/results?search_query=bharat+acharya+8085) | Turns dry pinouts and bus registers into a spatial mental model you can draw easily in the exam. |
| **Interactive Assembly Simulator** | **Sim8085** | [Sim8085.com](https://sim8085.com/) | Type assembly instructions in your browser and watch the Accumulator, Program Counter, and Flags update live. |

---

## 3. Master Chronological Study Flow & Exact Page Mapping

### PHASE 1: 8085 Microprocessor Architecture & Programming (Module I)

```
[Start Here] SKJ Note 2 (PP 8-22)
       │ (8085 Architecture, Registers A-L, SP, PC, Flags, Demuxing AD0-AD7 with ALE)
       ▼ 
[Shift To] SKJ Note 2 (PP 23-45)
       │ (8085 Instruction Set & 5 Addressing Modes)
       ▼
[Shift To] SKJ Note 2 (PP 46-53)
       │ (Timing Diagrams: Opcode Fetch 4T, Memory Read 3T, Memory Write 3T)
       ▼
[Finish With] SKJ Note 2 (PP 54-65)
         (8085 Interrupts: TRAP, RST 7.5, 6.5, 5.5, INTR & Vector Locations)
```

* **Step 1: 8085 Internal Architecture & Bus Demultiplexing**
  * *Resource:* `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf` (**PP 8–22**)
  * *Subtopics:* 8-bit ALU, Register array ($A, B, C, D, E, H, L$, Stack Pointer $SP$, Program Counter $PC$, Increment/Decrement register), Flag register ($S, Z, AC, P, CY$), Demultiplexing lower address/data bus ($AD_0–AD_7$) using external latch 74LS373 and Address Latch Enable ($\text{ALE}$).
* **Step 2: 8085 Pin Diagram & Control Signals**
  * *Resource:* `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf` (**PP 15–22**) & `2.1. Slides` (**PP 30–65**)
  * *Subtopics:* 40 pins: Power ($V_{CC}, V_{SS}$), Clock generation ($X_1, X_2$, CLK OUT), Control signals ($\overline{RD}, \overline{WR}, IO/\overline{M}$), Status signals ($S_0, S_1$), DMA signals ($HOLD, HLDA$), Reset ($RESET IN, RESET OUT$).
* **Step 3: Instruction Set & Addressing Modes**
  * *Resource:* `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf` (**PP 23–45**)
  * *Subtopics:* 5 Addressing Modes: Immediate (`MVI A, 32H`), Register (`MOV A, B`), Direct (`LDA 2050H`), Register Indirect (`MOV A, M`), Implicit (`CMA`). Instruction groups: Data Transfer, Arithmetic, Logical, Branching, Machine Control.
* **Step 4: Machine Cycles & Timing Diagrams**
  * *Resource:* `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf` (**PP 46–53**)
  * *Subtopics:* $T$-states, Machine cycles: Opcode Fetch (4 $T$-states: $T_1$ send address & latch with ALE, $T_2$ assert $\overline{RD}$, $T_3$ data bus read, $T_4$ decode opcode), Memory Read (3 $T$), Memory Write (3 $T$), I/O Read/Write (3 $T$).
* **Step 5: 8085 Interrupt Structure**
  * *Resource:* `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf` (**PP 54–65**)
  * *Subtopics:* Non-maskable interrupt (TRAP / RST 4.5, vector $0024\text{H}$, highest priority), Maskable hardware interrupts (RST 7.5 [$003C\text{H}$], RST 6.5 [$0034\text{H}$], RST 5.5 [$002C\text{H}$], INTR / INTA), Software interrupts (RST 0–7), SIM and RIM instructions.
* **Skip List for Phase 1:**
  * Skip complex assembly string manipulation programs with obscure loop delays.
  * Skip obsolete 8155 and 8355 multifunction chip specs.
* **The Dual Asset:**
  * **Systems Invariant:** The fundamental von Neumann bus cycle: Address latching $\to$ Memory read/write $\to$ Instruction register decoding.
  * **Exam Representation:** Perfectly labeled **8085 Architecture Block Diagram** and **Opcode Fetch Timing Diagram** (showing $CLK, A_8–A_{15}, AD_0–AD_7, \text{ALE}, IO/\overline{M}, \overline{RD}$).

---

### PHASE 2: 8086 Microprocessor & Peripheral Interfacing (Module II)

```
[Start Here] SKJ Note 2 (PP 86-95)
       │ (8086 Architecture: BIU vs EU, 6-byte Prefetch Queue, Segment Registers)
       ▼ 
[Shift To] SKJ Note 2 (PP 96-105)
       │ (Memory Segmentation: Physical Address = Segment * 16 + Offset, 8086 Flags)
       ▼
[Shift To] SKJ Note 3 (PP 1-22)
       │ (8255 PPI: Architecture, Ports A/B/C, Control Word Format & Modes 0, 1, 2)
       ▼
[Shift To] SKJ Note 3 (PP 23-47)
       │ (8259 PIC: Cascading, Priority Resolver, ICW1-4, OCW1-3)
       ▼
[Shift To] SKJ Note 3 (PP 48-68) & SKJ Note 4 (PP 1-12)
       │ (8253 Timer Modes 0-5 & 8257 DMA Controller)
       ▼
[Finish With] SKJ Note 3 (PP 95-108)
         (ADC 0808/0809 & DAC 0808 Interfacing Diagrams)
```

* **Step 1: 8086 16-Bit Architecture & Segmentation**
  * *Resource:* `2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf` (**PP 86–105**)
  * *Subtopics:* Bus Interface Unit (BIU) vs Execution Unit (EU), 6-byte Pre-fetch Queue (pipelining instruction fetch during EU execution), 16-bit registers ($AX, BX, CX, DX, SP, BP, SI, DI$), Segment registers ($CS, DS, SS, ES$, Instruction Pointer $IP$), Memory Segmentation (1 MB address space, Physical Address = $\text{Segment} \times 16 + \text{Offset}$), 8086 Flag register (Flags: $CF, PF, AF, ZF, SF, OF, TF, IF, DF$).
* **Step 2: 8086 Operating Modes & Pin Functions**
  * *Resource:* `2.1. Slides` (**PP 180–230**)
  * *Subtopics:* Minimum Mode ($\text{MN}/\overline{\text{MX}} = 1$, single processor, 8086 generates control signals directly) vs Maximum Mode ($\text{MN}/\overline{\text{MX}} = 0$, multiprocessor, requires 8288 Bus Controller to generate $\overline{\text{MRDC}}, \overline{\text{MWTC}}, \overline{\text{IORC}}, \overline{\text{IOWC}}$).
* **Step 3: 8255 Programmable Peripheral Interface (PPI)**
  * *Resource:* `3. Peripheral Interfacing...pdf` (**PP 1–22**)
  * *Subtopics:* Block diagram, 3 8-bit ports ($Port\ A, Port\ B, Port\ C$ upper/lower), Control Word format: Mode Definition (Bit 7 = 1) vs Bit Set/Reset BSR (Bit 7 = 0), Mode 0 (Basic I/O), Mode 1 (Strobed I/O with handshake), Mode 2 (Bi-directional bus on Port A).
* **Step 4: 8259 Programmable Interrupt Controller (PIC)**
  * *Resource:* `3. Peripheral Interfacing...pdf` (**PP 23–47**)
  * *Subtopics:* Block diagram (Interrupt Request Register IRR, In-Service Register ISR, Interrupt Mask Register IMR, Priority Resolver PR), Cascading 9 PICs for 64 interrupt lines, Initialization Command Words (ICW1–ICW4), Operational Command Words (OCW1–OCW3).
* **Step 5: 8253/8254 Timer & 8257 DMA Controller**
  * *Resource:* `3. Peripheral Interfacing...pdf` (**PP 48–68**) & `4. DMA Controller 8257 Notes.pdf` (**PP 1–12**)
  * *Subtopics:* 8253 Timer: 3 independent 16-bit counters, Control Word format, Modes 0–5 (Mode 0: Interrupt on terminal count, Mode 1: Programmable one-shot, Mode 2: Rate generator, Mode 3: Square wave rate generator); 8257 DMA: 4 channels, Address and Terminal Count registers, Cycle Stealing vs Burst transfer.
* **Step 6: ADC & DAC Interfacing**
  * *Resource:* `3. Peripheral Interfacing...pdf` (**PP 95–108**)
  * *Subtopics:* Interfacing ADC 0808/0809 (SOC, EOC, ALE, clock input, 8-channel analog mux) and DAC 0808 ($R-2R$ ladder network, reference current, OP-AMP I-to-V converter).
* **Skip List for Phase 2:**
  * Skip complex 8086 MASM assembler macro directives.
  * Skip 8279 keyboard display internal FIFO circuit equations.
* **The Dual Asset:**
  * **Systems Invariant:** The decoupling of memory access from instruction execution (BIU vs EU) as the historical ancestor of modern decoupled superscalar pipelines.
  * **Exam Representation:** The **8086 Internal Architecture Block Diagram** (BIU queue + EU ALU) and the **8255 Control Word bit-breakdown table**.

---

### PHASE 3: 8051 Microcontroller Architecture & Programming (Modules III & IV)

```
[Start Here] SKJ Note 5 (PP 1-15)
       │ (Microprocessor vs Microcontroller, 8051 Architecture & 40-Pin Layout)
       ▼ 
[Shift To] SKJ Note 5 (PP 16-25)
       │ (8051 RAM Organization: 4 Register Banks, Bit-Addressable RAM, SFRs)
       ▼
[Shift To] SKJ Note 5 (PP 26-29)
       │ (8051 Timers 0 & 1, TMOD and TCON Registers & Operating Modes)
       ▼
[Finish With] SKJ Note 5 (PP 30-33)
         (8051 Interrupt Structure [IE, IP] & Serial Communication [SCON, MAX232])
```

* **Step 1: 8051 Hardware Architecture & Pins**
  * *Resource:* `5. 8051 Microcontroller...pdf` (**PP 1–15**)
  * *Subtopics:* Microprocessor vs Microcontroller comparative table (CPU only vs CPU + RAM + ROM + Timers + I/O on single chip); 8051 Core: 8-bit CPU, 128 Bytes on-chip RAM, 4 KB on-chip ROM, Four 8-bit bidirectional I/O ports ($P_0, P_1, P_2, P_3$), 40-pin DIP layout (Power, XTAL1/XTAL2, $\overline{EA}/V_{PP}$, $\text{ALE}/\overline{PROG}$, $\overline{PSEN}$).
* **Step 2: 8051 Memory Organization & SFRs**
  * *Resource:* `5. 8051 Microcontroller...pdf` (**PP 16–25**)
  * *Subtopics:* 
    * Internal RAM (128 Bytes, $00\text{H}–7F\text{H}$): Register Banks 0–3 ($00\text{H}–1F\text{H}$, selected by $RS1, RS0$ in $PSW$), Bit-Addressable RAM ($20\text{H}–2F\text{H}$, 128 individually addressable bits $00\text{H}–7F\text{H}$), General Purpose Scratchpad ($30\text{H}–7F\text{H}$).
    * Special Function Registers (SFRs, $80\text{H}–FF\text{H}$): Accumulator ($ACC$), $B$ register, Program Status Word ($PSW$), Stack Pointer ($SP$), Data Pointer ($DPTR = DPH + DPL$), Port Latches ($P_0–P_3$), $TMOD, TCON, SCON, PCON, IE, IP$.
* **Step 3: 8051 Timers / Counters & Interrupts**
  * *Resource:* `5. 8051 Microcontroller...pdf` (**PP 26–33**)
  * *Subtopics:* 
    * Timers: Timer 0 & Timer 1 (16-bit), $TMOD$ register (GATE, $C/\overline{T}$, M1, M0: Mode 0 13-bit, Mode 1 16-bit, Mode 2 8-bit auto-reload, Mode 3 split timer), $TCON$ register (TF1, TR1, TF0, TR0, IE1, IT1, IE0, IT0).
    * Interrupts: 5 interrupt sources (External $\overline{INT0}$, Timer 0 $TF0$, External $\overline{INT1}$, Timer 1 $TF1$, Serial $RI/TI$), Interrupt Enable ($IE$) register, Interrupt Priority ($IP$) register, Vector addresses.
    * Serial Interface: $SCON$ register, Mode 1 (8-bit UART, variable baud rate set by Timer 1 Mode 2 auto-reload), connection to RS-232 via MAX-232 voltage level converter.
* **Skip List for Phase 3:**
  * Skip complex external expanded memory banking circuits beyond basic $\overline{PSEN}$ and $\overline{EA}$ pin functionality.
  * Skip 8051 C-programming libraries; stick strictly to assembly instructions and architecture.
* **The Dual Asset:**
  * **Systems Invariant:** Harvard architecture memory space separation (separate Program ROM and Data RAM bus spaces) providing deterministic, collision-free real-time embedded execution.
  * **Exam Representation:** The **8051 Internal RAM Memory Map** (clearly dividing Banks 0–3, Bit-addressable space, and Scratchpad) and the bit-breakdown of **$TMOD$ and $PSW$ registers**.

---

## 4. Tactical Execution Protocol (Per 60-Min Study Session)

1. **Step 1: Visual Seed (20 Mins):** Watch the targeted Bharat Acharya lecture on 1.25x.
2. **Step 2: Targeted Book Extraction (30 Mins):** Jump directly to the exact PDF page of the SKJ notes listed above.
3. **Step 3: Dual Asset Note (10 Mins):** Open [[Academic Notes Template]] and record:
   - Invariant (bus timing / memory isolation / Harvard vs von Neumann).
   - Exam Representation (draw the pinout or architecture block diagram from memory).
4. **Hard Stop (60 Mins Total):** Close book and move on.

---
# Reference 

1. [[1. Fundamentals of Microprocessors and Microcontrollers.pdf]]
2. [[2. 8085 and 8086 Microprocessors - Lecture Notes (SKJ).pdf]]
3. [[2.1. 8085 and 8086 Microprocessor Architecture and Programming Slides.pdf]]
4. [[3. Peripheral Interfacing - 8255, 8259, 8253, 8279 and ADC-DAC.pdf]]
5. [[3.1. 8251 USART and Peripheral Interfacing.pdf]]
6. [[4. DMA Controller 8257 Notes.pdf]]
7. [[4.1. DMA Controller 8257 and 8237 Slides.pdf]]
8. [[5. 8051 Microcontroller - Architecture, Memory and Peripherals.pdf]]
9. [[MPMC_Lab_Manual.pdf]]