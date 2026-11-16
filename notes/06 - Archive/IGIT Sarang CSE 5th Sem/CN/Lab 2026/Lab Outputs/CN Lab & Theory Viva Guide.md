# Computer Networks — Comprehensive Lab & Theory Viva Voce Guide

**Target Date:** 19th November 2026  
**Course Codes:** PCCS7306 (Lab) / PCCS4307 (Theory)  
**Department:** CSEA, IGIT Sarang  
**Associated Notes:** [[CN Lab Outputs Guide]] · [[CN Lab Manual (shortened)]] · [[CN Study Flow & Execution Guide]]

---

## 1. Network Models, Physical Layer & Transmission Fundamentals

The physical layer and network architecture establish the mathematical and physical foundations of data communication, governing how raw bitstreams traverse physical media and how layered abstractions compartmentalize networking responsibilities.

### Architecture, Topologies & Layered Reference Models

**Q: What is the primary purpose of layering in computer networks?**  
**A:** Layering decomposes a complex communication system into smaller, modular, and manageable functional units. Each layer provides specific services to the layer immediately above it while hiding internal implementation details from higher layers.

**Q: Enumerate the seven layers of the OSI model from bottom to top.**  
**A:** The seven layers in order are:
1. Physical Layer (Layer 1)
2. Data Link Layer (Layer 2)
3. Network Layer (Layer 3)
4. Transport Layer (Layer 4)
5. Session Layer (Layer 5)
6. Presentation Layer (Layer 6)
7. Application Layer (Layer 7)

**Q: How does the TCP/IP model differ from the OSI reference model?**  
**A:** The OSI model is a theoretical seven-layer conceptual framework developed by ISO. The TCP/IP model is a practical implementation architecture (originally four layers, modernized into five layers) that combines the OSI Presentation and Session layers into the Application Layer, and treats the Physical and Data Link layers as the Network Access/Interface layer in the four-layer version.

**Q: Define Protocol Data Unit (PDU) and name the PDU at each layer.**  
**A:** A PDU is the specific unit of data transferred between peer entities at a given protocol layer:
* **Physical Layer:** Bit (or Symbol)
* **Data Link Layer:** Frame
* **Network Layer:** Packet (or Datagram)
* **Transport Layer:** Segment (for TCP) or User Datagram (for UDP)
* **Application Layer:** Message

**Q: What are the sizes of a MAC address, IPv4 address, IPv6 address, and Port number?**  
**A:**
* **MAC (Physical) Address:** $48\text{ bits}$ ($6\text{ bytes}$), represented in hexadecimal (e.g., `00:1A:2B:3C:4D:5E`).
* **IPv4 (Logical) Address:** $32\text{ bits}$ ($4\text{ bytes}$).
* **IPv6 Address:** $128\text{ bits}$ ($16\text{ bytes}$).
* **Port Address:** $16\text{ bits}$ ($2\text{ bytes}$), ranging from $0$ to $65535$.

**Q: If an IP address can uniquely and universally identify a node, why do we still need a MAC (physical) address?**  
**A:** The IP address specifies the *original source* and *final destination* across heterogeneous networks, whereas the MAC address is required at the Data Link Layer to move the frame from **one hop to the next hop** within the same local network segment.

**Q: What is the function of the Presentation Layer in the OSI model?**  
**A:** It handles data translation, syntax coordination, character code translation (such as ASCII to UTF-8/EBCDIC), data compression, and cryptographic encryption/decryption.

**Q: What is the responsibility of the Session Layer?**  
**A:** It establishes, manages, synchronizes (dialog control), and terminates dialogues between communicating applications, maintaining checkpoints for recovery during data transfer.

**Q: State the formula for the number of links and I/O ports in a full Mesh Topology.**  
**A:** For $n$ nodes in a fully connected mesh network:
* **Number of full-duplex physical links:** $\frac{n(n - 1)}{2}$
* **Number of I/O ports required per device:** $n - 1$

---

### Signals, Transmission Impairments & Data Rate Limits

**Q: What is the fundamental difference between an analog signal and a digital signal?**  
**A:** An analog signal is a continuous wave that varies smoothly over time with an infinite number of values within a range. A digital signal is discrete, having a finite number of defined voltage states (typically two levels, representing $0$ and $1$).

**Q: Differentiate between bit rate and baud rate.**  
**A:** Bit rate (data rate, $N$) is the number of bits transmitted per second (bps). Baud rate (signal rate, $S$) is the number of signal elements or symbols transmitted per second (Bd). They are related by:
$$S = \frac{N}{r}$$
where $r$ is the number of data elements carried by one signal element ($r = \log_2 L$, with $L$ being the number of signal levels).

**Q: What are the three primary causes of transmission impairment in physical media?**  
**A:**
* **Attenuation:** Loss of signal energy as the wave travels through a resistance-bearing medium, compensated by amplifiers or repeaters.
* **Distortion:** Alteration of signal shape occurring in composite signals because different frequency components propagate at different velocities.
* **Noise:** External electromagnetic interference (thermal noise, induced noise, crosstalk, impulse noise) corrupting the original signal.

**Q: Define Signal-to-Noise Ratio (SNR) and how it is expressed in decibels.**  
**A:** SNR is the ratio of average signal power ($P_{\text{signal}}$) to average noise power ($P_{\text{noise}}$):
$$\text{SNR} = \frac{P_{\text{signal}}}{P_{\text{noise}}}$$
In decibels:
$$\text{SNR}_{\text{dB}} = 10 \log_{10}(\text{SNR})$$

