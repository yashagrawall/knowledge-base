
Type : #RawNote       
Date : 2026-09-27        
Tags :  [[College]] ; [[computer networking]]    
~ ***Yash Agrawall*** ~     

---
# Computer Networks (CN) — Study Flow & Execution Guide

**Course Code:** PCCS4307 | **Credits:** 3 (Theory) + 2 (Lab) = **5 Credits**  
**Target Grade:** **O (10/10)** | **Associated Notes:** [[CN Theory Syllabus]] · [[Core_Subjects_Study_Method_and_Visual_Sources]]

---

## 1. Executive Strategy & The Dual Lens

Computer Networks is the bridge between physical signals and distributed software architectures:

1. **The College Exam Lens:** Prof. Niroj Kumar Pani and BPUT exams grade heavily on standard diagrams (OSI vs TCP/IP models, sliding window sequence charts, CRC polynomial division traces, IPv4 header bit layouts, and Distance Vector routing tables).
2. **The Book Switch Strategy:** 
   * **Modules I & II (Physical & Data Link Layers):** Use **Forouzan** (4th Ed). Forouzan is unmatched for signals, CRC math, framing, and MAC protocols.
   * **Modules III & IV (Network, Transport & Application Layers):** **Switch to Kurose & Ross (9th Ed).** Kurose & Ross treats TCP and routing from a top-down systems perspective that builds true engineering depth.

---

## 2. Resource Mapping & Local Assets

