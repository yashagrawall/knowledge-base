Type : #Note    
Date : 2026-11-13    
Tags : [[College]] ; [[08 - Tags/microprocessor]] ; [[08 - Tags/microcontroller]]    
Status : #complete     
~ ***Yash Agrawall*** ~     

---

# Microprocessors & Microcontrollers (MPMC) — PYQ Analysis & Question Bank

**Course Code:** PCCS4308 | **Semester:** 5th Semester  
**Target:** End-Semester Examination & Class Tests  
**Associated Links:** [[MPMC Theory Syllabus]] · [[MPMC Study Flow & Execution Guide]] · [[MPMC_2026_Internal-1]]


---

## 1. High-Yield Topic Frequency & Master Trend Analysis

### Module I: 8085 Microprocessor Architecture, Timing & Programming
| Topic / Concept | Frequency | Recurring Exam Appearances & Problems |
| :--- | :---: | :--- |
| **8085 Architecture & Functional Pin Diagram** | 5 | • 2024–25 Q2a (5M), 2023–24 Q2a (5M), 2022–23 Q2a (5M), 2023 CT-1 Q2 & Q7<br>• Demultiplexing address/data bus using ALE, control signals $\overline{\text{RD}}, \overline{\text{WR}}, \text{IO}/\overline{\text{M}}$ |
| **Timing Diagrams (Opcode Fetch & MVI B, 50H)** | 4 | • 2024–25 Q3a (5M - `MVI B, 50H` at 2020H), 2023–24 Q2b (5M - Opcode Fetch), 2022–23, 2023 CT-1 Q6 |
| **Addressing Modes & Instruction Decoding** | 4 | • 2024–25 Q3b & Q5a, 2023–24 Q1j (`LDAX D` indirect, `CMA` implicit), 2023 CT-1 Q1 & Q3 |
| **Interrupt Structure & Vector Locations** | 4 | • 2024–25 Q1f (TRAP ISR at `0024H`), 2023–24 Q1a, 2023–24 Q3a (5M - 8085 interrupt structure), 2023 CT-1 Q1v |
| **Assembly Language Programming (ALP)** | 3 | • 2024–25 Q2b (5M - 16-bit subtraction stored in 3004H/3005H)<br>• 2023 CT-1 Q4 (8-bit addition with carry) |
| **Control Signals (HOLD, HLDA, S0, S1, Status)** | 3 | • 2024–25 Q1g, 2023–24 Q1b & Q1h, 2023 CT-1 Q1iii & Q1iv |

### Module II: 8086 Microprocessor Architecture & Systems
| Topic / Concept | Frequency | Recurring Exam Appearances & Problems |
| :--- | :---: | :--- |
| **8086 Architecture: BIU & EU with Prefetch Queue** | 4 | • 2024–25 Q4a (5M), 2023–24 Q4a (5M), 2022–23 Q4a (5M), 2023 CT-2 Q7 (5M)<br>• 6-byte instruction queue, pipelining, segment registers |
| **Real Mode Physical Address Calculation** | 2 | • 2024–25 Q1h ($\text{CS}=1000\text{H}, \text{IP}=\text{E}000\text{H} \implies \text{Physical Address} = 10000\text{H} + \text{E}000\text{H} = 1\text{E}000\text{H}$)<br>• 2023–24 Q1c (Clock generator & 8284) |
| **Minimum Mode vs Maximum Mode ($\text{MN}/\overline{\text{MX}}$)** | 3 | • 2024–25 Q1b, 2023 CT-2 Q9, 2022–23 Q5 |
| **Dedicated Interrupts (Type 0 to Type 4)** | 2 | • 2023 CT-2 Q6 (Type 0 Divide error, Type 1 Single step, Type 2 NMI, Type 3 Breakpoint, Type 4 Overflow) |

### Module III: Peripheral Interfacing Devices
| Topic / Concept | Frequency | Recurring Exam Appearances & Problems |
| :--- | :---: | :--- |
| **8255 PPI (Architecture & Operating Modes)** | 4 | • 2024–25 Q4b (5M), 2023–24 Q3b (5M), 2022–23 Q3b, 2023 CT-2 Q3 (5M)<br>• Mode 0 (Basic), Mode 1 (Strobed), Mode 2 (Bidirectional), BSR mode |
| **8251 USART (Serial Communication Architecture)** | 3 | • 2024–25 Q1g, 2023 CT-2 Q1 (5M), 2022–23 Q8d<br>• Mode word format, Command word, Status register, Baud rate |
| **8237 / 8257 DMA Controller** | 3 | • 2024–25 Q2 (Internal register & command word), 2023 CT-2 Q8, 2022–23 Q6 |
| **Memory Mapped I/O vs I/O Mapped I/O** | 2 | • 2022–23 Q7b (5M), 2023–24 |