**Q: State the Nyquist Bit Rate formula and its operating constraint.**  
**A:** The Nyquist formula defines the theoretical maximum bit rate for an ideal, **noiseless** channel:
$$\text{Bit Rate} = 2B \log_2(L)$$
where $B$ is channel bandwidth in Hertz and $L$ is the number of discrete signal voltage levels used to represent data.

**Q: State the Shannon Channel Capacity theorem and its significance.**  
**A:** The Shannon theorem defines the upper theoretical capacity limit of a real-world **noisy** channel, independent of the number of signal levels:
$$C = B \log_2(1 + \text{SNR})$$
It proves that channel capacity cannot be arbitrarily increased by adding signal levels once thermal noise is present.

**Q: What is the practical relationship between Nyquist and Shannon formulas?**  
**A:** The Shannon formula establishes the upper physical data rate ceiling dictated by channel noise. The Nyquist formula is then applied to calculate the minimum number of signal levels ($L$) required to achieve that target data rate.

**Q: Differentiate between Bandwidth and Throughput.**  
**A:** Bandwidth is the maximum theoretical data carrying capacity of a link (measured in Hz or bps). Throughput is the actual measurement of data successfully delivered over the link in real-time ($T \le B$).

**Q: What is the Bandwidth-Delay Product (BDP)?**  
**A:** BDP ($B \times \text{Delay}$) represents the cross-sectional volume of a communication link, defining the maximum number of bits that can fill the transmission pipe in transit at any single moment.

---

### Line Coding & Multiplexing Techniques ([[Expt 2.1 - Polar NRZ]] – [[Expt 2.5 - Sync TDM]])

**Q: What is Line Coding and why is it necessary in digital transmission?**  
**A:** Line coding is the process of converting digital data (a sequence of binary $0$s and $1$s) into discrete digital physical voltage signals suitable for transmission over a baseband channel, ensuring clock synchronization, minimizing DC components, and providing error detection capability.

**Q: What are the two major drawbacks of Unipolar NRZ and Polar NRZ-L encoding?**  
**A:**
* **DC Component Problem (Baseline Wandering):** Long sequences of identical bits produce a non-zero average DC voltage that shifts the receiver's baseline and cannot pass through AC-coupled transformers or capacitors.
* **Lack of Synchronization:** Long strings of consecutive $0$s or $1$s provide no signal transitions, causing sender and receiver clocks to drift out of phase.

**Q: Differentiate between Polar NRZ-L and Polar NRZ-I ([[Expt 2.1 - Polar NRZ]]).**  
**A:**
* **NRZ-L (Non-Return to Zero - Level):** The signal voltage *level* directly determines the bit value (e.g., positive voltage for $0$, negative voltage for $1$).
* **NRZ-I (Non-Return to Zero - Invert):** A *transition* (inversion of voltage level) at the beginning of a bit interval represents bit $1$, while *no transition* represents bit $0$.

**Q: Why do Manchester and Differential Manchester encoding provide self-synchronization, and what are their encoding rules ([[Expt 2.2 - Manchester]])?**  
**A:** Both schemes force a guaranteed voltage transition in the exact *middle* of every bit interval, enabling the receiver to self-synchronize its clock and eliminating the DC component:
* **Polar Manchester:** A mid-bit transition from positive to negative ($+ \to -$) represents bit $0$, and negative to positive ($- \to +$) represents bit $1$.
* **Differential Manchester:** The mid-bit transition is always present for clocking; additionally, a transition at the *beginning* of the bit interval represents bit **$0$**, while *no transition* at the beginning represents bit **$1$**.

**Q: What is the penalty for using Manchester encoding?**  
**A:** It requires a baud rate equal to twice the bit rate ($r = 1/2$), which doubles the required minimum signal bandwidth compared to NRZ schemes.

**Q: What does 2B1Q stand for and how does it work ([[Expt 2.3 - 2B1Q]])?**  
**A:** **Two-Binary, One-Quaternary** (2B1Q) is a multilevel line coding scheme ($mBnL$) that groups $2\text{ bits}$ of binary data into $1\text{ quaternary signal element}$ using $L = 4$ different voltage levels ($2^2 = 4$, typically $-3, -1, +1, +3$). Because $r = 2$, it halves the baud rate ($S = N/2$), conserving transmission bandwidth in technologies like DSL.

**Q: How does MLT-3 (Multiline Transmission, 3-Level) work and where is it used ([[Expt 2.4 - MLT-3]])?**  
**A:** MLT-3 uses three voltage levels ($+V, 0, -V$):
* If the next bit is **$0$**, there is no transition.
* If the next bit is **$1$**:
  * If the current level is not $0$, the next level becomes $0$.
  * If the current level is $0$, the next level becomes the opposite of the last non-zero level (cycling $+V \to 0 \to -V \to 0$).
It reduces the worst-case fundamental frequency to $N/4$, making it ideal for Fast Ethernet (100BASE-TX) over copper cables.

**Q: Compare Synchronous TDM and Statistical TDM ([[Expt 2.5 - Sync TDM]]).**  
**A:**
* **Synchronous TDM:** Each connected input line is allocated a dedicated, fixed-duration time slot in every round-robin output frame, regardless of whether the source has data to send. If an input line has no data, its slot travels empty, wasting bandwidth.
* **Statistical (Asynchronous) TDM:** Slots are allocated dynamically on-demand only to lines with active data. Because slot ownership is not tied to fixed time positions, each transmitted slot must carry an explicit destination address header.

