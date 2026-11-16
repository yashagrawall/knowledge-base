# Computer Networks Comprehensive Viva Voce Preparation Guide

An oral examination in computer networks evaluates conceptual understanding, precise technical terminology, exact mathematical formulas, and protocol mechanics. In a viva setting, examiners expect direct, structured, and technically rigorous answers that connect theoretical principles with practical implementations. This guide provides a comprehensive question bank of probable short viva questions and high-yield answers organized systematically across all layers of the networking protocol stack, laboratory experiments, and command-line diagnostic utilities.

---

## 1. Network Models, Physical Layer & Transmission Fundamentals

The physical layer and network architecture establish the mathematical and physical foundations of data communication, governing how raw bitstreams traverse physical media and how layered abstractions compartmentalize networking responsibilities.

### Architecture & Layered Reference Models

**Q: What is the primary purpose of layering in computer networks?**  
**A:** Layering decomposes a complex communication system into smaller, modular, and manageable functional units. Each layer provides specific services to the layer immediately above it while hiding internal implementation details from higher layers.

**Q: Enumerate the seven layers of the OSI model from bottom to top.**  
**A:** The seven layers in order are:
1. Physical Layer
2. Data Link Layer
3. Network Layer
4. Transport Layer
5. Session Layer
6. Presentation Layer
7. Application Layer

**Q: How does the TCP/IP model differ from the OSI reference model?**  
**A:** The OSI model is a theoretical seven-layer conceptual framework developed by ISO. The TCP/IP model is a practical implementation architecture (originally four layers, modernized into five layers) that combines the OSI Presentation and Session layers into the Application Layer, and treats the Physical and Data Link layers as the Network Access/Interface layer in the four-layer version.

**Q: Define Protocol Data Unit (PDU) and name the PDU at each layer.**  
**A:** A PDU is the specific unit of data transferred between peer entities at a given protocol layer:
* **Physical Layer:** Bit
* **Data Link Layer:** Frame
* **Network Layer:** Packet (or Datagram)
* **Transport Layer:** Segment (for TCP) or User Datagram (for UDP)
* **Application Layer:** Message

**Q: What is the function of the Presentation Layer in the OSI model?**  
**A:** It handles data translation, syntax coordination, character code translation (such as ASCII to EBCDIC), data compression, and cryptographic encryption/decryption.

**Q: What is the responsibility of the Session Layer?**  
**A:** It establishes, manages, synchronizes, and terminates dialogues between communicating applications, maintaining checkpoints for recovery during data transfer.

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
**A:** The Nyquist formula defines the theoretical maximum bit rate for an ideal, noiseless channel:
$$\text{Bit Rate} = 2B \log_2(L)$$
where $B$ is channel bandwidth in Hertz and $L$ is the number of discrete signal voltage levels used to represent data.

**Q: State the Shannon Channel Capacity theorem and its significance.**  
**A:** The Shannon theorem defines the upper theoretical capacity limit of a real-world noisy channel, independent of the number of signal levels:
$$C = B \log_2(1 + \text{SNR})$$
It proves that channel capacity cannot be arbitrarily increased by adding signal levels once thermal noise is present.

**Q: What is the practical relationship between Nyquist and Shannon formulas?**  
**A:** The Shannon formula establishes the upper physical data rate ceiling dictated by channel noise. The Nyquist formula is then applied to calculate the minimum number of signal levels ($L$) required to achieve that target data rate.

**Q: Differentiate between Bandwidth and Throughput.**  
**A:** Bandwidth is the maximum theoretical data carrying capacity of a link (measured in Hz or bps). Throughput is the actual measurement of data successfully delivered over the link in real-time ($T \le B$).

**Q: What is the Bandwidth-Delay Product (BDP)?**  
**A:** BDP ($B \times \text{Delay}$) represents the cross-sectional volume of a communication link, defining the maximum number of bits that can fill the transmission pipe in transit at any single moment.

---

### Line Coding & Multiplexing Techniques

**Q: Why is line coding necessary in digital transmission?**  
**A:** Line coding converts a sequence of binary digits ($0$s and $1$s) into discrete physical voltage levels suitable for transmission over a baseband channel, ensuring synchronization, minimizing DC components, and providing error detection capability.

**Q: What are the two major drawbacks of Unipolar NRZ and Polar NRZ-L encoding?**  
**A:**
* **DC Component Problem:** Long sequences of identical bits produce a non-zero average DC voltage that cannot pass through AC-coupled transformers or capacitors.
* **Lack of Synchronization:** Long strings of consecutive $0$s or $1$s provide no signal transitions, causing sender and receiver clocks to drift out of phase.

**Q: Compare Polar NRZ-L and Polar NRZ-I.**  
**A:** In NRZ-L (Level), the signal voltage level directly determines the bit value (positive voltage for $0$, negative for $1$). In NRZ-I (Invert), the signal inverts its voltage level at the beginning of the bit interval when a bit $1$ is encountered, with no transition for bit $0$.