### Module IV: 8051 Microcontroller
| Topic / Concept | Frequency | Recurring Exam Appearances & Problems |
| :--- | :---: | :--- |
| **8051 Internal Architecture & Memory Organization** | 3 | • 2024–25 Q2b (10M), 2022–23 Q7a (5M), 2023 CT-2 Q5 |
| **8051 Pin Configuration & Functions ($\overline{\text{PSEN}}, \text{XTAL}, \text{RST}$)** | 3 | • 2024–25 Q2a (5M), 2023 CT-2 Q5, 2022–23 |
| **Port Structure of 8051 (Port 0, 1, 2, 3)** | 3 | • 2023–24 Q7, 2023 CT-2 Q5, 2022–23 Q7a |
| **Serial Communication & SBUF Register** | 2 | • 2024–25 Q1h, 2023 CT-2 Q4 |

---

## 2. Transcribed Question Papers

### Academic Year 2024–25 (Regular / Back Paper)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PCCS4308*

#### Q1. Compulsory Short Answer Questions (10 × 1 = 10 Marks)
| Q No. | Question | Marks | BL | CO | PO |
| :---: | :--- | :---: | :---: | :---: | :---: |
| **1.a** | In 8085 microprocessor, which of the following flag(s) is (are) affected by an arithmetic operation?<br>*(a) S flag only (b) CY flag only (c) Z flag only (d) AC, CY, Z flags* | 01 | L1 | CO1 | PO1 |
| **1.b** | What does the pin $\text{MN}/\overline{\text{MX}}$ do in an 8086 processor? | 01 | L2 | CO2 | PO1 |
| **1.c** | An 8085 microprocessor has ________ hardware interrupts. | 01 | L1 | CO1 | PO1 |
| **1.d** | How many times will the instruction sequence below loop before coming out?<br>`START: MOV AL, 00H`<br>`       INC AL`<br>`       JNZ START`<br>*(a) 1 (b) 255 (c) 256 (d) Will not come out of the loop* | 01 | L3 | CO2 | PO2 |
| **1.e** | Explain about the Direction Flag (DF) in 8086. | 01 | L2 | CO2 | PO1 |
| **1.f** | In 8085 microprocessor, the ISR for handling TRAP interrupt is at which memory location?<br>*(a) 003CH (b) 0034H (c) 0074H (d) 0024H* | 01 | L1 | CO1 | PO1 |
| **1.g** | Two control signals in microprocessor which are related to Direct Memory Access (DMA) are:<br>*(a) INTR & INTA (b) RD & WR (c) S0 & S1 (d) HOLD & HLDA* | 01 | L1 | CO1 | PO1 |
| **1.h** | What is the meaning of $\overline{\text{RD}}$ signal in Intel 8251A USART?<br>*(a) Read when low (b) Read when high (c) Write when low (d) Read and Write when high* | 01 | L2 | CO3 | PO1 |
| **1.i** | How does the `SBUF` SFR affect serial communications in 8051? | 01 | L2 | CO4 | PO1 |
| **1.j** | Find the memory address of the next instruction executed by the 8086 microprocessor when operated in real mode for $\text{CS} = 1000\text{H}$ and $\text{IP} = \text{E}000\text{H}$.<br>*(a) 10E00H (b) 1E000H (c) F000H (d) 1000EH* | 01 | L3 | CO2 | PO2 |

#### Long Answer Questions (Answer any 5 — 5 × 10 = 50 Marks)
- **Q2 (a) (5M):** Draw the functional pin diagram of 8085 Microprocessor & Explain all the pin functions. *(L3 | CO1 | PO1)*
- **Q2 (b) (5M):** Write an ALP for 8085 to subtract the 16-bit number in memory locations `3002H` and `3003H` from the 16-bit number in memory locations `3000H` and `3001H`. The LSBs of the two numbers are in `3000H` and `3002H`. Store the result in `3004H` and `3005H` with MSB in `3005H`. *(L3 | CO1 | PO2)*
- **Q3 (a) (5M):** Draw the timing diagram for the instruction `MVI B, 50H`. This instruction is stored at memory location `2020H`. *(L2 | CO1 | PO1)*
- **Q3 (b) (5M):** Describe the instruction format and addressing modes of 8085 microprocessor. *(L2 | CO1 | PO1)*
- **Q4 (a) (5M):** Draw the internal block diagram of 8086 and explain the Bus Interface Unit (BIU) and Execution Unit (EU). *(L2 | CO2 | PO1)*
- **Q4 (b) (5M):** Explain the operating modes of 8255 PPI (Mode 0, Mode 1, Mode 2). *(L2 | CO3 | PO1)*
- **Q5 (a) (5M):** Describe the internal register of 8237 DMA controller with command word register. *(L2 | CO3 | PO1)*
- **Q5 (b) (5M):** Explain the functions of the following pins of 8051 microcontroller: (i) $\overline{\text{PSEN}}$, (ii) $\text{XTAL1} \& \text{XTAL2}$, (iii) $\text{RST}$. *(L2 | CO4 | PO1)*
- **Q6 (10M):** Explain the architecture of 8051 microcontroller in detail with functional block diagram and memory organization. *(L2 | CO4 | PO1)*
- **Q7 (10M):** Short notes (Answer any TWO):
  - **(a)** RIM and SIM instructions in 8085
  - **(b)** 8259 Priority Interrupt Controller
  - **(c)** Memory mapped I/O vs I/O mapped I/O
  - **(d)** Serial communication modes in 8051