---

## 2. Data Link Layer, Framing & Error Control ([[Expt 3.1 - CRC]] – [[Expt 3.6 - Selective Repeat ARQ]])

The Data Link Layer transforms an unreliable raw physical transmission facility into an error-free, framed communication link between directly adjacent nodes.

### Framing Techniques ([[Expt 3.3 - Character Stuffing]] & [[Expt 3.4 - Bit Stuffing]])

**Q: What is framing and why is it required?**  
**A:** Framing divides the continuous physical bitstream into discrete, manageable data units called frames. It establishes clear boundaries (start and end) so the receiver can recognize frame boundaries, check integrity, and extract payload data.

**Q: Differentiate between Character (Byte) Stuffing and Bit Stuffing ([[Expt 3.3 - Character Stuffing]] & [[Expt 3.4 - Bit Stuffing]]).**  
**A:**
* **Character (Byte) Stuffing:** Used in character-oriented framing where special 1-byte control characters mark frame boundaries (such as `FLAG` or `DLE STX` / `DLE ETX`). If the flag byte or escape byte (`ESC` / `DLE`) appears inside the actual data payload, the sender stuffs an extra `ESC` / `DLE` byte immediately before it.
* **Bit Stuffing:** Used in bit-oriented protocols (such as HDLC) where a unique flag sequence `01111110` (six consecutive `1`s) marks the start and end of every frame. Whenever the sender encounters **five consecutive `1`s** in the payload data, it automatically stuffs a **`0`** bit immediately after them so payload data never mimics the flag. The receiver strips this stuffed `0`.

---

### Error Detection & Correction Mechanisms ([[Expt 3.1 - CRC]] & [[Expt 3.2 - Hamming Code]])

**Q: Differentiate between a single-bit error and a burst error.**  
**A:** A single-bit error corrupts only one bit in a data block. A burst error corrupts two or more bits, where the burst length is measured from the first corrupted bit to the last corrupted bit in the sequence.

**Q: Define Hamming distance and minimum Hamming distance ($d_{\min}$).**  
**A:** The Hamming distance between two binary words of equal length is the number of bit positions in which they differ, computed as the number of $1$s resulting from an exclusive-OR ($\oplus$) operation. The minimum Hamming distance ($d_{\min}$) of a code is the smallest Hamming distance between any two distinct valid codewords in the code set.

**Q: What are the conditions on $d_{\min}$ for error detection and error correction?**  
**A:**
* To detect up to $s$ errors:
$$d_{\min} \ge s + 1$$
* To correct up to $t$ errors:
$$d_{\min} \ge 2t + 1$$

**Q: How does Cyclic Redundancy Check (CRC) operate at sender and receiver ([[Expt 3.1 - CRC]])?**  
**A:**
* **Sender:** A predetermined generator polynomial (divisor) of length $n$ bits (degree $r = n - 1$) is chosen. The sender appends $n - 1$ zeros to the $m$-bit dataword and performs modulo-2 binary division (using bitwise **XOR** subtraction). The resulting $(n - 1)$-bit remainder (CRC bits) replaces the appended zeros to form the transmitted codeword.
* **Receiver:** The receiver divides the incoming codeword by the identical generator polynomial using modulo-2 XOR division. If the final remainder is all zeros, the frame is accepted as error-free; otherwise, corruption is detected and the frame is rejected.

**Q: In Hamming Code $C(7,4)$, how many data bits and parity bits are used, what is the redundancy formula, and where are parity bits placed ([[Expt 3.2 - Hamming Code]])?**  
**A:**
* There are **$m = 4\text{ data bits}$** and **$r = 3\text{ parity (redundant) bits}$**, forming a $7\text{-bit}$ codeword.
* **Redundancy Formula:** To protect $m$ data bits against single-bit errors, the number of redundant bits $r$ must satisfy:
$$2^r \ge m + r + 1$$
* **Placement:** In standard positional Hamming placement, parity bits occupy positions that are powers of $2$: **$1, 2, 4, 8, \dots$** ($2^0, 2^1, 2^2, \dots$). In systematic block code configurations (as used in standard lab implementations), parity bits $r_0, r_1, r_2$ are computed via modulo-2 XOR equations:
$$r_0 = a_0 \oplus a_1 \oplus a_2, \quad r_1 = a_1 \oplus a_2 \oplus a_3, \quad r_2 = a_0 \oplus a_1 \oplus a_3$$

**Q: How does a Hamming receiver detect and correct an erroneous bit?**  
**A:** The receiver evaluates three syndrome bits ($s_2, s_1, s_0$) by recomputing parity equations across the received codeword:
$$s_0 = a_0 \oplus a_1 \oplus a_2 \oplus r_0, \quad s_1 = a_1 \oplus a_2 \oplus a_3 \oplus r_1, \quad s_2 = a_0 \oplus a_1 \oplus a_3 \oplus r_2$$
If $(s_2, s_1, s_0) = 000$, no error occurred. If non-zero, the binary syndrome value identifies the exact corrupted bit position, allowing the receiver to invert and correct that bit.

**Q: How does Internet Checksum calculate check bits?**  
**A:** Data is divided into 16-bit words. The sender adds all 16-bit words using 1's complement arithmetic (wrapping any carry-out back into the least significant bit) and takes the 1's complement (bitwise NOT) of the sum to produce the checksum. The receiver adds all data words plus the checksum; a valid transmission yields all $1$s (`0xFFFF`), which complements to `0`.