**Q: Why do Manchester and Differential Manchester encoding provide self-synchronization?**  
**A:** Both schemes force a guaranteed voltage transition in the exact middle of every bit interval. In Manchester, a transition from positive to negative represents bit $0$, and negative to positive represents bit $1$. In Differential Manchester, the mid-bit transition provides clocking, while an inversion at the start of the bit interval represents $0$ (no transition represents $1$).

**Q: What is the penalty for using Manchester encoding?**  
**A:** It requires a baud rate equal to twice the bit rate ($r = 1/2$), which doubles the required signal bandwidth compared to NRZ schemes ($B = N$ Hz).

**Q: Explain the working of 2B1Q line coding.**  
**A:** 2B1Q (Two-Binary, One-Quaternary) is a multilevel scheme that encodes a block of two binary data bits into one quaternary signal element ($L = 4$ voltage levels: $-3, -1, +1, +3$). Because $r = 2$, it halves the baud rate ($S = N/2$), conserving transmission bandwidth in technologies like DSL.

**Q: What is MLT-3 line coding and where is it used?**  
**A:** Multiline Transmission, Three-Level (MLT-3) cycles through three voltage levels ($+V, 0, -V, 0$). It transitions to the next state only when encountering a bit $1$, and remains constant for bit $0$. It produces a worst-case fundamental frequency of $N/4$, making it ideal for Fast Ethernet (100BASE-TX) over copper cables.

**Q: Compare Synchronous TDM and Statistical TDM.**  
**A:**
* **Synchronous TDM:** Each connected input line is allocated a dedicated, fixed-duration time slot in every round-robin output frame. If an input line has no data to transmit, its slot travels empty, wasting bandwidth.
* **Statistical (Asynchronous) TDM:** Slots are allocated dynamically on-demand only to lines with active data. Because slot ownership is not tied to fixed time positions, each transmitted slot must carry an explicit destination address header.

---

## 2. Data Link Layer, Framing & Error Control

The Data Link Layer transforms an unreliable raw physical transmission facility into an error-free, framed communication link between directly adjacent nodes.

### Framing Techniques

**Q: What is framing and why is it required?**  
**A:** Framing divides the continuous physical bitstream into discrete, manageable data units called frames. It establishes clear boundaries (start and end) so the receiver can recognize frame boundaries, check integrity, and extract payload data.

**Q: Explain the mechanism of Bit Stuffing.**  
**A:** Bit stuffing is used in bit-oriented protocols (such as HDLC). A unique flag sequence `01111110` marks the beginning and ending of every frame. To prevent payload data from accidentally mimicking the flag, the sender scans the stream and automatically injects a dummy `0` bit immediately after any sequence of five consecutive `1`s. The receiver strips this stuffed `0` upon detecting five consecutive `1`s followed by a `0`.

**Q: Explain Character (Byte) Stuffing.**  
**A:** In byte-oriented protocols, special 1-byte control characters mark frame boundaries (such as `DLE STX` for Start of Text and `DLE ETX` for End of Text). If the actual payload contains a byte identical to `DLE` (Data Link Escape), the sender inserts an extra escape character (`DLE`) immediately before it. The receiver strips the first `DLE` upon receiving two consecutive `DLE` bytes.

---

### Error Detection & Correction Mechanisms

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

**Q: How does Cyclic Redundancy Check (CRC) operate at sender and receiver?**  
**A:**
* **Sender:** A predetermined generator polynomial of degree $r$ (length $r+1$) is chosen. The sender appends $r$ zeros to the $m$-bit dataword and performs modulo-2 binary division (using bitwise XOR). The resulting $r$-bit remainder is appended to the original dataword to form the transmitted codeword.
* **Receiver:** The receiver divides the incoming $(m+r)$-bit codeword by the identical generator polynomial using modulo-2 division. If the final remainder is all zeros, the frame is error-free; otherwise, transmission corruption is detected and the frame is rejected.

**Q: In Hamming Code $C(7,4)$, how many data bits and parity bits are used, and how are parity bits positioned?**  
**A:** $C(7,4)$ encodes $m = 4$ data bits with $r = 3$ redundant parity bits to form a 7-bit codeword. In standard systematic block code configurations (such as standard laboratory implementations), parity bits $r_0, r_1, r_2$ are computed using linear modulo-2 parity equations:
$$r_0 = a_0 \oplus a_1 \oplus a_2$$
$$r_1 = a_1 \oplus a_2 \oplus a_3$$
$$r_2 = a_0 \oplus a_1 \oplus a_3$$

**Q: How does a Hamming receiver detect and correct an erroneous bit?**  
**A:** The receiver evaluates three syndrome bits ($s_2, s_1, s_0$) by recomputing parity equations across received codeword positions:
$$s_0 = a_0 \oplus a_1 \oplus a_2 \oplus r_0$$
$$s_1 = a_1 \oplus a_2 \oplus a_3 \oplus r_1$$
$$s_2 = a_0 \oplus a_1 \oplus a_3 \oplus r_2$$
If $(s_2, s_1, s_0) = 000$, no error occurred. If non-zero, the binary syndrome value uniquely maps to the exact bit index of the corrupted bit, allowing the receiver to correct it by inverting that bit.

