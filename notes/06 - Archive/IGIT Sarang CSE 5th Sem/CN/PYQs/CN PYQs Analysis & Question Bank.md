Type : #Note    
Date : 2026-11-13    
Tags : [[College]] ; [[computer networking]]    
Status : #complete     
~ ***Yash Agrawall*** ~     

---

# Computer Networks (CN) — PYQ Analysis & Question Bank

**Course Code:** PCCS4307 | **Semester:** 5th Semester  
**Target:** End-Semester Examination & Class Tests  
**Associated Links:** [[CN Theory Syllabus]] · [[CN Study Flow & Execution Guide]] · [[CN_2026_Internal-1]] · [[CN Class Rules]]

---

## 1. High-Yield Topic Frequency & Master Trend Analysis

### Module I: Physical Layer & Network Architecture
| Topic / Concept | Frequency | Recurring Exam Appearances & Problems |
| :--- | :---: | :--- |
| **OSI vs TCP/IP 5-Layer Model (Detailed)** | 3 | • 2024–25 Q2 (10M), 2023–24 Q2 (10M), 2023 CT-1 Q2/3<br>• Layer functionality, protocols, end-to-end communication trace |
| **Nyquist & Shannon Capacity Formulas** | 3 | • 2024–25 Q3a (5M), 2023 CT-1 Q6 (2M), 2026 Internal-1 Q6<br>• **Identical numerical:** $B = 2\text{ MHz}$, $\text{SNR} = 255 \implies C = 16\text{ Mbps}$, Signal levels $L = 16$. |
| **MLT-3 Line Coding & State Diagram** | 4 | • 2024–25 Q3b (5M), 2023–24 Q3a (5M), 2022–23 Q2b (5M), 2023 CT-1 Q7<br>• **Identical bit sequence:** `0101110110` using transition state diagram |
| **Pulse Code Modulation (PCM)** | 2 | • 2023–24 Q3b (5M), 2023 CT-1 Q8 (5M)<br>• Sampling, Quantization, Encoding steps |
| **Network Topologies (Mesh, Star, Ring, Bus)** | 3 | • 2024–25 Q1a, 2023 CT-1 Q5 ($N=20 \implies 190$ mesh, 20 star), 2022–23 Q2a (10M) |
| **Transmission Impairments (Attenuation, Distortion, Noise)** | 2 | • 2024–25 Q1c (Distortion), 2023 CT-1 Q4 |

### Module II: Data Link Layer & MAC
| Topic / Concept | Frequency | Recurring Exam Appearances & Problems |
| :--- | :---: | :--- |
| **CDMA & Walsh Matrix Generation** | 4 | • 2024–25 Q1e & Q4, 2023–24 Q4b (5M), 2022–23 Q4b (5M), 2023 CT-2 Q1 (7M)<br>• Construct Walsh matrix $W_4$ from $W_1 = [-1]$ or $[+1]$, orthogonal chipping codes |
| **CRC Error Detection & Polynomial Division** | 3 | • 2023–24 Q8a (5M), 2022–23 Q3b (5M with $x^4+x+1$), 2024–25 Q1d |
| **Bit-Stuffing & Framing** | 2 | • 2024–25 Q1d (`00011111110011111010001111111111`), 2022–23 |
| **Point-to-Point Protocol (PPP) Transition States** | 2 | • 2023–24 Q5a (5M), 2022–23 |
| **CSMA/CA vs CSMA/CD** | 2 | • 2023–24 Q4a (5M), 2022–23 |
| **Sliding Window ARQ (Go-Back-N / Selective Repeat)** | 2 | • 2023–24 Q8c (5M), 2022–23 Q8 |