---

### Flow & Error Control Protocols ([[Expt 3.5 - Go-Back-N ARQ]] & [[Expt 3.6 - Selective Repeat ARQ]])

**Q: Compare Stop-and-Wait, Go-Back-N, and Selective-Repeat ARQ ([[Expt 3.5 - Go-Back-N ARQ]] & [[Expt 3.6 - Selective Repeat ARQ]]).**  
**A:**
* **Stop-and-Wait ARQ:** The sender transmits $1$ frame and waits for an ACK before sending the next. If the timer expires, it retransmits. Simple, but suffers from poor link utilization when propagation delay is high.
* **Go-Back-N (GBN) ARQ:** The sender can transmit up to $N$ frames in a sliding window without waiting for an ACK. For $m$-bit sequence numbers:
  * **Sender Window Size:** $W_S = 2^m - 1$
  * **Receiver Window Size:** $W_R = 1$
  * **On Error:** Because $W_R = 1$, the receiver discards all out-of-order frames following a lost frame. Upon timeout, the sender rolls back and retransmits the lost frame **and all subsequent frames** in the window.
* **Selective-Repeat (SR) ARQ:** Both sender and receiver maintain buffers for out-of-order frames. For $m$-bit sequence numbers:
  * **Sender Window Size:** $W_S = 2^{m-1}$
  * **Receiver Window Size:** $W_R = 2^{m-1}$
  * **On Error:** The receiver buffers valid out-of-order frames, sends a NAK for the missing frame, and the sender retransmits **only the specific damaged/lost frame**.

**Q: Why must the sender window size in Go-Back-N be strictly less than $2^m$ ($W_S \le 2^m - 1$)?**  
**A:** If the sender window size were equal to $2^m$ and all ACKs in a window were lost, the sender would timeout and retransmit frame $0$ through $2^m - 1$; the receiver, having already advanced its expected sequence number back to $0$ (modulo $2^m$), would mistakenly accept the retransmitted old frame $0$ as a brand-new frame in the next cycle.

**Q: Define Piggybacking.**  
**A:** Piggybacking is an optimization technique in bidirectional data communication where an acknowledgment (ACK) for received data is attached to an outgoing data frame heading back to the sender rather than sending a separate control frame.

---

## 3. MAC Sublayer, Multiple Access Protocols & LANs ([[Expt 3.7 - CSMA-CD]])

When multiple networking nodes share a single broadcast transmission link, Media Access Control (MAC) protocols resolve access contention to prevent mutual packet destruction.

### Multiple Access Protocol Taxonomy

* **Random Access (Contention-Based):** Nodes contend for the channel dynamically; no node has priority. Includes Pure ALOHA, Slotted ALOHA, CSMA, CSMA/CD (wired Ethernet), and CSMA/CA (wireless LANs).
* **Controlled Access (Deterministic):** Nodes coordinate or are polled to grant conflict-free transmission rights. Includes Reservation, Polling, and Token Passing.
* **Channelization (Partitioning):** Channel bandwidth is partitioned in frequency, time, or orthogonal code space. Includes FDMA, TDMA, and CDMA.

---

### Random Access Protocols & CSMA/CD ([[Expt 3.7 - CSMA-CD]])

**Q: Differentiate between Pure ALOHA and Slotted ALOHA in terms of vulnerable time and maximum throughput.**  
**A:**
* **Pure ALOHA:** Stations transmit whenever data is ready. Vulnerable time $= 2T_{\text{fr}}$. Throughput $S = G e^{-2G}$, with maximum $S_{\max} = \frac{1}{2e} \approx 18.4\%$ at $G = 0.5$.
* **Slotted ALOHA:** Time is divided into discrete slots of length $T_{\text{fr}}$, and stations transmit only at slot boundaries. Vulnerable time $= T_{\text{fr}}$. Throughput $S = G e^{-G}$, with maximum $S_{\max} = \frac{1}{e} \approx 36.8\%$ at $G = 1.0$.

**Q: What are the three persistence methods in CSMA?**  
**A:**
* **1-persistent:** Continuously senses a busy channel and transmits immediately (with probability $1$) once idle. Used in standard Ethernet; has the highest collision probability when multiple stations wait simultaneously.
* **Non-persistent:** If the channel is busy, waits a random backoff duration before sensing the channel again, reducing collisions at the cost of higher delay.
* **$p$-persistent:** Used in slotted channels; when the channel is idle, transmits with probability $p$ or defers to the next time slot with probability $q = 1 - p$.

**Q: Explain how CSMA/CD operates in wired Ethernet ([[Expt 3.7 - CSMA-CD]]).**  
**A:** **CSMA/CD (Carrier Sense Multiple Access with Collision Detection)** senses the medium before transmitting ("listen before talk") and monitors the medium during transmission ("listen while talk"). If two stations transmit simultaneously and detect a collision, both immediately abort transmission, send a 48-bit jamming signal to alert all nodes, and wait a random time determined by the **Binary Exponential Backoff** algorithm.

