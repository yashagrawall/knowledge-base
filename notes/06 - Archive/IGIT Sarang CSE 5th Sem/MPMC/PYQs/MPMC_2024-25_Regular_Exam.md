Type : #RawNote       
Date : 2026-11-13        
Tags :  [[College]] ; [[MPMC]]    
~ ***Yash Agrawall*** ~     

---
# Microprocessor & Microcontroller — Regular Examination 2024–25

> **Course**: Microprocessor and Microcontroller (PCCS4308)  
> **Programme**: B.Tech CSE — 5th Semester  
> **Time**: 03 Hours | **Maximum Marks**: 60  
> **Instructions**: Answer Question number 1 which is compulsory and any five from the rest. The figures in the right-hand margin indicate marks.

---

## [[MPMC Theory Syllabus]]

- **Module 1**: 8085 Microprocessor Architecture, Pin Diagram, Timing Diagrams, Addressing Modes, ALP.
- **Module 2**: 8086 Microprocessor, BIU & EU, Real Mode Physical Address Calculation, Modes.
- **Module 3**: Peripheral Interfacing (8255 PPI, 8251 USART, 8237 DMA Controller).
- **Module 4**: 8051 Microcontroller Architecture, Pin Configuration, Port Structure, Serial Communication.

---

## Questions Table

### Question 1 (Compulsory Short Answer Questions — 10 × 1 = 10 Marks)

| Q No. | Questions | Marks | BL | CO | PO |
| :---: | :--- | :---: | :---: | :---: | :---: |
| **1.a** | In 8085 microprocessor, which of the following flag(s) is (are) affected by an arithmetic operation?<br>*(a) S flag only &nbsp;&nbsp; (b) CY flag only &nbsp;&nbsp; (c) Z flag only &nbsp;&nbsp; (d) AC, CY, Z flags* | 01 | L1 | CO1 | PO1 |
| **1.b** | What does the pin $\text{MN}/\overline{\text{MX}}$ do in an 8086 processor? | 01 | L2 | CO2 | PO1 |
| **1.c** | An 8085 microprocessor has ________ hardware interrupts. | 01 | L1 | CO1 | PO1 |
| **1.d** | How many times will the instruction sequence below loop before coming out?<br>`START: MOV AL, 00H`<br>`       INC AL`<br>`       JNZ START`<br>*(a) 1 &nbsp;&nbsp; (b) 255 &nbsp;&nbsp; (c) 256 &nbsp;&nbsp; (d) Will not come out of the loop* | 01 | L3 | CO2 | PO2 |
| **1.e** | Explain about the Direction Flag (DF) in 8086. | 01 | L2 | CO2 | PO1 |
| **1.f** | In 8085 microprocessor, the ISR for handling TRAP interrupt is at which memory location?<br>*(a) 003CH &nbsp;&nbsp; (b) 0034H &nbsp;&nbsp; (c) 0074H &nbsp;&nbsp; (d) 0024H* | 01 | L1 | CO1 | PO1 |
| **1.g** | Two control signals in microprocessor which are related to Direct Memory Access (DMA) are:<br>*(a) INTR & INTA &nbsp;&nbsp; (b) RD & WR &nbsp;&nbsp; (c) S0 & S1 &nbsp;&nbsp; (d) HOLD & HLDA* | 01 | L1 | CO1 | PO1 |
| **1.h** | What is the meaning of $\overline{\text{RD}}$ signal in Intel 8251A USART?<br>*(a) Read when low &nbsp;&nbsp; (b) Read when high &nbsp;&nbsp; (c) Write when low &nbsp;&nbsp; (d) Read and Write when high* | 01 | L2 | CO3 | PO1 |
| **1.i** | How does the `SBUF` SFR affect serial communications in 8051? | 01 | L2 | CO4 | PO1 |
| **1.j** | Find the memory address of the next instruction executed by the 8086 microprocessor when operated in real mode for $\text{CS} = 1000\text{H}$ and $\text{IP} = \text{E}000\text{H}$.<br>*(a) 10E00H &nbsp;&nbsp; (b) 1E000H &nbsp;&nbsp; (c) F000H &nbsp;&nbsp; (d) 1000EH* | 01 | L3 | CO2 | PO2 |

### Long Answer Questions (Answer any 5 — 5 × 10 = 50 Marks)

| Q No. | Questions | Marks | BL | CO | PO |
| :---: | :--- | :---: | :---: | :---: | :---: |
| **2.a** | Draw the functional pin diagram of 8085 Microprocessor & Explain all the pin functions. | 05 | L3 | CO1 | PO1 |
| **2.b** | Write an ALP for 8085 to subtract the 16-bit number in memory locations `3002H` and `3003H` from the 16-bit number in memory locations `3000H` and `3001H`. Store the result in `3004H` and `3005H`. | 05 | L3 | CO1 | PO2 |
| **3.a** | Draw the timing diagram for the instruction `MVI B, 50H`. This instruction is stored at memory location `2020H`. | 05 | L2 | CO1 | PO1 |
| **3.b** | Describe the instruction format and addressing modes of 8085 microprocessor. | 05 | L2 | CO1 | PO1 |
| **4.a** | Draw the internal block diagram of 8086 and explain the Bus Interface Unit (BIU) and Execution Unit (EU). | 05 | L2 | CO2 | PO1 |
| **4.b** | Explain the operating modes of 8255 PPI (Mode 0, Mode 1, Mode 2, BSR mode). | 05 | L2 | CO3 | PO1 |
| **5.a** | Describe the internal register of 8237 DMA controller with command word register. | 05 | L2 | CO3 | PO1 |
| **5.b** | Explain the functions of the following pins of 8051 microcontroller: (i) $\overline{\text{PSEN}}$, (ii) $\text{XTAL1} \& \text{XTAL2}$, (iii) $\text{RST}$. | 05 | L2 | CO4 | PO1 |
| **6** | Explain the architecture of 8051 microcontroller in detail with functional block diagram and memory organization. | 10 | L2 | CO4 | PO1 |
| **7** | **Short notes type Questions Only (Answer any TWO):**<br>**(a)** RIM and SIM instructions in 8085<br>**(b)** 8259 Priority Interrupt Controller<br>**(c)** Memory mapped I/O vs I/O mapped I/O<br>**(d)** Serial communication modes in 8051 | 10 | L2 | CO1-CO4 | PO1, PO2 |

---