| Resource Type | Source Name | Local Path / URL | Role & Switch Trigger |
| :--- | :--- | :--- | :--- |
| **Primary Syllabus Text (Lower Layers)** | **Behrouz A. Forouzan** (4th Ed) | [[Data_Communication_&_Networking-Forouzan-4th_Ed.pdf]] | **Read First for Modules I & II.** Matches the IGIT Sarang lecture sequence line-for-line. Offset: $\text{PP} = \text{BP} + 37$. |
| **Systems & Architecture Text (Upper Layers)** | **James F. Kurose & Keith W. Ross** (9th Ed) | [[Computer_Networking:_A_Top_Down_Approach-Kurose_Ross-9th_ed.pdf]] | **Switch to Kurose for Modules III & IV.** Best-in-class coverage of TCP congestion control, socket mechanics, and DNS. Offset: $\text{PP} = \text{BP} + 24$. |
| **Visual Video Lectures** | **Neso Academy** | [Neso Academy CN Playlist](https://www.youtube.com/playlist?list=PLBlnK6fEyqRgMCUAG0XRw78UA8qnv6jEx) | Crisp animated slides covering protocol flows, framing, and layer headers. |
| **Exam Fast Numericals** | **Gate Smashers** | [Gate Smashers CN Numericals](https://www.youtube.com/playlist?list=PLxCzCOWd7aiGFBD2-2joCpWOLUrDLvVV_) | Rapid mastery of CRC math, Nyquist/Shannon limits, and IP subnetting. |
| **Hands-on Inspection Tool** | **Wireshark** | Local Linux CLI (`tshark` / `wireshark`) | Inspect real SYN/ACK handshakes, window size advertisements, and packet drops live. |

---

## 3. Master Chronological Study Flow & Exact Page Mapping

### PHASE 1: Network Fundamentals, Physical Layer & Transmission (Module I)

```
[Start Here] Forouzan Ch 2 (BP 31-54 | PP 70-91)
       │ (OSI 7-Layer vs TCP/IP 5-Layer Models & Layer Functions)
       ▼ 
[Shift To] Forouzan Ch 3 (BP 57-99 | PP 94-136)
       │ (Data & Signals, Attenuation, Distortion, Noise, Nyquist & Shannon limits)
       ▼
[Shift To] Forouzan Ch 4 (BP 101-139 | PP 138-176)
       │ (Digital Transmission: Line Coding NRZ, RZ, Manchester, AMI)
       ▼
[Shift To] Forouzan Ch 6 (BP 161-189 | PP 198-226)
       │ (Multiplexing: FDM, WDM, Synchronous & Statistical TDM)
       ▼
[Finish With] Forouzan Ch 7 & 8 (BP 191-239 | PP 228-276)
         (Guided/Unguided Media & Circuit vs Packet Switching)
```

* **Step 1: Network Topologies & Layered Architectures**
  * *Resource:* Forouzan Ch 2.1–2.5 (BP 27–54 | **PP 64–91**)
  * *Subtopics:* Mesh, Star, Bus, Ring topologies; OSI 7 layers (Physical, Data Link, Network, Transport, Session, Presentation, Application); TCP/IP 5-layer model; encapsulation & decapsulation.
* **Step 2: Physical Signals, Impairments & Transmission Limits**
  * *Resource:* Forouzan Ch 3.1–3.6 (BP 57–99 | **PP 94–136**)
  * *Subtopics:* Analog vs Digital, periodic signals, Fourier analysis intuition, attenuation (dB loss), distortion, thermal noise, Nyquist maximum bit rate ($C = 2B \log_2 M$), Shannon capacity theorem ($C = B \log_2(1 + \text{SNR})$), $\text{SNR}_{\text{dB}} = 10 \log_{10} \text{SNR}$.
* **Step 3: Line Coding & Modulation**
  * *Resource:* Forouzan Ch 4.1–4.3 (BP 101–139 | **PP 138–176**)
  * *Subtopics:* Line coding schemes: Unipolar (NRZ), Polar (NRZ-L, NRZ-I, RZ, Manchester, Differential Manchester), Bipolar (AMI, B8ZS, HDB3); baseline wandering and DC component.
* **Step 4: Multiplexing & Switching**
  * *Resource:* Forouzan Ch 6.1–6.2 (BP 161–189 | **PP 198–226**) & Ch 8.1–8.4 (BP 213–239 | **PP 250–276**)
  * *Subtopics:* Frequency-Division Multiplexing (FDM), Wavelength-Division Multiplexing (WDM), Time-Division Multiplexing (Synchronous TDM vs Statistical TDM); Circuit switching vs Packet switching (Datagram vs Virtual Circuit approaches).
* **Skip List for Phase 1:**
  * Skip complex analog AM/FM radio modulation circuit schematics in Forouzan Ch 5.
  * Skip legacy telecom carrier T-carrier and SONET frame formatting in Ch 6.
* **The Dual Asset:**
  * **Systems Invariant:** The fundamental trade-off between bandwidth, transmission power, and Gaussian channel noise governed by Shannon-Hartley; differential noise rejection in twisted-pair wiring.
  * **Exam Representation:** Standard 7-layer OSI vs 5-layer TCP/IP comparison table with per-layer responsibilities, and step-by-step Shannon capacity / SNR decibel numerical calculations.

---

### PHASE 2: Data Link Layer, Error Control & MAC Protocols (Module II)

```
[Start Here] Forouzan Ch 10 (BP 267-305 | PP 304-342)
       │ (Error Detection: Parity, Checksum, CRC-16/32, Hamming Code)
       ▼ 
[Shift To] Forouzan Ch 11 (BP 307-361 | PP 344-398)
       │ (Framing, Stop-and-Wait, Go-Back-N ARQ, Selective-Repeat ARQ)
       ▼
[Shift To] Kurose & Ross Ch 6.1-6.4 (BP 389-435 | PP 413-459)
       │ (Link Layer Framing Intuition, Multiple Access & CSMA/CD)
       ▼
[Shift To] Forouzan Ch 12 (BP 363-393 | PP 400-430)
       │ (Pure/Slotted ALOHA, CSMA/CD, CSMA/CA, CDMA orthogonal codes)
       ▼
[Finish With] Forouzan Ch 13 & 15 (BP 395-419, 445-465 | PP 432-456, 482-502)
         (Ethernet IEEE 802.3 Frame & Connecting Devices: Bridges, Switches, VLANs)
```

* **Step 1: Error Detection and Correction**
  * *Resource:* Forouzan Ch 10.1–10.5 (BP 267–305 | **PP 304–342**)
  * *Subtopics:* Types of errors (single-bit vs burst), Linear block codes, Parity check, Checksum (one's complement sum), Cyclic Redundancy Check (CRC polynomial division, generator polynomial $G(x)$), Hamming code ($2^r \ge m + r + 1$, error detection and single-bit correction).
* **Step 2: Flow and Error Control Protocols (ARQ)**
  * *Resource:* Forouzan Ch 11.1–11.5 (BP 307–361 | **PP 344–398**)
  * *Subtopics:* Framing (character count, byte stuffing, bit stuffing flag `01111110`), Stop-and-Wait ARQ, Go-Back-N ARQ (sender window $2^m - 1$, receiver window 1), Selective-Repeat ARQ (sender and receiver window $2^{m-1}$), Piggybacking, HDLC frame architecture.
* **Step 3: Multiple Access Protocols**
  * *Resource:* Forouzan Ch 12.1–12.4 (BP 363–393 | **PP 400–430**) & Kurose & Ross Ch 6.3 (BP 404–420 | **PP 428–444**)
  * *Subtopics:* Random access: Pure ALOHA ($S = G e^{-2G}$, max $18.4\%$), Slotted ALOHA ($S = G e^{-G}$, max $36.8\%$), 1-Persistent / Non-Persistent / $p$-Persistent CSMA, CSMA/CD (collision detection, binary exponential backoff), CSMA/CA (RTS/CTS, NAV, IFS). Channelization: FDMA, TDMA, CDMA (Walsh codes, orthogonal chipping sequences).
* **Step 4: Wired LANs & Connecting Devices**
  * *Resource:* Forouzan Ch 13.1–13.4 (BP 395–419 | **PP 432–456**) & Ch 15.1–15.3 (BP 445–465 | **PP 482–502**)
  * *Subtopics:* Standard Ethernet IEEE 802.3 frame structure (Preamble, SFD, DA, SA, Type/Length, Payload, CRC), Repeaters, Hubs (L1), Bridges, Transparent Layer-2 Switches (learning, filtering, forwarding), Routers (L3), Gateways, Virtual LANs (VLAN IEEE 802.1Q tag).
* **Skip List for Phase 2:**
  * Skip ATM adaptation layer (AAL1–AAL5) hardware specifications.
  * Skip obsolete Token Ring (IEEE 802.5) connector wiring.
* **The Dual Asset:**
  * **Systems Invariant:** The collision detection window invariant: $T_{\text{trans}} \ge 2 \cdot T_{\text{prop}}$, which dictates minimum frame size in CSMA/CD ($64\text{ bytes}$ in Ethernet); hardware Galois field XOR shift-registers for CRC-32.
  * **Exam Representation:** Exact CRC polynomial division numerical (Dataword $\to$ Modulo-2 XOR division $\to$ Codeword check), and Go-Back-N vs. Selective Repeat window size constraints ($W_S + W_R \le 2^m$).

---

### PHASE 3: Network Layer, Addressing & Routing (Module III)

```
[Start Here] Forouzan Ch 19 (BP 549-577 | PP 586-614)
       │ (IPv4 Classful vs CIDR /n Subnetting, IPv6 128-bit architecture)
       ▼ 
[Shift To] Forouzan Ch 20 (BP 579-609 | PP 616-646)
       │ (IPv4 Header layout, Total Length, TTL, Fragmentation: Flags & Offset)
       ▼
[Shift To] Forouzan Ch 21 (BP 611-647 | PP 648-684)
       │ (ARP Request/Reply, RARP, ICMP ping/traceroute error reporting)
       ▼
[Shift To] Kurose & Ross Ch 5.1-5.4 (BP 329-365 | PP 353-389)
       │ (Routing Control Plane: Dijkstra Link-State vs Bellman-Ford Distance-Vector)
       ▼
[Finish With] Forouzan Ch 22 (BP 649-701 | PP 686-738)
         (BPUT exam routing tables & Count-to-Infinity / Split Horizon solutions)
```

* **Step 1: IP Addressing & Subnetting**
  * *Resource:* Forouzan Ch 19.1–19.3 (BP 549–577 | **PP 586–614**)
  * *Subtopics:* Classful IPv4 (Classes A, B, C, D, E), Subnetting, Subnet mask, Classless Inter-Domain Routing (CIDR $/n$), Network address calculation, Broadcast address, IPv6 128-bit hexadecimal notation and base header.
* **Step 2: Internet Protocol Datagram & Fragmentation**
  * *Resource:* Forouzan Ch 20.1–20.4 (BP 579–609 | **PP 616–646**)
  * *Subtopics:* IPv4 Header format (20–60 bytes: VER, HLEN, TOS, Total Length, Identification, Flags [DF, MF], Fragmentation Offset in 8-byte blocks, TTL, Protocol, Header Checksum), MTU constraints and fragmentation examples.
* **Step 3: Address Mapping & Network Layer Support**
  * *Resource:* Forouzan Ch 21.1–21.4 (BP 611–647 | **PP 648–684**)
  * *Subtopics:* ARP (IP-to-MAC resolution, broadcast request, unicast reply), RARP, DHCP concept, ICMP (Query and Error-reporting messages: Destination Unreachable, Time Exceeded for traceroute).
* **Step 4: Unicast Routing Protocols**
  * *Resource:* Kurose & Ross Ch 5.1–5.4 (BP 329–365 | **PP 353–389**) $\to$ Forouzan Ch 22.1–22.4 (BP 649–701 | **PP 686–738**)
  * *Subtopics:* Distance Vector Routing (Bellman-Ford algorithm, routing table exchange, Count-to-Infinity problem, Split Horizon with Poison Reverse), Link State Routing (Dijkstra's shortest path, Link State Advertisements, OSPF areas), Path Vector Routing (BGP concepts).
* **Skip List for Phase 3:**
  * Skip complex multi-hop multicast routing algorithms (DVMRP / MOSPF).
  * Skip IPv4 optional headers obscure security fields.
* **The Dual Asset:**
  * **Systems Invariant:** Distributed consensus over routing topology: Why local link-state flooding (OSPF) scales better than global distance vector gossip (RIP); MTU fragmentation penalties in modern high-speed networks.
  * **Exam Representation:** IPv4 32-bit Header bit-diagram with all 14 fields labeled, and step-by-step CIDR subnet division numerical (finding network ID, first/last host, broadcast address).

---

### PHASE 4: Transport Layer, Congestion Control & Applications (Module IV)

```
[Start Here] Kurose & Ross Ch 3.1-3.4 (BP 158-205 | PP 182-229)
       │ (Transport Services, Port Demuxing, UDP, Reliable Data Transfer rdt 1.0-3.0)
       ▼ 
[Shift To] Kurose & Ross Ch 3.5-3.7 (BP 206-261 | PP 230-285)
       │ (TCP 3-Way Handshake, Sliding Window, Flow Control, AIMD & Congestion Control)
       ▼
[Shift To] Forouzan Ch 24 (BP 761-795 | PP 798-832)
       │ (Congestion Control: Leaky Bucket vs Token Bucket algorithms)
       ▼
[Finish With] Kurose & Ross Ch 2.1-2.5 (BP 73-140 | PP 97-164) & Forouzan Ch 25-27 (PP 834-918)
         (DNS Hierarchy & Resolution, HTTP/1.1 vs HTTP/2, SMTP/POP3, FTP)
```

* **Step 1: Transport Layer Fundamentals & UDP**
  * *Resource:* Kurose & Ross Ch 3.1–3.4 (BP 158–205 | **PP 182–229**)
  * *Subtopics:* Multiplexing and demultiplexing, Port numbers (well-known, registered, dynamic), User Datagram Protocol (UDP: connectionless, 8-byte header, checksum calculation), Principles of Reliable Data Transfer (`rdt 1.0`, `rdt 2.0`, `rdt 2.1`, `rdt 3.0`).
* **Step 2: Transmission Control Protocol (TCP)**
  * *Resource:* Kurose & Ross Ch 3.5–3.6 (BP 206–238 | **PP 230–262**)
  * *Subtopics:* TCP Segment structure (Sequence Number, ACK Number, Data Offset, Flags [SYN, ACK, FIN, RST, PSH, URG], Receive Window, Checksum), 3-Way Handshake connection establishment (SYN $\to$ SYN-ACK $\to$ ACK), 4-Way Connection Teardown (FIN $\to$ ACK $\to$ FIN $\to$ ACK), TCP Sliding Window flow control, Round-Trip Time (RTT) estimation and timeout.
* **Step 3: TCP Congestion Control & Traffic Shaping**
  * *Resource:* Kurose & Ross Ch 3.7 (BP 239–261 | **PP 263–285**) & Forouzan Ch 24 (BP 761–795 | **PP 798–832**)
  * *Subtopics:* Additive Increase / Multiplicative Decrease (AIMD), Slow Start ($cwnd$ doubles every RTT), Congestion Avoidance (linear growth), Fast Retransmit (3 duplicate ACKs), Fast Recovery (TCP Reno vs TCP Tahoe); Traffic Shaping: Leaky Bucket algorithm (constant output rate) vs Token Bucket algorithm (allows burstiness).
* **Step 4: Application Layer Protocols**
  * *Resource:* Kurose & Ross Ch 2.1–2.5 (BP 73–140 | **PP 97–164**) & Forouzan Ch 25–27 (BP 797–881 | **PP 834–918**)
  * *Subtopics:* Domain Name System (DNS: recursive vs iterative queries, root/TLD/authoritative servers, RR records), Hypertext Transfer Protocol (HTTP: GET/POST, status codes 200/301/404/500, persistent vs non-persistent HTTP/1.1, pipelining), Electronic Mail (SMTP, POP3, IMAP), File Transfer Protocol (FTP: Control port 21 vs Data port 20).
* **Skip List for Phase 4:**
  * Skip SCTP (Stream Control Transmission Protocol) multi-streaming internals in Forouzan Ch 23.
  * Skip legacy TELNET NVT escape sequences.
* **The Dual Asset:**
  * **Systems Invariant:** TCP backpressure and congestion window dynamics ($cwnd$ sawtooth); why Token Bucket enables bursty API access while Leaky Bucket forces smooth traffic.
  * **Exam Representation:** Step-by-step TCP 3-Way Handshake sequence diagram with sequence and ACK numbers, TCP Header layout, and the Leaky Bucket vs Token Bucket comparison table.

---

## 4. Tactical Execution Protocol (Per 60-Min Study Session)

1. **Step 1: Visual Seed (20 Mins):** Watch the targeted Neso Academy video or Gate Smashers numerical breakdown.
2. **Step 2: Targeted Book Extraction (30 Mins):** Jump directly to the exact PDF page listed above (Forouzan for lower layers, Kurose & Ross for upper layers).
3. **Step 3: Dual Asset Note (10 Mins):** Open [[Academic Notes Template]] and record:
   - Invariant (protocol state machine / header trade-off / congestion mechanics).
   - Exam Representation (labeled packet header / sequence chart / numerical trace).
4. **Hard Stop (60 Mins Total):** Close book and move on.

---
# Reference 

0. [[CN Theory Syllabus & Course Organization.pdf]]
1. [[Chapter 01 - Introduction to Data Communication & Networking.pdf]]
2. [[Chapter 02 - Network Models.pdf]]
3. [[Chapter 03 - Data & Signals.pdf]]
4. [[Chapter 04 - Data Transmission.pdf]]
5. [[Chapter 05 - Multiplexing.pdf]]
6. [[Chapter 06 - Switching.pdf]]
7. [[Chapter 07 - Transmission Media (Assignment).pdf]]
8. [[Chapter 08 - Error Detection & Correction.pdf]]
9. [[Chapter 09 - Framing, Data Link Control & Multiple Access.pdf]]
10. [[Chapter 10 - Data Link Layer Protocols.pdf]]
11. [[Chapter 11 - Wired LANs - Ethernet.pdf]]
12. [[Chapter 12 - Wireless LAN & Bluetooth.pdf]]
13. [[Chapter 13 - Connecting Devices (Assignment).pdf]]
14. [[Chapter 14 - Virtual Circuit Networks - Frame Relay & ATM (Assignment).pdf]]
15. [[Chapter 15 - Logical Addressing.pdf]]
16. [[Chapter 16 - Network Layer Protocols.pdf]]
17. [[Chapter 17 - Routing & Forwarding.pdf]]
18. [[Chapter 18 - Port Addressing, UDP & TCP.pdf]]
19. [[Chapter 19 - Congestion Control & Quality of Service.pdf]]
20. [[Chapter 20 - Application Layer Services & Protocols.pdf]]
21. [[CN Lab Manual.pdf]]
22. [[CN Lab Syllabus.pdf]]