### Module III: Network Layer & Addressing
| Topic / Concept | Frequency | Recurring Exam Appearances & Problems |
| :--- | :---: | :--- |
| **Subnetting & Variable Length Subnetting (VLSM)** | 3 | • 2023–24 Q5b (5M), 2023 CT-2 Q2 (8M)<br>• **Identical scenario:** Departments $D_1=30, D_2=10, D_3=50, D_4=90$ computers connected to a single router. Calculate network, broadcast, subnet mask. |
| **CIDR & Classless Addressing** | 2 | • 2022–23 Q5b (5M for `207.16.39.37/27`), 2024–25 Q1b |
| **Routing: Link State (Dijkstra) & Distance Vector (Bellman-Ford)** | 3 | • 2023–24 Q6a (Link State / Dijkstra), 2022–23 Q6 (Distance Vector / Count to Infinity) |
| **IPv4 Header Fields (TTL, Checksum, Flags)** | 3 | • 2024–25 Q1f (TTL not modified vs modified), 2023–24 Q1, 2022–23 Q7 |

### Module IV: Transport & Application Layers
| Topic / Concept | Frequency | Recurring Exam Appearances & Problems |
| :--- | :---: | :--- |
| **E-Mail Architecture & MIME (Browser vs Traditional)** | 3 | • 2024–25 Q6 (10M), 2023–24 Q7 (10M), 2022–23 Q7b<br>• Comparison between Gmail (Webmail/HTTP) vs Outlook (SMTP/POP3/IMAP) and role of MIME |
| **TCP Congestion Control (Slow Start, Additive Increase/Multiplicative Decrease)** | 2 | • 2024–25 Q5 (5M), 2022–23 Q7a (10M) |
| **Well-Known vs Ephemeral Ports** | 3 | • 2024–25 Q1g, 2023–24 Q1e, 2022–23 Q1 |
| **TCP vs UDP Mechanics** | 2 | • 2023–24 Q6b (5M), 2022–23 Q8 |
| **Domain Name System (DNS)** | 2 | • 2023–24 Q8d (5M), 2022–23 Q8 |

---

## 2. Transcribed Question Papers

### Academic Year 2024–25 (Regular / Back Paper)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PCCS4307*

#### Q1. Compulsory Short Answer Questions (10 × 1 = 10 Marks)
| Q No. | Question | Marks | Bloom's Level (BL) | Course Outcome (CO) | Program Outcome (PO) |
| :---: | :--- | :---: | :---: | :---: | :---: |
| **1.a** | In which topology does data travel in one direction only, and a single break in the cable can disrupt the entire network?<br>*(a) Mesh (b) Ring (c) Star (d) Bus* | 01 | L1 | CO1 | PO1 |
| **1.b** | Differentiate between physical address (MAC) and logical address (IP). | 01 | L2 | CO1 | PO1 |
| **1.c** | ________ is a type of transmission impairment that occurs due to the different propagation speeds of each frequency that makes up the signal.<br>*(a) Attenuation (b) Distortion (c) Noise (d) All of the above* | 01 | L1 | CO2 | PO1 |
| **1.d** | Addressing technique is not required in: <br>*(a) synchronous TDM (b) statistical TDM (c) both (d) none* | 01 | L1 | CO2 | PO1 |
| **1.e** | A sender transmits two 8-bit words: `10101010` and `11001100`. The checksum is computed using 1's complement addition. Which of the following is the correct 8-bit checksum value appended to the message?<br>*(a) 01010011 (b) 00110011 (c) 01010101 (d) 01110101* | 01 | L3 | CO3 | PO1, PO2 |
| **1.f** | Bit-stuff the given data: `00011111110011111010001111111111`. | 01 | L3 | CO3 | PO1, PO2 |
| **1.g** | In context to CDMA, construct the Walsh matrix $W_4$ using $W_1 = [-1]$. | 01 | L3 | CO3 | PO1, PO2 |
| **1.h** | Which one of the following fields of an IP header is NOT modified by a router?<br>*(a) Checksum (b) Source address (c) Time to Live (TTL) (d) Total length* | 01 | L1 | CO4 | PO1 |
| **1.i** | Distinguish between well-known port numbers and ephemeral port numbers. What are their ranges? | 01 | L2 | CO4 | PO1 |
| **1.j** | A web browser uses ________ transport protocol and port number ________. | 01 | L2 | CO1 | PO1, PO2 |