**Q: How does Internet Checksum calculate check bits?**  
**A:** Data is divided into 16-bit words. The sender adds all 16-bit words using 1's complement arithmetic (carrying the end-around carry back into the lowest-order bit) and inverts the final sum to produce the checksum. The receiver adds all data words plus the checksum; a valid transmission produces a result of all $1$s (or $0$ after final inversion).

---

### Flow & Error Control Protocols

**Q: What is Stop-and-Wait ARQ and what is its primary operational drawback?**  
**A:** The sender transmits a single frame, stops, and keeps a local copy while awaiting an acknowledgment (ACK) from the receiver. If the acknowledgment timer expires before an ACK arrives, the sender retransmits the frame. Its drawback is low link utilization because the channel remains completely idle during the entire round-trip propagation time.

**Q: Explain the window sizing rules for Go-Back-N ARQ.**  
**A:** For an $m$-bit sequence number space ($0$ to $2^m - 1$):
* **Sender Window Size:** $S_{\text{size}} = 2^m - 1$
* **Receiver Window Size:** $R_{\text{size}} = 1$  
If the sender window size were allowed to equal $2^m$, an entire window of lost ACKs would cause the sender to retransmit original frames that the receiver would mistakenly accept as brand-new duplicate frames.

**Q: What happens in Go-Back-N when an intermediate frame in a sequence is lost?**  
**A:** Because the receiver window size is strictly $1$, the receiver discards all subsequent arriving out-of-order frames without buffering them. Upon acknowledgment timeout, the sender must roll back and retransmit the entire window of unacknowledged frames starting from the missing frame.

**Q: How does Selective-Repeat ARQ overcome Go-Back-N inefficiency?**  
**A:**
* **Sender Window Size:** $S_{\text{size}} = 2^{m-1}$
* **Receiver Window Size:** $R_{\text{size}} = 2^{m-1}$  
The receiver maintains an internal buffer to hold valid out-of-order frames. It sends Negative Acknowledgments (NAK) for missing frames, and the sender retransmits only the specific corrupted or lost frames rather than the entire window.

**Q: Define Piggybacking.**  
**A:** Piggybacking is an optimization technique in bidirectional data communication where an acknowledgment for received data is attached to an outgoing outbound data frame rather than sending a dedicated, standalone ACK control frame.

---

## 3. MAC Sublayer, Multiple Access Protocols & LANs

When multiple networking nodes share a single broadcast transmission link, Media Access Control (MAC) protocols resolve access contention to prevent mutual packet destruction.

### Multiple Access Protocol Taxonomy

The protocols governing access to shared communication channels are classified into three primary operational categories:

* **Random Access (Contention-Based):** Nodes contend for the channel; no node has priority. Includes Pure ALOHA, Slotted ALOHA, CSMA, CSMA/CD (used in wired Ethernet), and CSMA/CA (used in wireless networks).
* **Controlled Access (Deterministic):** Nodes consult one another or a central controller to determine transmission rights. Includes Reservation, Polling, and Token Passing.
* **Channelization (Partitioning):** Channel bandwidth is shared in frequency, time, or coding space. Includes FDMA, TDMA, and CDMA.

---

### Random Access Protocols

**Q: Differentiate between Pure ALOHA and Slotted ALOHA in terms of vulnerable time and maximum throughput.**  
**A:**
* **Pure ALOHA:** Stations transmit whenever they have data. The vulnerable time is twice the frame transmission time ($2T_{\text{fr}}$). Maximum theoretical throughput is $18.4\%$ ($S_{\max} = \frac{1}{2e} \approx 0.184$ at $G = 0.5$).
* **Slotted ALOHA:** Time is divided into discrete slots equal to $T_{\text{fr}}$, and stations can transmit only at the beginning of a slot. The vulnerable time is halved to $T_{\text{fr}}$. Maximum theoretical throughput doubles to $36.8\%$ ($S_{\max} = \frac{1}{e} \approx 0.368$ at $G = 1.0$).

**Q: What is Carrier Sense Multiple Access (CSMA) and what is its core rule?**  
**A:** CSMA requires stations to "sense before transmit." A station checks the physical carrier line: if the medium is busy, it defers transmission; if idle, it proceeds based on its persistence strategy.

**Q: Compare 1-persistent, Non-persistent, and p-persistent CSMA.**  
**A:**
* **1-persistent:** The station continuously senses a busy line; the moment it detects an idle channel, it transmits immediately with probability $p = 1$. It has the highest collision rate when multiple waiting stations fire at once.
* **Non-persistent:** If the line is busy, the station waits a random backoff interval before sensing the medium again, reducing collisions but introducing channel idle latency.
* **p-persistent:** Used in slotted channels. The station continuously senses until idle, then transmits with probability $p$, or defers to the next slot with probability $1-p$.

