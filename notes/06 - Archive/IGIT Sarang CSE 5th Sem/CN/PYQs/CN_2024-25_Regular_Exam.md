Type : #RawNote       
Date : 2026-11-13        
Tags :  [[College]] ; [[computer networking]]   
~ ***Yash Agrawall*** ~     

---
# Computer Networks — Regular Examination 2024–25

> **Course**: Computer Networks (PCCS4307)  
> **Programme**: B.Tech (Computer Science & Engineering) — 5th Semester  
> **Time**: 03 Hours | **Maximum Marks**: 60  
> **Instructions**: Answer Question number 1 which is compulsory and any five from the rest. The figures in the right-hand margin indicate marks.

---

## [[CN Theory Syllabus]]

- **Module 1**: Data Communications, Topologies, Transmission Impairments, Nyquist & Shannon Limits, Line Coding (MLT-3).
- **Module 2**: Data Link Layer, Error Detection (Checksum), Framing (Bit-Stuffing), Multiple Access (CDMA, Walsh Matrices).
- **Module 3**: Network Layer, IP Header Fields, Addressing (Physical vs Logical).
- **Module 4**: Transport & Application Layers, Port Numbers, TCP Congestion Control, E-Mail Architecture (MIME).

---

## Questions Table

### Question 1 (Compulsory Short Answer Questions — 10 × 1 = 10 Marks)

| Q No. | Questions | Marks | BL | CO | PO |
| :---: | :--- | :---: | :---: | :---: | :---: |
| **1.a** | In which topology does data travel in one direction only, and a single break in the cable can disrupt the entire network?<br>*(a) Mesh &nbsp;&nbsp; (b) Ring &nbsp;&nbsp; (c) Star &nbsp;&nbsp; (d) Bus* | 01 | L1 | CO1 | PO1 |
| **1.b** | Differentiate between physical address (MAC) and logical address (IP). | 01 | L2 | CO1 | PO1 |
| **1.c** | ________ is a type of transmission impairment that occurs due to the different propagation speeds of each frequency that makes up the signal.<br>*(a) Attenuation &nbsp;&nbsp; (b) Distortion &nbsp;&nbsp; (c) Noise &nbsp;&nbsp; (d) All of the above* | 01 | L1 | CO2 | PO1 |
| **1.d** | Addressing technique is not required in:<br>*(a) Synchronous TDM &nbsp;&nbsp; (b) Statistical TDM &nbsp;&nbsp; (c) Both &nbsp;&nbsp; (d) None of the above* | 01 | L1 | CO2 | PO1 |
| **1.e** | A sender transmits two 8-bit words: `10101010` and `11001100`. The checksum is computed using 1's complement addition. Which of the following is the correct 8-bit checksum value appended to the message?<br>*(a) 01010011 &nbsp;&nbsp; (b) 00110011 &nbsp;&nbsp; (c) 01010101 &nbsp;&nbsp; (d) 01110101* | 01 | L3 | CO3 | PO1, PO2 |
| **1.f** | Bit-stuff the given data: `00011111110011111010001111111111`. | 01 | L3 | CO3 | PO1, PO2 |
| **1.g** | In the context to CDMA, construct the Walsh matrix $W_4$ using $W_1 = [-1]$. | 01 | L3 | CO3 | PO1, PO2 |
| **1.h** | Which one of the following fields of an IP header is NOT modified by a router?<br>*(a) Checksum &nbsp;&nbsp; (b) Source address &nbsp;&nbsp; (c) Time to Live (TTL) &nbsp;&nbsp; (d) Total length* | 01 | L1 | CO4 | PO1 |
| **1.i** | Distinguish between well-known port numbers and ephemeral port numbers. What are their ranges? | 01 | L2 | CO4 | PO1 |
| **1.j** | A web browser uses ________ transport protocol and port number ________. | 01 | L2 | CO1 | PO1, PO2 |

### Long Answer Questions (Answer any 5 from Q2 to Q6 — 5 × 10 = 50 Marks)

| Q No. | Questions | Marks | BL | CO | PO |
| :---: | :--- | :---: | :---: | :---: | :---: |
| **2** | With the help of a well-labeled diagram, describe the functionality, services, and key protocols associated with each layer of the TCP/IP network model. Further, using a suitable example, explain how the five layers work together to enable end-to-end communication between two devices over the internet. | 10 | L2, L3 | CO1 | PO1, PO2 |
| **3.a** | State the Nyquist signaling rate and Shannon capacity formulas, mentioning their significance. A communication channel has a bandwidth of $2	ext{ MHz}$ and a signal-to-noise ratio ($	ext{SNR}$) of 255. Calculate: (i) the maximum achievable bit rate of this channel, and (ii) the number of distinct signal levels required if the bandwidth is fully utilized. | 05 | L1, L3 | CO2 | PO1, PO2 |
| **3.b** | Discuss the MLT-3 line-coding scheme with the help of the "transition state diagram". Encode the bit sequence `0101110110` using this scheme and clearly illustrate the resulting digital signal. Further, discuss the key characteristics of MLT-3 and its applications in communication systems. | 05 | L2, L3 | CO2 | PO1, PO2 |
| **4** | Explain the principle of operation of CDMA and Multiple Access Protocols in wireless communication. Detail chipping sequences, orthogonal vectors, and transmitter/receiver signal reconstruction. | 10 | L2, L3 | CO3 | PO1, PO2 |
| **5** | Explain how TCP controls network congestion. Detail Slow Start, Congestion Avoidance, Fast Retransmit, and Fast Recovery with a congestion window growth graph. | 10 | L2 | CO4 | PO1, PO2 |
| **6** | With a neat diagram discuss the E-mail architecture. In what way does a browser-based E-mail (such as Gmail) differ from a traditional E-mail client (such as Outlook)? What is the role of MIME in E-mail? | 10 | L2, L3 | CO4 | PO1, PO2 |

---
