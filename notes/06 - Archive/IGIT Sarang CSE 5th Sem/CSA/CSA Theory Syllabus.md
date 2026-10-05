
Type : #RawNote       
Date : 2026-09-27        
Tags :  [[College]] ; [[CSA]]   
~ ***Yash Agrawall*** ~     

---
# Computer System Architecture (PECS5301)
**B.Tech Computer Science & Engineering — 5th Semester**  
**Course Credits**: 3 (3-0-0)  
**Department**: Computer Science Engineering & Applications, IGIT Sarang

---

## Course Objectives
To understand the functions and design of various units of digital computers to store and process the information, fundamental concepts of processing units, concepts of various memory systems, input/output, and interrupts.

## Course Outcomes
1. Understand number systems and perform arithmetic operations across representations.
2. Master the basics of computer organization, instruction cycles, and processor design.
3. Gain in-depth knowledge of pipelining, RISC pipelines, and vector/array processing.
4. Understand memory hierarchy, cache mapping, virtual memory, and multiprocessor architectures.

---

## Course Syllabus

### MODULE I (10 Hours)
- **Number Systems & Conversions**:
  - Number Systems: Binary, Decimal, Octal, Hexadecimal
  - Base Conversions: Binary $\leftrightarrow$ Decimal, Octal $\leftrightarrow$ Decimal, Octal $\leftrightarrow$ Binary, Hexadecimal $\leftrightarrow$ Binary, Hexadecimal $\leftrightarrow$ Decimal, Hexadecimal $\leftrightarrow$ Octal
  - Binary Arithmetic: Addition, Subtraction (1's and 2's Complement Methods)
- **Digital Logic Circuits**:
  - Logic Gates: AND, OR, NOT, NAND, NOR, Exclusive-OR (XOR), Exclusive-NOR (XNOR)
- **Combinational Circuits**:
  - Design of Combinational Circuits: Half Adder, Full Adder, Half Subtractor, Full Subtractor
  - Encoders, Decoders
  - Multiplexers (MUX) & Demultiplexers (DEMUX)
- **Sequential Circuits**:
  - Flip-Flops (SR, JK, D, T)
  - Registers & Shift Registers
  - Counters (Synchronous, Asynchronous)

### MODULE II (10 Hours)
- **Basic Computer Organization and Design**:
  - Instruction Codes & Computer Registers
  - Computer Instructions & Timing and Control Module
  - Instruction Cycle (Fetch, Decode, Execute)
  - Memory Reference Instructions, Input-Output Instructions, and Interrupts
  - Design of Basic Computer & Design of Accumulator Logic
- **Micro-programmed Control Unit**:
  - Control Memory & Address Sequencing
  - Microprogram Example & Design of Control Unit
- **Central Processing Unit (CPU)**:
  - General Register Organization
  - Stack Organization (Register Stack, Memory Stack, Reverse Polish Notation)
  - Instruction Formats (Three-Address, Two-Address, One-Address, Zero-Address)
  - Addressing Modes (Immediate, Direct, Indirect, Register, Register Indirect, Relative, Indexed)

### MODULE III (10 Hours)
- **Pipeline and Vector Processing**:
  - Parallel Processing & Pipelining Principles
  - Arithmetic Pipeline
  - Instruction Pipeline & RISC Pipeline
  - Vector Processing & Array Processors
- **Input-Output Organization**:
  - Peripheral Devices & Input-Output Interface
  - Asynchronous Data Transfer (Strobe Control, Handshaking)
  - Modes of Data Transfer (Programmed I/O, Interrupt-Initiated I/O, Direct Memory Access)
  - Priority Interrupt (Daisy-Chaining Priority, Parallel Priority Hardware)
  - Direct Memory Access (DMA Controller, DMA Transfer)
  - Input-Output Processor (IOP)

### MODULE IV (10 Hours)
- **Memory Organization**:
  - Memory Hierarchy
  - Main Memory (RAM and ROM Chips, Memory Address Map)
  - Auxiliary Memory (Magnetic Disks, Magnetic Tapes)
  - Associative Memory (Hardware Organization, Match Logic)
  - Cache Memory (Associative Mapping, Direct Mapping, Set-Associative Mapping, Writing into Cache)
  - Virtual Memory (Address Space and Memory Space, Address Mapping Using Pages, Page Replacement)
  - Memory Management Hardware
- **Multiprocessors**:
  - Characteristics of Multiprocessors
  - Interconnection Structures (Time-Shared Common Bus, Multiport Memory, Crossbar Switch, Multistage Switching Network, Hypercube)
  - Interprocessor Arbitration, Interprocessor Communication & Synchronization

## Prescribed & Available Resources

### Available Textbooks in Vault (`07 - Annexure/Books/`)
1. **Primary Syllabus & Coursework Text:** [[Computer_System_Architecture-M.Morris_Mano-3rd_ed.pdf|M. Morris Mano — Computer System Architecture (3rd Ed)]]
   * *Best For:* Basic Computer Org (Ch 5), Microprogrammed Control (Ch 7), CPU Organization (Ch 8), Pipelining (Ch 9), Cache & Virtual Memory (Ch 12).
2. **Hardware Systems Depth (International Standard):** [[Computer_Systems:_A_Programmer's_Perspective-Bryant_&_O'Hallaron-3rd_ed.pdf|Randal E. Bryant & David R. O'Hallaron (CS:APP) — Computer Systems: A Programmer's Perspective (3rd Ed)]]
   * *Best For:* Cache hierarchy, spatial/temporal locality (Ch 6), and Virtual Memory translation (Ch 9).
3. **Reference Backup:** [[Computer_Organization_And_Embedded_System-Carl_Hamacher-6th_ed.pdf|Carl Hamacher et al. — Computer Organization and Embedded Systems (6th Ed)]]

### Visual Lectures & Interactive Tools
* **Primary Visual Video:** [Gate Smashers — Computer Organization & Architecture (COA)](https://www.youtube.com/playlist?list=PLxCzCOWd7aiHMonh3G6QNKq53C6oNXGrX) (YouTube)
* **Physical Hardware Intuition:** [Ben Eater — Building an 8-bit Computer from Scratch](https://www.youtube.com/playlist?list=PLowKtXNTBypGqImE405J2565dvjafglHU) (YouTube)
* **Interactive Tool:** [Ripes Visual RISC-V Simulator](https://github.com/mortbopet/Ripes) (Watch pipeline stages & data hazards live)
* **Study Protocol & Scope:** [[Core_Subjects_Study_Method_and_Visual_Sources]]

---

## Official University References
1. **M. Morris Mano**, *Computer System Architecture*, 3rd Edition, PHI Publication.
2. **William Stallings**, *Computer Organization & Architecture: Designing for Performance*, PHI Publication.
3. **John P. Hayes**, *Computer Architecture and Organization*, McGraw Hill Publication.
4. **Carl Hamacher, Zvonko Vranesic, and Safwat Zaky**, *Computer Organization*, Tata McGraw Hill Publication.
5. **V. Rajaraman & T. Radhakrishnan**, *Computer Organization and Architecture*, PHI Publication.

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