**Q: What is the condition for collision detection in CSMA/CD (Minimum Frame Size)?**  
**A:** A sender must still be transmitting when the colliding signal from the farthest station returns; therefore, the frame transmission time ($T_{\text{fr}}$) must be at least twice the maximum end-to-end propagation delay ($T_p$):
$$T_{\text{fr}} \ge 2 \times T_p \implies \frac{\text{Minimum Frame Size}}{\text{Bandwidth}} \ge 2 \times T_p$$
For Standard Ethernet ($10\text{ Mbps}$), the minimum frame size is **$64\text{ bytes}$ ($512\text{ bits}$)**.

**Q: What is the Binary Exponential Backoff algorithm?**  
**A:** After collision number $k$, a station chooses a random integer $R$ uniformly from:
$$0 \le R \le 2^k - 1$$
and waits $R \times \text{Slot Time}$ ($51.2\ \mu\text{s}$ in 10 Mbps Ethernet) before re-sensing. For $k > 10$, the exponent is capped at $10$ ($0 \le R \le 1023$). At $k = 16$, transmission is aborted.

**Q: Why is CSMA/CD not used in Wireless LANs, and what protocol replaces it?**  
**A:** Wireless networks cannot use CSMA/CD because:
1. Wireless transceivers cannot transmit and listen simultaneously—local transmission power overwhelms weak incoming collision signals.
2. The **Hidden Terminal** and **Exposed Terminal** problems prevent all nodes from hearing every collision.  
Wireless networks (IEEE 802.11) use **CSMA/CA (Collision Avoidance)** with Interframe Spaces (SIFS/DIFS), Contention Window backoff, RTS/CTS handshakes, and the Network Allocation Vector (NAV).

---

### Channelization Protocols & Wireless Technologies

**Q: Differentiate between FDMA, TDMA, and CDMA.**  
**A:**
* **FDMA:** Divides the total spectrum into non-overlapping frequency bands assigned to individual stations.
* **TDMA:** Shares the full frequency band across stations in cyclic, non-overlapping time slots.
* **CDMA:** Allows all stations to transmit simultaneously across the entire frequency band, separating signals via orthogonal Walsh chip codes ($C_i \cdot C_i = N$ and $C_i \cdot C_j = 0$ for $i \neq j$).

**Q: What is the difference between a Bluetooth Piconet and a Scatternet?**  
**A:** A Piconet is a short-range wireless ad-hoc network with one primary (master) node and up to seven active secondary (slave) nodes. A Scatternet interconnects multiple Piconets via bridge nodes.

---

## 4. Network Layer, Addressing, Subnetting & Routing ([[Expt 4.1 - IPv4 Class]] – [[Expt 4.7 - Link State]])

The Network Layer handles host-to-host packet delivery across heterogeneous internetworks, managing logical addressing, packet fragmentation, and routing topology computation.

### IPv4 Addressing, Classes & Subnetting ([[Expt 4.1 - IPv4 Class]] – [[Expt 4.4 - VLSM]])

**Q: How do you identify IPv4 Address Classes and their Default Subnet Masks ([[Expt 4.1 - IPv4 Class]])?**  
**A:**

| Class | Leading Bits | First Octet Range | Default Subnet Mask | Default CIDR | Purpose |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Class A** | `0` | $0 - 127$ ($1 - 126$ usable) | `255.0.0.0` | `/8` | Very Large Networks |
| **Class B** | `10` | $128 - 191$ | `255.255.0.0` | `/16` | Medium-to-Large Networks |
| **Class C** | `110` | $192 - 223$ | `255.255.255.0` | `/24` | Small Local Networks |
| **Class D** | `1110` | $224 - 239$ | Undefined | Undefined | Multicasting |
| **Class E** | `1111` | $240 - 255$ | Undefined | Undefined | Research / Experimental |

*Note: `0.0.0.0` is the default route/unspecified address, and `127.0.0.0/8` (`127.0.0.1`) is reserved for local host **Loopback** testing.*

**Q: What are the Private IPv4 address ranges (RFC 1918) and what is NAT?**  
**A:**
* **NAT (Network Address Translation):** Allows hosts on a private local network to share one or more public IP addresses when communicating with the external Internet.
* **Private IP Ranges:**
  * **Class A:** `10.0.0.0/8` (`10.0.0.0` – `10.255.255.255`)
  * **Class B:** `172.16.0.0/12` (`172.16.0.0` – `172.31.255.255`)
  * **Class C:** `192.168.0.0/16` (`192.168.0.0` – `192.168.255.255`)

**Q: Given an IP address and Subnet Mask, how do you calculate the Network Address, Broadcast Address, Total IPs, and Usable Hosts ([[Expt 4.2 - Subnet Info]] & [[Expt 4.3 - Usable Hosts]])?**  
**A:**
* **Network Address:** Bitwise **AND** between the IP address and the Subnet Mask (sets all $h$ host bits to $0$).
* **Direct Broadcast Address:** Bitwise **OR** between the IP address and the inverted Subnet Mask (sets all $h$ host bits to $1$).
* **Total IP Addresses:** $2^h$, where $h = 32 - \text{prefix length}$.
* **Total Usable Hosts:** $2^h - 2$ (subtracting the Network Address and the Broadcast Address).

**Q: Given `192.168.10.0/26`, calculate the subnet mask, number of subnets, and usable hosts per subnet.**  
**A:**
* **Subnet Mask:** 26 ones $\implies$ `255.255.255.192` ($2$ bits borrowed from Class C `/24`).
* **Total Subnets:** $2^2 = 4$ subnets.
* **Usable Hosts per Subnet:** $2^{32-26} - 2 = 2^6 - 2 = 62$ usable hosts.