**Q: Explain how CSMA/CD operates in wired Ethernet.**  
**A:** In CSMA/CD (Carrier Sense Multiple Access with Collision Detection), stations monitor the line continuously while transmitting. If two stations transmit concurrently, their electrical signals collide, doubling the channel energy level. Upon detecting this condition, both stations abort transmission immediately, transmit an electrical jamming signal to notify the network, and enter Binary Exponential Backoff before attempting retransmission.

**Q: Why does CSMA/CD require a minimum frame size, and what is the formula?**  
**A:** A transmitting station must continue transmitting long enough to detect a collision returning from the furthest point on the cable before the frame finishes sending. Thus, frame transmission time ($T_{\text{fr}}$) must be at least twice the maximum end-to-end propagation delay ($T_p$):
$$T_{\text{fr}} \ge 2T_p \implies \text{Minimum Frame Length} = 2 \times \text{Bandwidth} \times T_p$$
In standard 10 Mbps Ethernet, this evaluates to 512 bits (64 bytes).

**Q: What is the Binary Exponential Backoff algorithm?**  
**A:** After collision number $k$, a station selects a random integer backoff multiplier $R$ from the range:
$$0 \le R \le 2^k - 1$$
The station waits $R \times \text{Slot Time}$ before re-sensing the channel. After 10 collisions, the maximum range ceiling is capped at $2^{10} - 1 = 1023$. If collisions reach $k_{\max} = 16$, transmission is aborted and an error is reported.

**Q: Why cannot CSMA/CD be used in wireless networks, and what protocol replaces it?**  
**A:** In wireless environments, signal strength attenuates rapidly over distance. The high transmission power of a local wireless antenna completely drowns out any faint colliding signal from a distant transmitter (the dynamic range problem), making hardware collision detection impossible. Wireless networks replace it with **CSMA/CA (Collision Avoidance)**.

**Q: How does CSMA/CA prevent collisions in IEEE 802.11?**  
**A:** CSMA/CA uses four coordinated avoidance mechanisms:
* **Interframe Spaces:** Stations must wait an idle period called DIFS (Distributed Interframe Space) before initiating backoff.
* **Contention Window:** Stations choose a random slotted countdown timer to space out transmissions.
* **RTS/CTS Handshake:** The sender transmits a short Request-to-Send (RTS) packet; the receiver replies with Clear-to-Send (CTS), reserving the channel and overcoming the hidden terminal problem.
* **Network Allocation Vector (NAV):** RTS/CTS control frames contain a duration field. All listening stations set an internal timer (NAV) during which they refrain from sensing or accessing the medium.

---

### Channelization Protocols & Wireless Technologies

**Q: Differentiate between FDMA, TDMA, and CDMA.**  
**A:**
* **FDMA:** Divides the total available bandwidth into non-overlapping frequency bands, dedicating one continuous frequency band to each station.
* **TDMA:** Allocates the entire frequency channel bandwidth to each station during designated, cyclic, non-overlapping time slots.
* **CDMA:** All stations transmit continuously and simultaneously across the entire frequency spectrum, separating transmissions mathematically using orthogonal chip codes.

**Q: State the two core mathematical properties of CDMA Walsh orthogonal chip sequences.**  
**A:** For orthogonal chip sequences $C_i$ and $C_j$ assigned to $N$ stations:
1. Inner product of any sequence with itself equals $N$:
$$C_i \cdot C_i = N$$
2. Inner product of two distinct orthogonal sequences equals zero:
$$C_i \cdot C_j = 0 \quad (\text{for } i \neq j)$$

**Q: What is the difference between a Bluetooth Piconet and a Scatternet?**  
**A:** A Piconet is a short-range wireless ad-hoc network consisting of one primary (master) node and up to seven active secondary (slave) nodes. A Scatternet is formed by interconnecting multiple Piconets, where a node operates as a master in one Piconet and as a slave in another.

---

## 4. Network Layer, Addressing, Subnetting & Routing

The Network Layer handles host-to-host packet delivery across heterogeneous internetworks, managing logical addressing, packet fragmentation, and routing topology computation.

### IPv4 Addressing & Architecture

**Q: What is the size of an IPv4 address and how is it represented?**  
**A:** An IPv4 address is 32 bits (4 bytes) long, represented in dotted-decimal notation as four decimal octets separated by periods (e.g., `192.168.1.1`), with each octet ranging from 0 to 255.

**Q: Outline the class boundaries, leading bits, and default masks of classful IPv4 addressing.**  
**A:**

| Class | Leading Bits | First Octet Range | Default Subnet Mask | Default CIDR | Purpose |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Class A** | `0` | $1 - 126$ | `255.0.0.0` | `/8` | Very Large Networks |
| **Class B** | `10` | $128 - 191$ | `255.255.0.0` | `/16` | Medium-to-Large Networks |
| **Class C** | `110` | $192 - 223$ | `255.255.255.0` | `/24` | Small Local Networks |
| **Class D** | `1110` | $224 - 239$ | Undefined | Undefined | Multicast Groups |
| **Class E** | `1111` | $240 - 255$ | Undefined | Undefined | Experimental / Reserved |

*Note: The `127.X.X.X` network is reserved exclusively for host loopback diagnostic testing.*