#### Long Answer Questions (Answer any 5 — 5 × 10 = 50 Marks)
- **Q2 (10 Marks):** With the help of a well-labeled diagram, describe the functionality, services, and key protocols associated with each layer of the TCP/IP network model. Further, using a suitable example, explain how the five layers work together to enable end-to-end communication between two devices over the internet. *(L2, L3 | CO1 | PO1, PO2)*
- **Q3 (a) (5 Marks):** State the Nyquist signaling rate and Shannon capacity formulas, mentioning their significance. A communication channel has a bandwidth of $2\text{ MHz}$ and a signal-to-noise ratio ($\text{SNR}$) of 255. Calculate: (i) the maximum achievable bit rate of this channel, and (ii) the number of distinct signal levels required if the bandwidth is fully utilized. *(L1, L3 | CO2 | PO1, PO2)*
- **Q3 (b) (5 Marks):** Discuss the MLT-3 line-coding scheme with the help of the "transition state diagram". Encode the bit sequence `0101110110` using this scheme and clearly illustrate the resulting digital signal. Further, discuss the key characteristics of MLT-3 and its applications in communication systems. *(L2, L3 | CO2 | PO1, PO2)*
- **Q4 (10 Marks):** Explain Multiple Access Protocols. Describe CDMA technology in detail with chipping sequences and orthogonal codes.
- **Q5 (10 Marks):** Explain how TCP controls network congestion. Detail Slow Start, Congestion Avoidance, Fast Retransmit, and Fast Recovery.
- **Q6 (10 Marks):** With a neat diagram discuss the E-mail architecture. In what way does a browser-based E-mail (such as Gmail) differ from a traditional E-mail client (such as Outlook)? What is the role of MIME in E-mail?

---

### Academic Year 2023–24 (Regular Examination)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PCCS4307*

#### Q1. Compulsory Short Answer Questions (10 × 1 = 10 Marks)
- **(a)** If a link transmits 1000 frames per second and each frame carries 10,000 bits, what is the transmission rate?
- **(b)** Which layer is responsible for process-to-process delivery in the Internet model?
- **(c)** Differentiate between synchronous and statistical Time Division Multiplexing (TDM).
- **(d)** Find the Hamming distance between code words `10001011` and `10110010`.
- **(e)** What is the significance of the TTL (Time-to-Live) field in an IPv4 datagram?
- **(f)** Differentiate between well-known and ephemeral port numbers with their respective numerical ranges.

#### Long Answer Questions (Answer any 5 — 5 × 10 = 50 Marks)
- **Q2 (10M):** Explain the OSI reference model in detail mentioning the functionality of each layer. How do the layers of the OSI model correlate to the layers of the TCP/IP model?
- **Q3 (a) (5M):** Discuss the MLT-3 line-coding scheme with the help of the "transition state diagram". Encode the bit pattern `0101110110` using the encoding scheme.
- **Q3 (b) (5M):** Explain the Pulse Code Modulation (PCM) technique in detail.
- **Q4 (a) (5M):** Explain the principle of operation of CSMA/CA.
- **Q4 (b) (5M):** Explain CDMA technology with a suitable example. In context to that, create the $W_4$ table using $W_1 = [+1]$ (or $[-1]$).
- **Q5 (a) (5M):** Explain with a diagram, the PPP transition phases. Discuss in brief the network layer protocols used by PPP to carry out the phases.
- **Q5 (b) (5M):** Suppose you own an organization having four departments $D_1, D_2, D_3, D_4$ having $30, 10, 50, 90$ computers respectively. The four departments are connected to a single router. Draw the complete subnetting structure for your organization by taking a suitable address block from Class A, B, or C. Also mention:
  - (i) Network address of the organization
  - (ii) Broadcast address of the organization
  - (iii) Net mask of the organization
  - (iv) Subnet address of each department
  - (v) Subnet broadcast address of each department
  - (vi) Subnet mask of each department