**Q: What is the difference between FLSM and VLSM, and what is the allocation rule for VLSM ([[Expt 4.4 - VLSM]])?**  
**A:**
* **FLSM (Fixed Length Subnet Masking):** Divides a network into equal-sized subnets using a single mask, which wastes IP addresses when departments have different sizes.
* **VLSM (Variable Length Subnet Masking):** Assigns different subnet masks (prefix lengths) to different subnets according to exact host requirements. **Rule:** Always sort and allocate subnets from the **largest host requirement to the smallest** to prevent address block overlap.

---

### IPv4 Header Structure & Fragmentation Mechanics ([[Expt 4.5 - Fragmentation]])

| Header Field | Field Width | Functional Responsibility |
| :--- | :--- | :--- |
| **Version** | 4 bits | Identifies IP version (4 for IPv4) |
| **Internet Header Length (IHL)** | 4 bits | Header length in 4-byte words ($\min = 5 \implies 20\text{ B}$, $\max = 15 \implies 60\text{ B}$) |
| **Type of Service (TOS / DSCP)** | 8 bits | Quality of service and priority handling |
| **Total Length** | 16 bits | Total length of IP datagram (header + payload) in bytes |
| **Identification** | 16 bits | Unique datagram ID shared by all fragments of the same packet |
| **Flags** | 3 bits | Bit 0 reserved ($0$); **DF** (Don't Fragment); **MF** (More Fragments: $1$ if more follow, $0$ for last) |
| **Fragment Offset** | 13 bits | Payload offset of fragment in **8-byte units** relative to original datagram |
| **Time to Live (TTL)** | 8 bits | Hop counter decremented by each router; discarded at $0$ to prevent routing loops |
| **Protocol** | 8 bits | Upper-layer protocol ($1 = \text{ICMP}$, $6 = \text{TCP}$, $17 = \text{UDP}$) |
| **Header Checksum** | 16 bits | 1's complement checksum covering the IPv4 header only |
| **Source / Destination IP** | 32 bits each | Logical IPv4 addresses of sender and final recipient |

**Q: Why is IPv4 Fragmentation needed and how is Fragment Offset calculated ([[Expt 4.5 - Fragmentation]])?**  
**A:** Every link layer enforces an **MTU (Maximum Transmission Unit)**. When an IPv4 datagram exceeds the link MTU, routers fragment the payload so each non-final fragment carries a payload byte count divisible by $8$.
$$\text{Fragment Offset} = \frac{\text{Starting Byte Index of Fragment Payload}}{8}$$
For a $4000\text{-byte}$ payload over MTU $1500$ ($20\text{-byte}$ header + $1480\text{-byte}$ max payload):
* **Fragment 1:** Bytes $0\text{–}1479$, $\text{Offset} = 0$, $\text{MF} = 1$.
* **Fragment 2:** Bytes $1480\text{–}2959$, $\text{Offset} = 1480 / 8 = 185$, $\text{MF} = 1$.
* **Fragment 3:** Bytes $2960\text{–}3999$, $\text{Offset} = 2960 / 8 = 370$, $\text{MF} = 0$.

---

### Supporting Protocols & Routing Algorithms ([[Expt 4.6 - Distance Vector]] & [[Expt 4.7 - Link State]])

**Q: What is ARP and how does it function?**  
**A:** **Address Resolution Protocol (ARP)** maps a known IPv4 address to a 48-bit MAC address on a local network. The sender broadcasts an **ARP Request** (`FF:FF:FF:FF:FF:FF`) asking who owns the target IP; the matching host replies with a unicast **ARP Reply** containing its MAC address.

**Q: Differentiate between Distance Vector Routing and Link State Routing ([[Expt 4.6 - Distance Vector]] & [[Expt 4.7 - Link State]]).**  
**A:**

| Feature | Distance Vector Routing ([[Expt 4.6 - Distance Vector]]) | Link State Routing ([[Expt 4.7 - Link State]]) |
| :--- | :--- | :--- |
| **Algorithm Used** | **Bellman-Ford** Dynamic Programming Algorithm | **Dijkstra's** Greedy Shortest Path Algorithm |
| **Topology Knowledge** | Knows only distances via **neighbors** ("routing by rumor") |Every router builds a complete map of the **entire network topology** |
| **Information Shared** | Periodically sends its complete routing table only to **immediate neighbors** | Floods small Link State Packets (LSPs) to **all routers** when link state changes |
| **Main Problem** | Slow convergence and **Count-to-Infinity** loops | Higher memory and CPU overhead |
| **Loop Prevention** | **Split Horizon** and **Poison Reverse** | Inherently loop-free once LSP database converges |
| **Protocol Example** | **RIP** (Routing Information Protocol, max hop = 15, $\infty = 16$) | **OSPF** (Open Shortest Path First) |

---

## 5. Transport Layer — UDP, TCP & Congestion Control ([[Expt 5.1 - UDP Transfer]] – [[Expt 5.3 - TCP Congestion]])

The Transport Layer manages process-to-process communication between applications running on end hosts.

### TCP vs UDP & Sockets ([[Expt 5.1 - UDP Transfer]] & [[Expt 5.2 - TCP Exchange]])

**Q: What is a Socket?**  
**A:** A socket is a communication endpoint uniquely identified by the concatenation of an **IP Address** and a **16-bit Port Number** (e.g., `192.168.1.10:80`).

**Q: Compare TCP and UDP across primary design parameters ([[Expt 5.1 - UDP Transfer]] & [[Expt 5.2 - TCP Exchange]]).**  
**A:**

| Parameter | TCP (Transmission Control Protocol) | UDP (User Datagram Protocol) |
| :--- | :--- | :--- |
| **Connection State** | Connection-oriented (3-Way Handshake) | Connectionless |
| **Reliability** | Reliable, in-order delivery via ACKs & retransmission | Unreliable, best-effort delivery |
| **Abstraction** | Continuous byte stream | Discrete independent datagrams |
| **Header Size** | Variable: $20\text{ to }60\text{ bytes}$ | Fixed: **$8\text{ bytes}$** (Src Port, Dst Port, Length, Checksum) |
| **Flow & Congestion Control** | Yes ($\text{rwnd}$ sliding window + $\text{cwnd}$ AIMD) | None |
| **Typical Applications** | HTTP, HTTPS, FTP, SSH, SMTP | DNS, DHCP, SNMP, VoIP, Live Streaming |

**Q: What are the six control flags in the TCP header?**  
**A:** `URG` (Urgent Pointer valid), `ACK` (Acknowledgment valid), `PSH` (Push data immediately), `RST` (Reset connection), `SYN` (Synchronize sequence numbers), and `FIN` (Finish/close connection).

**Q: How does TCP establish and terminate a connection?**  
**A:**
* **3-Way Handshake (Establishment):**
  1. **SYN:** Client sends `SYN = 1`, $\text{Seq} = x$.
  2. **SYN + ACK:** Server replies with `SYN = 1, ACK = 1`, $\text{Seq} = y, \text{Ack} = x + 1$.
  3. **ACK:** Client replies with `ACK = 1`, $\text{Seq} = x + 1, \text{Ack} = y + 1$.
* **4-Way Handshake (Termination):** Each direction closes independently via `FIN` $\to$ `ACK`, followed by the server's `FIN` $\to$ `ACK`, with the client waiting in `TIME_WAIT` ($2 \times \text{MSL}$).

---

### TCP Flow Control & Congestion Control ([[Expt 5.3 - TCP Congestion]])

**Q: What is the difference between Flow Control and Congestion Control?**  
**A:**
* **Flow Control:** Prevents a fast sender from overwhelming a **slow receiver's buffer** using the receiver's advertised window ($\text{rwnd}$).
* **Congestion Control:** Prevents senders from overwhelming **intermediate network routers/links** using the congestion window ($\text{cwnd}$).
* **Effective Send Window:** $\text{swnd} = \min(\text{rwnd}, \text{cwnd})$.

**Q: What are the 3 phases of TCP Congestion Control ([[Expt 5.3 - TCP Congestion]])?**  
**A:**
1. **Slow Start (Exponential Growth):** $\text{cwnd}$ starts at $1\text{ MSS}$ and **doubles** every RTT ($\text{cwnd} = 1, 2, 4, 8, \dots$) until $\text{cwnd} \ge \text{ssthresh}$ (Slow Start Threshold).
2. **Congestion Avoidance (Additive Increase):** Once $\text{cwnd} \ge \text{ssthresh}$, $\text{cwnd}$ grows **linearly** by $+1\text{ MSS}$ per RTT.
3. **Congestion Detection (Multiplicative Decrease):**
   * **On Timeout (Severe Congestion — TCP Tahoe/Reno):** Set $\text{ssthresh} = \frac{\text{cwnd}}{2}$, reset $\text{cwnd} = 1\text{ MSS}$, and re-enter **Slow Start**.
   * **On 3 Duplicate ACKs (Mild Congestion — Fast Retransmit & Fast Recovery in TCP Reno):** Set $\text{ssthresh} = \frac{\text{cwnd}}{2}$, set $\text{cwnd} = \text{ssthresh}$ (or $\text{ssthresh} + 3$), immediately retransmit the missing segment, and continue in **Congestion Avoidance**.

**Q: Differentiate between Leaky Bucket and Token Bucket traffic shaping algorithms.**  
**A:**
* **Leaky Bucket:** Converts bursty incoming traffic into a strictly **constant output rate**; drops packets if the queue overflows.
* **Token Bucket:** Accumulates tokens at a fixed rate up to bucket capacity, allowing **controlled bursts** at higher speeds as long as tokens are available.

---

## 6. Application Layer, Well-Known Ports & Cryptography ([[Expt 6.1 - DNS Client]] & [[Expt 6.2 - RSA Cipher]])

### DNS & Application Layer Protocols ([[Expt 6.1 - DNS Client]])

**Q: What is DNS, and what is the difference between Recursive and Iterative DNS queries ([[Expt 6.1 - DNS Client]])?**  
**A:**
* **DNS (Domain Name System):** Translates human-readable domain names (e.g., `www.google.com`) into IP addresses over **Port 53** (UDP for standard queries, TCP for zone transfers).
* **Recursive Query:** The client asks its local DNS resolver for the final IP address, and the resolver queries other servers (Root $\to$ TLD $\to$ Authoritative) on the client's behalf.
* **Iterative Query:** Each queried DNS server returns a referral to the *next* server down the hierarchy if it does not hold the authoritative answer, and the querying host contacts each server in turn.

**Q: What are the well-known port numbers for common Application Layer protocols?**  
**A:**

| Protocol | Port Number | Transport | Standard Operational Role |
| :--- | :--- | :--- | :--- |
| **FTP Data / Control** | 20 / 21 | TCP | File Transfer Payload (Port 20) & Control Commands (Port 21) |
| **SSH** | 22 | TCP | Secure encrypted remote shell login |
| **Telnet** | 23 | TCP | Unencrypted plaintext remote terminal login |
| **SMTP** | 25 | TCP | Push protocol for sending/relaying email |
| **DNS** | 53 | UDP / TCP | Domain name resolution (UDP) & zone transfers (TCP) |
| **DHCP Server / Client** | 67 / 68 | UDP | Dynamic host IP allocation (Server = 67, Client = 68) |
| **HTTP / HTTPS** | 80 / 443 | TCP | Web hypertext transfer (80 = plaintext, 443 = TLS/SSL) |
| **POP3 / IMAP** | 110 / 143 | TCP | Pull protocols for retrieving/synchronizing email |
| **SNMP** | 161 | UDP | Simple Network Management Protocol |

---

### Cryptography & RSA Algorithm ([[Expt 6.2 - RSA Cipher]])

**Q: Differentiate between Symmetric and Asymmetric Key Cryptography.**  
**A:**
* **Symmetric Cryptography (e.g., DES, AES):** Uses the **same secret key** for both encryption and decryption. Computationally fast, but requires a secure channel for key distribution.
* **Asymmetric Cryptography (e.g., RSA):** Uses a mathematically linked key pair—a **Public Key** for encryption and a **Private Key** for decryption. Solves the key exchange problem but is computationally slower.

**Q: How are keys generated, encrypted, and decrypted in the RSA algorithm ([[Expt 6.2 - RSA Cipher]])?**  
**A:**
1. Choose two distinct prime numbers $p$ and $q$.
2. Compute the modulus: $n = p \times q$.
3. Compute Euler's totient function: $\phi(n) = (p - 1)(q - 1)$.
4. Choose public exponent $e$ such that $1 < e < \phi(n)$ and $\gcd(e, \phi(n)) = 1$.
5. Compute private exponent $d$ such that $(d \times e) \pmod{\phi(n)} = 1$.
6. **Public Key:** $(e, n)$ | **Private Key:** $(d, n)$.
7. **Encryption** of plaintext $M$ ($M < n$):
$$C = M^e \pmod n$$
8. **Decryption** of ciphertext $C$:
$$M = C^d \pmod n$$

---

## 7. Practical CLI Troubleshooting Commands & Interconnecting Devices ([[Expt 1.2 - Basic Commands]])

### Basic Network Command-Line Tools ([[Expt 1.2 - Basic Commands]])

**Q: What do the essential Windows and Linux network diagnostic commands do?**  
**A:**
* **`ipconfig` (Windows) / `ip addr show` (Linux):** Displays IPv4/IPv6 addresses, subnet masks, and default gateways. (`ipconfig /all` shows MAC addresses, DHCP servers, and DNS settings; `/release` and `/renew` manage DHCP leases; `/flushdns` clears the DNS cache).
* **`ping <host>`:** Tests host reachability and Round-Trip Time (RTT) using **ICMP Echo Request** (Type 8) and **ICMP Echo Reply** (Type 0) packets.
* **`tracert <host>` (Windows) / `tracepath` or `traceroute` (Linux):** Discovers the hop-by-hop router path to a destination by sending packets with incrementally increasing **TTL** values ($1, 2, 3, \dots$) and recording the routers that return **ICMP Time Exceeded** messages.
* **`netstat -ano` (Windows) / `ss -tuln` (Linux):** Displays active TCP/UDP connections, listening sockets (`-a`/`-l`), numerical IP/port addresses (`-n`), and owning Process IDs (`-o`).
* **`nslookup <domain>`:** Queries the configured DNS server to resolve a domain name to its IP address (or vice versa).
* **`arp -a` (Windows) / `ip neigh show` (Linux):** Displays the local ARP cache table mapping IPv4 addresses to physical 48-bit MAC addresses.

---

### Network Interconnecting Devices

| Device | OSI Layer | Collision Domain | Broadcast Domain | Core Forwarding Mechanism |
| :--- | :--- | :--- | :--- | :--- |
| **Repeater** | Layer 1 (Physical) | Single (extends link) | Single | Regenerates attenuated signals bit-by-bit |
| **Hub** | Layer 1 (Physical) | **Single** across all ports | Single | Multiport repeater; broadcasts bits to every port |
| **Bridge** | Layer 2 (Data Link) | **Separate per port** | Single | Software filtering using MAC address tables |
| **Switch** | Layer 2 (Data Link) | **Separate per port** | Single | Hardware ASIC frame switching by destination MAC |
| **Router** | Layer 3 (Network) | Separate per interface | **Separate per interface** | Routes IP packets across networks using routing tables |
| **Gateway** | Layers 4 – 7 | Separate | Separate | Translates between incompatible protocol stacks |

**Q: What is the difference between a Collision Domain and a Broadcast Domain?**  
**A:**
* **Collision Domain:** A network segment where frames transmitted simultaneously by two nodes collide (e.g., all ports of a **Hub** share one collision domain, whereas each port on a **Switch** is its own collision domain).
* **Broadcast Domain:** The set of all nodes that receive a Layer-2 broadcast frame (`FF:FF:FF:FF:FF:FF`). Switches forward broadcasts across all ports (unless partitioned into **VLANs** under **IEEE 802.1Q**); **Routers** do not forward broadcasts and thus separate broadcast domains.