**Q: What are the reserved private IPv4 address ranges defined in RFC 1918?**  
**A:**
* **Class A:** `10.0.0.0` to `10.255.255.255` (`10.0.0.0/8`)
* **Class B:** `172.16.0.0` to `172.31.255.255` (`172.16.0.0/12`)
* **Class C:** `192.168.0.0` to `192.168.255.255` (`192.168.0.0/16`)

**Q: Within any IP subnet, which two host addresses cannot be assigned to physical machines?**  
**A:**
* **Network Address:** The first address where all host bits are $0$, identifying the subnet itself.
* **Direct Broadcast Address:** The last address where all host bits are $1$, used to broadcast to all devices on that specific subnet.

---

### Subnetting & CIDR Calculations

**Q: Given the network `192.168.10.0/26`, calculate the subnet mask, total number of subnets, and number of usable host addresses per subnet.**  
**A:**
* **Subnet Mask:** A `/26` prefix has 26 consecutive ones: `255.255.255.192`.
* **Borrowing Bits:** In Class C (default `/24`), 2 bits are borrowed ($s = 2$).
* **Total Subnets:** $2^s = 2^2 = 4$ subnets.
* **Host Bits:** $h = 32 - 26 = 6$ bits.
* **Total Addresses per Subnet:** $2^6 = 64$.
* **Usable Hosts per Subnet:** $2^h - 2 = 64 - 2 = 62$ usable hosts.

**Q: What is Variable Length Subnet Masking (VLSM) and why is it used?**  
**A:** VLSM allows network engineers to assign different subnet masks to subnets within the same overall address block. Rather than forcing a uniform mask across the entire organization, subnets are sized according to individual host density requirements, eliminating IPv4 address waste.

---

### IPv4 Header Structure & Fragmentation Mechanics

The IPv4 datagram header contains critical control fields that coordinate routing, lifetime, and fragmentation:

| Header Field | Field Width | Functional Responsibility |
| :--- | :--- | :--- |
| **Version** | 4 bits | Identifies IP version (always 4 for IPv4) |
| **Internet Header Length (IHL)** | 4 bits | Header length in 4-byte multiples (minimum 5, maximum 15) |
| **Type of Service (TOS / DSCP)** | 8 bits | Quality of service and priority handling |
| **Total Length** | 16 bits | Total length of IP packet (header plus data) in bytes |
| **Identification** | 16 bits | Unique sequence token matching fragments of the same datagram |
| **Flags** | 3 bits | Bit 0 reserved; Bit 1 = DF (Don't Fragment); Bit 2 = MF (More Fragments) |
| **Fragment Offset** | 13 bits | Position of fragment payload in **8-byte units** relative to original data |
| **Time to Live (TTL)** | 8 bits | Hop count limit decremented by each router; drops at 0 to kill loops |
| **Protocol** | 8 bits | Identifies higher layer protocol (e.g., 6 for TCP, 17 for UDP, 1 for ICMP) |
| **Header Checksum** | 16 bits | 1's complement checksum validating header integrity |
| **Source IP Address** | 32 bits | IPv4 address of originating sender |
| **Destination IP Address** | 32 bits | IPv4 address of ultimate destination |

**Q: What is the minimum and maximum size of an IPv4 packet header?**  
**A:** The minimum size is 20 bytes (when IHL = 5). The maximum size is 60 bytes (when IHL = 15, accommodating up to 40 bytes of optional parameters).

**Q: How is Fragment Offset computed during packet fragmentation?**  
**A:** Fragment offset measures the data offset in 8-byte (64-bit) units:
$$\text{Fragment Offset} = \frac{\text{Byte Offset of Data Payload}}{8}$$
For example, if an unfragmented datagram carries 4000 bytes of data and is split across links with MTU 1500 (20-byte IP header + 1480 data bytes):
* **Fragment 1:** Bytes 0 to 1479, $\text{Offset} = 0$, $\text{MF} = 1$.
* **Fragment 2:** Bytes 1480 to 2959, $\text{Offset} = 1480 / 8 = 185$, $\text{MF} = 1$.
* **Fragment 3:** Bytes 2960 to 3999, $\text{Offset} = 2960 / 8 = 370$, $\text{MF} = 0$.

**Q: What is the Time to Live (TTL) field and what problem does it solve?**  
**A:** TTL is an 8-bit counter that limits packet lifespan to prevent undeliverable packets from looping endlessly in routing loops. Every traversing router decrements the TTL value by at least $1$. When TTL drops to $0$, the router discards the packet and sends an ICMP Time Exceeded message back to the source.

---

### Supporting Protocols & Routing Algorithms

**Q: What is ARP and how does it function?**  
**A:** Address Resolution Protocol (ARP) dynamically resolves a known logical IP address to a physical layer MAC hardware address on a local link. The source broadcasts an **ARP Request** (`FF:FF:FF:FF:FF:FF`); the target host recognizing its IP replies with a unicast **ARP Reply** containing its MAC address.

**Q: Differentiate between Distance Vector Routing and Link State Routing.**  
**A:**
* **Distance Vector (such as RIP):** Based on the Bellman-Ford algorithm. Each router shares its complete routing table only with directly attached neighbors at periodic intervals ("tells its neighbors about the world"). Suffers from slow convergence and the Count-to-Infinity problem.
* **Link State (such as OSPF):** Based on Dijkstra's Shortest Path First (SPF) algorithm. Each router floods the state and link costs of its directly attached links to every router across the entire autonomous system ("tells the world about its neighbors"). Every node constructs an identical network topology graph, ensuring loop-free routing and rapid convergence.

**Q: Explain the Count-to-Infinity problem and how Split Horizon resolves it.**  
**A:** In Distance Vector routing, when a link to a destination fails, two adjacent nodes can enter a recursive loop passing outdated distance metrics back and forth, slowly incrementing costs until reaching an artificial infinity ceiling (typically 16 in RIP). **Split Horizon** prevents this by forbidding a router from advertising a routing path back out through the interface from which it learned that route.

---

## 5. Transport Layer Protocols, TCP Lifecycle & Congestion Control

The Transport Layer manages true end-to-end (process-to-process) logical communication between software applications executing on remote computing hosts.

### TCP vs UDP Architecture

**Q: Compare TCP and UDP across primary design parameters.**  
**A:**

| Parameter | TCP (Transmission Control Protocol) | UDP (User Datagram Protocol) |
| :--- | :--- | :--- |
| **Connection State** | Connection-Oriented (Three-Way Handshake) | Connectionless |
| **Reliability** | Guaranteed (ACKs, Retransmission, Checksums) | Unreliable (Best-effort delivery) |
| **Data Stream** | Continuous Byte Stream | Discrete Independent Datagrams |
| **Header Overhead** | 20 to 60 Bytes | Fixed 8 Bytes |
| **Flow & Congestion Control** | Supported (Sliding Window & AIMD) | None |
| **Primary Use Cases** | Web (HTTP/HTTPS), File Transfer (FTP), Mail (SMTP) | DNS, VoIP, Video Streaming, DHCP |

**Q: Explain the fields of the 8-byte UDP header.**  
**A:** The UDP header consists of four 16-bit fields:
1. Source Port (16 bits)
2. Destination Port (16 bits)
3. Total Length (16 bits, header plus payload data)
4. Checksum (16 bits, optional in IPv4, mandatory in IPv6)

**Q: What are the six primary control flags in the TCP header?**  
**A:**
* **URG:** Urgent pointer field is valid.
* **ACK:** Acknowledgment number field is valid.
* **PSH:** Push function; requests immediate buffer delivery to the application.
* **RST:** Reset the connection due to an unrecoverable error.
* **SYN:** Synchronize sequence numbers during connection establishment.
* **FIN:** Terminate the connection gracefully.

---

### TCP Connection Establishment & Termination

**Q: Describe the step-by-step operation of the TCP Three-Way Handshake.**  
**A:**
1. **Step 1 (SYN):** The client initiates connection by sending a TCP segment with the `SYN` flag set, choosing an Initial Sequence Number ($ISN_c = x$). Client state transitions to `SYN-SENT`.
2. **Step 2 (SYN + ACK):** The server accepts by replying with both `SYN` and `ACK` flags set, establishing its own sequence number ($ISN_s = y$) and acknowledging the client's sequence:
$$\text{Acknowledgment Number} = x + 1$$
Server state transitions to `SYN-RCVD`.
3. **Step 3 (ACK):** The client confirms connection by sending an `ACK` segment with sequence $x + 1$ and acknowledgment $y + 1$. Both endpoints transition to `ESTABLISHED`.

**Q: How does TCP terminate an active connection (Four-Way Handshake)?**  
**A:** TCP connections are full-duplex and must be closed independently in each direction:
1. Client sends `FIN` to close its sending direction, transitioning to `FIN-WAIT-1`.
2. Server responds with `ACK`, entering `CLOSE-WAIT`; client enters `FIN-WAIT-2`.
3. When server finishes sending pending data, it transmits its own `FIN`, entering `LAST-ACK`.
4. Client replies with `ACK`, entering the `TIME_WAIT` state (typically $2 \times \text{MSL}$) to ensure the final ACK arrives before fully terminating.

---

### TCP Flow Control & Congestion Control Mechanics

**Q: How does TCP calculate the usable Send Window ($swnd$)?**  
**A:** TCP dynamically sizes the send window as the minimum of the receiver's advertised window ($rwnd$, preventing receiver buffer overflow) and the network's congestion window ($cwnd$, preventing network link collapse):
$$swnd = \min(rwnd, cwnd)$$

**Q: Describe the three primary phases of TCP Congestion Control.**  
**A:**
* **Phase 1: Slow Start:** Transmission begins with a congestion window of $1 \text{ MSS}$. For each received ACK round, the sender doubles $cwnd$ exponentially ($1 \to 2 \to 4 \to 8$) until reaching the slow start threshold ($ssthresh$).
* **Phase 2: Congestion Avoidance:** Once $cwnd \ge ssthresh$, growth shifts to linear Additive Increase, increasing $cwnd$ by $1 \text{ MSS}$ per Round Trip Time (RTT).
* **Phase 3: Congestion Detection:**
  * **Upon Retransmission Timeout (Severe Congestion):**
    $$ssthresh = \frac{cwnd}{2}, \quad cwnd = 1 \text{ MSS}$$
    TCP resets to the Slow Start phase.
  * **Upon 3 Duplicate ACKs (Mild Congestion / Fast Retransmit):**
    $$ssthresh = \frac{cwnd}{2}, \quad cwnd = ssthresh$$
    TCP immediately retransmits the missing segment and resumes linear Congestion Avoidance without resetting to 1.

**Q: Differentiate between Leaky Bucket and Token Bucket traffic shaping algorithms.**  
**A:**
* **Leaky Bucket:** Shapes variable bursty input traffic into a strictly constant, uniform output data rate. If the incoming buffer overflows, excess packets are discarded immediately.
* **Token Bucket:** Generates tokens into a bucket at a fixed rate. Transmissions consume tokens. If the system was idle, tokens accumulate up to the bucket capacity, permitting controlled bursts of traffic at full wire speed.

---

## 6. Application Layer Services, Well-Known Ports & Security

The Application Layer provides direct user-facing network services, standard abstraction interfaces, and end-to-end message security.

### DNS & Core Application Protocols

**Q: What is the primary role of the Domain Name System (DNS) and what transport protocol does it use?**  
**A:** DNS translates human-readable domain hostnames (e.g., `google.com`) into routable 32-bit IP addresses. It operates over **UDP port 53** for standard client-server queries (for low latency and low overhead), and **TCP port 53** for zone transfers between primary and secondary nameservers.

**Q: Differentiate between Recursive and Iterative DNS queries.**  
**A:**
* **Recursive Query:** The client tasks the local DNS resolver to return the definitive IP address. The resolver takes full responsibility for querying root, TLD, and authoritative nameservers on the client's behalf.
* **Iterative Query:** The contacted DNS server returns the best referral address it has (e.g., pointing to the `.com` TLD server) if it does not own the record, requiring the client resolver to issue subsequent queries down the chain itself.

**Q: Why does FTP use two separate ports?**  
**A:** File Transfer Protocol (FTP) separates control commands from actual data payload:
* **Port 21 (Control Connection):** Transmits user commands, authentication credentials, and status responses out-of-band; remains open throughout the session.
* **Port 20 (Data Connection):** Dynamically opens and closes exclusively for transferring file payloads and directory listings.

**Q: Differentiate between SMTP, POP3, and IMAP.**  
**A:**
* **SMTP (Port 25):** A push protocol used to transfer email messages from client to server, and between intermediate mail transfer agents.
* **POP3 (Port 110):** A pull protocol that downloads emails from the server to a local client and deletes them from the server by default.
* **IMAP (Port 143):** A pull protocol that synchronizes email headers and messages while keeping the master mailbox stored on the server, permitting access across multiple client devices.

---

### Well-Known Port Numbers Master Table

Examiners frequently test quick-fire recall of standard protocol port numbers:

| Protocol | Port Number | Underlying Transport | Standard Operational Role |
| :--- | :--- | :--- | :--- |
| **FTP Data** | 20 | TCP | Active data file payload transfer |
| **FTP Control** | 21 | TCP | Command channel and connection management |
| **SSH** | 22 | TCP | Secure encrypted remote login shell |
| **Telnet** | 23 | TCP | Unencrypted plaintext remote terminal access |
| **SMTP** | 25 | TCP | Mail transfer agent sending / relaying |
| **DNS** | 53 | UDP / TCP | Name resolution (UDP) / Zone transfers (TCP) |
| **DHCP Server** | 67 | UDP | Dynamic Host Configuration Server broadcast listener |
| **DHCP Client** | 68 | UDP | Client receiving IP configuration assignments |
| **HTTP** | 80 | TCP | World Wide Web unencrypted hypertext transfer |
| **POP3** | 110 | TCP | Post Office Protocol email retrieval |
| **IMAP** | 143 | TCP | Internet Message Access Protocol email sync |
| **HTTPS** | 443 | TCP | Secure hypertext web access using TLS/SSL |

---

### Cryptography & RSA Mechanics

**Q: What is the fundamental difference between Symmetric and Asymmetric key cryptography?**  
**A:** In symmetric cryptography (e.g., AES, DES), the identical secret key is used for both encryption and decryption, requiring a secure key exchange mechanism. In asymmetric cryptography (e.g., RSA), a mathematically linked key pair is used: a public key for encryption and a private key kept secret by the owner for decryption.

**Q: Explain the mathematical steps to generate RSA public and private keys.**  
**A:**
1. Select two large prime numbers $p$ and $q$.
2. Compute the modulus:
$$n = p \times q$$
3. Calculate Euler's totient function:
$$\phi(n) = (p - 1)(q - 1)$$
4. Select a public exponent $e$ such that $1 < e < \phi(n)$ and $\gcd(e, \phi(n)) = 1$.
5. Calculate the private decryption exponent $d$ such that:
$$d \times e \equiv 1 \pmod{\phi(n)} \implies d = e^{-1} \pmod{\phi(n)}$$
* **Public Key:** $(e, n)$
* **Private Key:** $(d, n)$

**Q: State the RSA encryption and decryption formulas.**  
**A:**
* **Encryption (Plaintext $m$ to Ciphertext $c$):**
$$c = m^e \pmod n$$
* **Decryption (Ciphertext $c$ to Plaintext $m$):**
$$m = c^d \pmod n$$

---

## 7. Practical Lab Experiments, CLI Troubleshooting Commands & Interconnecting Devices

Practical viva examinations focus on diagnostic commands, hardware device classifications, and simulation algorithms implemented during laboratory coursework.

### Basic Network Command-Line Tools

**Q: What is the purpose of the `ipconfig` command and what do `/all`, `/release`, and `/renew` do?**  
**A:** `ipconfig` displays basic IPv4/IPv6 addresses, subnet masks, and default gateways for all active network adapters:
* `ipconfig /all`: Displays comprehensive adapter details including MAC physical addresses, DHCP lease timestamps, and DNS server addresses.
* `ipconfig /release`: Releases the current dynamic IP address assigned by the DHCP server.
* `ipconfig /renew`: Requests a new IP configuration lease from the DHCP server.
* `ipconfig /flushdns`: Purges the local Windows DNS client resolver cache.

**Q: How does `ping` determine network reachability and round-trip time?**  
**A:** `ping` generates ICMP Echo Request messages (Type 8) to the target host and listens for returning ICMP Echo Reply messages (Type 0). It calculates the elapsed round-trip time (RTT) in milliseconds and reports packet loss percentages.

**Q: How does `tracert` discover the hop-by-hop path to a destination?**  
**A:** `tracert` exploits the IPv4 TTL field. It sends packets with TTL starting at $1$. The first router decrements TTL to $0$, drops the packet, and returns an ICMP Time Exceeded message, revealing its IP. `tracert` increments TTL to $2, 3, 4, \dots$ until the final destination replies with an ICMP Echo Reply.

**Q: What information does `netstat -ano` provide?**  
**A:**
* `-a`: Displays all active network connections and listening ports.
* `-n`: Displays IP addresses and port numbers in numerical form rather than attempting hostname resolution.
* `-o`: Displays the owning Process Identifier (PID) associated with each connection.

**Q: What is the purpose of the `arp -a` command?**  
**A:** It displays the local host's Address Resolution Protocol (ARP) table cache, showing recently resolved IP-to-physical MAC address bindings along with allocation types (dynamic or static).

**Q: What does the `nslookup` command do?**  
**A:** `nslookup` queries configured DNS name servers directly to resolve domain names to IP addresses (forward lookup) or IP addresses back to canonical hostnames (reverse lookup).

---

### Network Interconnecting Devices

Examiners frequently ask students to categorize networking hardware by operational OSI layer and broadcast/collision domain boundaries:

| Device | Operating OSI Layer | Collision Domain Handling | Broadcast Domain Handling | Core Forwarding Intelligence |
| :--- | :--- | :--- | :--- | :--- |
| **Repeater** | Layer 1 (Physical) | Extends single collision domain | Extends single broadcast domain | Regenerates electrical/optical signals |
| **Hub** | Layer 1 (Physical) | Single collision domain (All ports share collision) | Single broadcast domain | Multiport repeater; broadcasts every bit to all ports |
| **Bridge** | Layer 2 (Data Link) | Separates into distinct collision domains | Single broadcast domain | Forwards frames based on software MAC address table |
| **Switch** | Layer 2 (Data Link) | Separates each port into dedicated collision domain | Single broadcast domain | Hardware ASIC switching; self-learns source MAC addresses |
| **Router** | Layer 3 (Network) | Dedicated collision domain per interface | **Separates broadcast domains** (Stops broadcasts) | Forwards IP packets using routing algorithms (OSPF, RIP) |
| **Gateway** | Layer 4 – 7 (Upper) | Dedicated domain | Separates broadcast domains | Translates disparate protocol stacks and architectures |

**Q: What is a Collision Domain vs a Broadcast Domain?**  
**A:**
* **Collision Domain:** A physical network segment where data packets can collide with one another if transmitted concurrently (such as all ports on a shared hub).
* **Broadcast Domain:** The collection of all networking devices that receive a broadcast frame (`FF:FF:FF:FF:FF:FF`) transmitted by any node within the segment. Switches forward broadcasts to all ports; only routers terminate broadcast domains.

**Q: What is a Virtual LAN (VLAN) and what IEEE standard governs it?**  
**A:** A VLAN creates a logical segmentation of a physical switched network into multiple isolated broadcast domains independent of physical cabling. Governed by **IEEE 802.1Q**, switches append a 4-byte tagging header containing a 12-bit VLAN Identifier (VID) to identify frame membership across trunk links.