- **Q6 (a) (5M):** What is routing? Explain the Link State Routing algorithm and find the set of shortest routes from node $A$ to all other nodes in the given network.
- **Q6 (b) (5M):** What is UDP? How is it different from TCP? Explain in detail how UDP functions.
- **Q7 (10M):** Explain in detail the E-mail architecture. In what way does a browser-based E-mail (such as Gmail) differ from a traditional E-mail (such as Outlook)? What is the role of MIME in E-mail?
- **Q8 Short Notes (Answer any TWO — 2 × 5 = 10M):**
  - **(a)** CRC error detection technique
  - **(b)** Packet switching
  - **(c)** Go-Back-N ARQ
  - **(d)** Domain Name System (DNS)

---

### Academic Year 2022–23 (Regular Examination)
*Time: 3 Hours | Max Marks: 60 | Subject Code: PCCS4307*

- **Q1 (10M):** Compulsory conceptual questions on block codes, Hamming codes, subnet masks (`255.255.255.224`), maximum hosts ($2^5 - 2 = 30$), transmission media, and port addressing.
- **Q2 (10M):** Network topologies (Mesh, Star, Bus, Ring): detailed comparative analysis of advantages, disadvantages, fault tolerance, and cable length requirements.
- **Q3 (a) (5M):** MLT-3 line coding scheme and transition state diagram for `0101110110`.
- **Q3 (b) (5M):** Synchronous vs Statistical Time Division Multiplexing (TDM).
- **Q4 (a) (5M):** CRC error detection technique with polynomial $C(x) = x^4 + x + 1$ and message `1011001001001011`.
- **Q4 (b) (5M):** CDMA principle and construction of Walsh table $W_4$.
- **Q5 (a) (5M):** Classless Addressing: Given block `207.16.39.37/27`, determine:
  - First address (Network address)
  - Last address (Broadcast address)
  - Number of available host addresses
- **Q5 (b) (5M):** Distance Vector Routing (Bellman-Ford) mechanism and the Count-to-Infinity problem with solutions (Split Horizon, Poison Reverse).
- **Q6 (10M):** IPv4 header bit structure, role of TTL, fragmentation offset, flags, and header checksum.
- **Q7 (10M):** TCP Congestion Control algorithms: AIMD, slow-start threshold, and packet drop recovery.
- **Q8 (10M):** Short notes on DNS hierarchy, E-mail architecture (MIME, SMTP, POP3, IMAP), and Go-Back-N ARQ.

---

### Internal Examinations (Class Tests) 2023–24

#### 1st Class Test (Full Marks: 15 | Time: 1 Hour)
1. Which of the following ensures that data remains unmodified in transit? *(Integrity)* [1M]
2. In the TCP/IP model, data compression is performed at which layer? [1M]
3. Router packet traverse problem: Source $S \text{ --- } R \text{ --- } R \text{ --- } D$. How many times does packet visit Network Layer and Data Link Layer? *(Ans: 4 times Network Layer, 6 times Data Link Layer)* [1M]
4. Non-periodic digital signal decomposition results in composite analog signal with infinite bandwidth and continuous frequency. [1M]
5. For 20 nodes, full-duplex cable links for mesh = $\frac{20 \times 19}{2} = 190$, star = 20. [2M]
6. Channel bandwidth $B = 2\text{ MHz}$, $\text{SNR} = 255$. Calculate max bit rate ($C = B \log_2(1+\text{SNR}) = 2 \times 8 = 16\text{ Mbps}$) and signal levels ($L = 16$). [2M]
7. Encode `00011101` in Differential Manchester and MLT-3 encoding schemes. [2M]
8. Explain the Pulse Code Modulation (PCM) technique in detail. [5M]

#### 2nd Class Test (Full Marks: 15 | Time: 1 Hour)
1. Explain CDMA technology with a suitable example. In context to that, create the $W_4$ table. [7M]
2. Organization subnetting problem: Departments $D_1=30, D_2=10, D_3=50, D_4=90$ computers connected to a single router. Draw complete subnetting structure from Class A, B, or C, and list network address, broadcast address, net mask, and subnet masks. [8M]