---

### Academic Year 2023–24 (Regular Examination)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PCCS4308*

- **Q1 (10M):** Short conceptual questions:
  - (a) What is TRAP interrupt and its significance?
  - (b) What is the use of HLDA and HOLD?
  - (c) How is clock signal generated in 8086? Maximum internal clock frequency?
  - (d) Define function of parity flag and zero flag in 8085.
  - (e) Explain functions of 8086 pins: $\text{NMI}$ and $\overline{\text{TEST}}$.
  - (f) Direction Flag in 8086.
  - (g) Why are status signals provided in microprocessor ($S_0, S_1$)?
  - (h) Distinguish machine cycle, instruction cycle, fetch cycle, execution cycle.
  - (i) Addressing modes for: (i) `LDAX D`, (ii) `CMA`.
- **Q2 (a) (5M):** Draw pin configuration and functional pin diagram of 8085 microprocessor.
- **Q2 (b) (5M):** Draw the timing diagram of Opcode Fetch machine cycle of 8085 and discuss $T_1, T_2, T_3, T_4$ states.
- **Q3 (a) (5M):** Explain in detail the 8085 interrupt structure (Hardware interrupts, Priority, Maskable vs Non-maskable, Vector locations).
- **Q3 (b) (5M):** Explain the operating modes of 8255 PPI with Control Word format.
- **Q4 (a) (5M):** Draw internal block diagram of 8086: Bus Interface Unit and Execution Unit.
- **Q4 (b) (5M):** Explain addressing modes of 8086 microprocessor with examples.
- **Q5 (10M):** 8251 USART internal block diagram, transmitter and receiver registers, asynchronous mode control word.
- **Q6 (10M):** Interfacing ADC 0808/0809 with 8085 microprocessor.
- **Q7 (10M):** 8051 microcontroller pin diagram and internal port structure (Ports 0, 1, 2, 3).
- **Q8 (10M):** Short notes on: (a) 8259 operating modes, (b) DMA Controller 8257, (c) 8051 Timer/Counter modes.

---

### Academic Year 2022–23 (Regular Examination)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PCCS4308*

- **Q1 (10M):** Status signals, flag register bit definition, TRAP vector address, 8086 segmentation, machine cycle definitions.
- **Q2 (10M):** 8085 architecture, functional block diagram, ALU, register array, control unit.
- **Q3 (10M):** Opcode fetch timing diagram, memory read and memory write timing diagrams.
- **Q4 (10M):** 8086 Bus Interface Unit, instruction queue, pipelining benefits.
- **Q5 (10M):** Minimum mode vs Maximum mode configuration of 8086.
- **Q6 (10M):** 8237 DMA controller architecture and register organization.
- **Q7 (a) (5M):** 8051 pin diagram and port circuit scheme.
- **Q7 (b) (5M):** Memory mapped I/O vs I/O mapped I/O distinguishing features.
- **Q8 (10M):** Short notes on any two: (a) RIM and SIM instructions, (b) LDAX and STAX execution, (c) 8251 USART, (d) Synchronous vs Asynchronous transmission.

---

### Internal Examinations (Class Tests) 2023–24

#### 1st Class Test (Full Marks: 15 | Time: 1 Hour)
1. Short questions: [1M each]
   - (i) Function of parity flag and zero flag in 8085.
   - (ii) Addressing modes for `LDAX D` and `CMA`.
   - (iii) Why status signals are provided in microprocessor?
   - (iv) What is the use of HLDA and HOLD?
   - (v) What is TRAP interrupt and its significance?
2. With functional block diagram, explain architecture of Intel 8085 microprocessor. [5M]
3. Describe instruction format and addressing modes of 8085. [5M]
4. Write an ALP for 8085 to add two 8-bit numbers and find the result with carry. [5M]
5. Draw timing diagram of Opcode Fetch machine cycle of 8085. [5M]
6. What is the function of ALE and how does it function? [5M]

#### 2nd Class Test (Full Marks: 15 | Time: 1 Hour)
1. Draw internal architecture of USART 8251 and explain status, mode, and control formats. [5M]
2. Explain operating modes of 8259 PIC. [5M]
3. Draw 8255 PPI internal architecture and explain its operation. [5M]
4. Draw pin diagram of 8051 microcontroller and explain its port structure. [5M]
5. Conditions causing 8086 dedicated interrupts: Type 0, Type 1, Type 2, Type 3, Type 4. [5M]
6. Draw internal block diagram of 8086 (BIU & EU). [5M]
7. Explain MIN / MAX modes of 8086 microprocessor. [5M]
