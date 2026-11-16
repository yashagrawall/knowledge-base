# Computer Networks Lab & Theory Viva Guide
**Target Date:** 19th November 2026  
**Course Codes:** PCCS7306 (Lab) / PCCS4307 (Theory)  
**Department:** CSEA, IGIT Sarang  

---

## Section 1: Networking Devices & Basic Commands (Expt 1.1 & 1.2)

**1. At which OSI layers do a Repeater, Hub, Switch, Bridge, Router, and Gateway operate?**
*   **Physical Layer (Layer 1):** Repeater, Hub
*   **Data Link Layer (Layer 2):** Bridge, Switch
*   **Network Layer (Layer 3):** Router
*   **All 7 Layers (or Transport & above):** Gateway

**2. What is the difference between a Hub and a Switch?**
*   A **Hub** is a Layer 1 broadcast device (sends incoming data to all ports) and has a single collision domain.
*   A **Switch** is a Layer 2 intelligent device that uses MAC addresses to forward frames only to the destination port, creating separate collision domains for each port.

**3. What protocol does the `ping` command use?**
*   It uses **ICMP** (Internet Control Message Protocol), specifically sending *ICMP Echo Request* packets and waiting for *ICMP Echo Reply* packets.

**4. What is the purpose of `tracert` (or `traceroute`) and how does it work?**
*   It displays the path (routers/hops) and transit delay of packets to a destination. It works by sending packets with incrementally increasing **TTL (Time-To-Live)** values ($TTL = 1, 2, 3, \dots$) and listening for *ICMP Time Exceeded* messages from routers along the path.

**5. What do the following commands do?**
*   `ipconfig`: Displays the IP address, subnet mask, and default gateway of the network adapters. (`ipconfig /all` shows MAC address and DHCP details).
*   `netstat`: Displays active TCP/UDP connections, listening ports (`-a`), numerical addresses (`-n`), and owning Process IDs (`-o`).
*   `nslookup`: Queries the DNS server to map a domain name to an IP address or vice versa.
*   `arp -a`: Displays the ARP cache table, which maps IP addresses to Physical (MAC) addresses.

**6. What are the sizes of a MAC address, IPv4 address, IPv6 address, and Port number?**
*   **MAC (Physical) Address:** $48\text{ bits}$ ($6\text{ bytes}$), represented in hexadecimal.
*   **IPv4 (Logical) Address:** $32\text{ bits}$ ($4\text{ bytes}$).
*   **IPv6 Address:** $128\text{ bits}$ ($16\text{ bytes}$).
*   **Port Address:** $16\text{ bits}$ ($2\text{ bytes}$), ranging from $0$ to $65535$.

**7. If an IP address can uniquely and universally identify a node, why do we still need a MAC (physical) address?**
*   The IP address specifies the *source* and *final destination* across networks, whereas the MAC address is required at the Data Link Layer to move the frame from **one hop to the next hop** within the same local network.

---

## Section 2: Physical Layer, Line Coding & Multiplexing (Expt 2.1 – 2.5)

**8. What is Line Coding?**
*   It is the process of converting digital data (binary $0$s and $1$s) into digital signals for transmission over a communication medium.

**9. Differentiate between Polar NRZ-L and Polar NRZ-I (Expt 2.1).**
*   **NRZ-L (Non-Return to Zero - Level):** The voltage *level* determines the bit value (e.g., positive voltage for $0$, negative for $1$).
*   **NRZ-I (Non-Return to Zero - Invert):** A *transition* (inversion of voltage) at the beginning of a bit interval represents a $1$, while *no transition* represents a $0$.

**10. What is the main disadvantage of NRZ coding, and how does Manchester coding solve it (Expt 2.2)?**
*   **Disadvantage:** Long sequences of $0$s or $1$s cause a loss of synchronization (clock recovery fails) and baseline wandering.
*   **Solution:** **Manchester** and **Differential Manchester** have a guaranteed transition in the *middle* of every bit period, making them **self-synchronizing** with no DC component.

**11. What is the rule for Differential Manchester coding (Expt 2.2)?**
*   There is *always* a transition in the middle of the bit for synchronization. To represent a **$0$**, there is a transition at the beginning of the bit interval; to represent a **$1$**, there is no transition at the beginning.

**12. What does 2B1Q stand for (Expt 2.3)?**
*   **Two-Binary, One-Quaternary**. It is a multilevel line coding scheme that groups $2\text{ bits}$ of data into $1\text{ signal element}$ using $4$ different voltage levels ($2^2 = 4$).

**13. How does MLT-3 (Multiline Transmission, 3-Level) work (Expt 2.4)?**
*   It uses three voltage levels ($+V, 0, -V$).
*   If the next bit is **$0$**, there is no transition.
*   If the next bit is **$1$**:
    *   If the current level is not $0$, the next level becomes $0$.
    *   If the current level is $0$, the next level becomes the opposite of the last non-zero level.

**14. What is Synchronous TDM (Expt 2.5)?**
*   In **Synchronous Time Division Multiplexing**, each input connection is allotted a fixed time slot in the output frame, regardless of whether the source has data to send or not (which can lead to empty slots).

**15. State the formulas for Mesh Topology links and Data Rate Limits.**
*   **Mesh Links:** For $n$ nodes, number of links $= \frac{n(n-1)}{2}$, and I/O ports per device $= n - 1$.
*   **Nyquist Bit Rate (Noiseless channel):** $\text{BitRate} = 2 \times B \times \log_2(L)$
*   **Shannon Capacity (Noisy channel):** $C = B \times \log_2(1 + \text{SNR})$

---

## Section 3: Data Link Layer — Framing, Error Control & MAC (Expt 3.1 – 3.7)

**16. How does CRC (Cyclic Redundancy Check) work (Expt 3.1)?**
*   It is based on binary division (using **XOR** subtraction). If the generator polynomial (divisor) has $n\text{ bits}$ (degree $n-1$), we append $n-1$ zeros to the dataword, divide by the generator, and replace the appended zeros with the $(n-1)$-bit **remainder** (CRC bits). At the receiver, if the remainder is all zeros, the data is accepted.

**17. In Hamming Code $C(7,4)$, how many data bits and parity bits are there, and where are the parity bits placed (Expt 3.2)?**
*   There are **$4\text{ data bits}$** and **$3\text{ parity (redundant) bits}$**, making a $7\text{-bit}$ codeword.
*   Parity bits are placed at positions that are powers of $2$: **$1, 2, \text{ and } 4$** ($2^0, 2^1, 2^2$).
*   The formula to find the number of redundant bits $r$ for $m$ data bits is: $2^r \ge m + r + 1$.

**18. Differentiate between Character (Byte) Stuffing and Bit Stuffing (Expt 3.3 & 3.4).**
*   **Character Stuffing:** Used in character-oriented framing. If the **Flag** byte or **ESC** (Escape) byte appears in the actual data payload, an extra `ESC` byte is stuffed before it.
*   **Bit Stuffing:** Used in bit-oriented protocols (like HDLC) where the flag is `01111110` (six $1$s). Whenever the sender encounters **five consecutive $1$s** in the data, it automatically stuffs a **$0$** bit after them so the data never mimics the flag.

**19. Compare Stop-and-Wait, Go-Back-N, and Selective-Repeat ARQ (Expt 3.5 & 3.6).**
*   **Stop-and-Wait:** Sender sends $1$ frame and waits for an ACK before sending the next.
*   **Go-Back-N (GBN):** Sender can send up to $N$ frames without an ACK. If one frame is lost/damaged, the receiver discards all subsequent frames and the sender must retransmit the lost frame **and all following frames** in the window.
    *   For $m$-bit sequence numbers: Sender Window Size $= 2^m - 1$, Receiver Window Size $= 1$.
*   **Selective-Repeat (SR):** Only the specific lost or damaged frame is retransmitted. Out-of-order frames are buffered at the receiver.
    *   For $m$-bit sequence numbers: Sender Window Size $=$ Receiver Window Size $= 2^{m-1}$.

**20. What is Piggybacking?**
*   Instead of sending a separate control frame for an ACK, the receiver attaches (piggybacks) the acknowledgment onto an outgoing data frame heading back to the sender, improving bidirectional efficiency.

**21. What is CSMA/CD and why is it not used in Wireless LANs (Expt 3.7)?**
*   **CSMA/CD (Carrier Sense Multiple Access with Collision Detection)** senses the medium before transmitting ("listen before talk") and monitors the medium during transmission ("listen while talk"). If a collision is detected, it aborts and sends a jamming signal.
*   It is **not used in wireless networks** because wireless transceivers cannot transmit and listen at the same time (due to high transmission power drowning out incoming signals) and because of the *Hidden/Exposed Terminal Problem*. Wireless networks use **CSMA/CA (Collision Avoidance)** instead.

**22. What is the condition for collision detection in CSMA/CD (Minimum Frame Size)?**
*   The transmission time ($T_{fr}$) must be at least twice the maximum propagation time ($T_p$):
    $$T_{fr} \ge 2 \times T_p \implies \frac{\text{Minimum Frame Size}}{\text{Bandwidth}} \ge 2 \times T_p$$
*   For Standard Ethernet ($10\text{ Mbps}$), the minimum frame size is **$64\text{ bytes}$ ($512\text{ bits}$)**.

**23. What are the 3 persistence methods in CSMA?**
*   **$1$-persistent:** Continuously senses a busy channel and transmits immediately (with probability $1$) once idle. (Used in Ethernet).
*   **Non-persistent:** If busy, waits a random amount of time before sensing the channel again.
*   **$p$-persistent:** Used in slotted channels; when idle, transmits with probability $p$ or waits for the next slot with probability $q = 1 - p$.

---

## Section 4: Network Layer — IPv4, Subnetting, Fragmentation & Routing (Expt 4.1 – 4.7)

**24. How do you identify IPv4 Address Classes and their Default Subnet Masks (Expt 4.1)?**
*   **Class A:** $0\text{ – }127$ (Leading bit `0`) | Default Mask: `255.0.0.0` (`/8`)
*   **Class B:** $128\text{ – }191$ (Leading bits `10`) | Default Mask: `255.255.0.0` (`/16`)
*   **Class C:** $192\text{ – }223$ (Leading bits `110`) | Default Mask: `255.255.255.0` (`/24`)
*   **Class D:** $224\text{ – }239$ (Leading bits `1110`) | Used for **Multicasting** (No subnet mask)
*   **Class E:** $240\text{ – }255$ (Leading bits `1111`) | Reserved for **Research/Experimental**

**25. Given an IP address and Subnet Mask, how do you find the Network Address, Broadcast Address, and Usable Hosts (Expt 4.2 & 4.3)?**
*   **Network Address:** Perform bitwise **AND** between the IP address and the Subnet Mask (all host bits become $0$).
*   **Direct Broadcast Address:** Set all host bits to **$1$** (or bitwise **OR** with the inverted subnet mask).
*   **Total IP Addresses in Subnet:** $2^h$ (where $h = 32 - \text{prefix length}$, i.e., number of host bits).
*   **Total Usable Hosts:** $2^h - 2$ (We subtract $2$ because the first address is the *Network Address* and the last is the *Broadcast Address*).

**26. What is the difference between FLSM and VLSM (Expt 4.4)?**
*   **FLSM (Fixed Length Subnet Masking):** Divides a network into subnets of equal size using the same subnet mask, often wasting IP addresses.
*   **VLSM (Variable Length Subnet Masking):** Allows subnets of different sizes with different subnet masks based on the actual number of hosts required in each department/segment, conserving IP space. (Hint: Always allocate from the *largest* host requirement to the *smallest*).

**27. Why is IPv4 Fragmentation needed, and which header fields are used for it (Expt 4.5)?**
*   Every data link layer has an **MTU (Maximum Transmission Unit)**. If an IPv4 datagram is larger than the MTU, it must be fragmented.
*   **Header fields used:**
    1.  **Identification ($16\text{ bits}$):** All fragments of the same datagram share the same ID.
    2.  **Flags ($3\text{ bits}$):** Reserved bit ($0$), **DF (Don't Fragment)** bit, and **MF (More Fragments)** bit ($1$ if more fragments follow, $0$ for the last fragment).
    3.  **Fragmentation Offset ($13\text{ bits}$):** Shows the relative position of the fragment in units of **$8\text{ bytes}$** (so every fragment except the last must have a payload size that is a multiple of $8$).

**28. Differentiate between Distance Vector Routing and Link State Routing (Expt 4.6 & 4.7).**
| Feature | Distance Vector Routing (Expt 4.6) | Link State Routing (Expt 4.7) |
| :--- | :--- | :--- |
| **Algorithm Used** | **Bellman-Ford** Algorithm | **Dijkstra’s** Shortest Path Algorithm |
| **Topology Knowledge** | Knows only distances via **neighbors** (routing by rumor). | Has a complete map of the **entire network topology**. |
| **Information Shared** | Shares its entire routing table only with **immediate neighbors** periodically. | Floods small Link State Packets (LSPs) to **all routers** only when a change occurs. |
| **Main Problem** | Slow convergence, **Count-to-Infinity** problem (solved via Split Horizon / Poison Reverse). | Higher memory and CPU overhead. |
| **Protocol Example** | **RIP** (Routing Information Protocol) | **OSPF** (Open Shortest Path First) |

**29. What is NAT (Network Address Translation) and what are the Private IP ranges?**
*   **NAT** allows a local network to use private IP addresses internally and translates them to a single (or few) public IP address(es) when communicating with the Internet.
*   **Private IP Ranges:** `10.0.0.0/8`, `172.16.0.0/12` (`172.16.0.0` – `172.31.255.255`), and `192.168.0.0/16`.
*   **Loopback Address:** `127.0.0.1` (used for testing the local host's network stack).

---

## Section 5: Transport Layer — UDP, TCP & Congestion Control (Expt 5.1 – 5.3)

**30. Differentiate between TCP and UDP (Expt 5.1 & 5.2).**
*   **TCP (Transmission Control Protocol):** Connection-oriented, reliable, provides flow control and congestion control, guarantees in-order delivery, slower, header size is $20\text{ to }60\text{ bytes}$. (Used in HTTP, FTP, SMTP, Telnet).
*   **UDP (User Datagram Protocol):** Connectionless, unreliable, no flow/congestion control, faster with low overhead, fixed header size of **$8\text{ bytes}$**. (Used in DNS, SNMP, DHCP, live video/audio streaming).

**31. What is a Socket?**
*   A socket is a communication endpoint defined by the combination of an **IP Address** and a **Port Number** (e.g., `192.168.1.10:80`).

**32. How does TCP establish a connection? (3-Way Handshake)**
1.  **SYN:** Client sends a segment with the `SYN` flag set to $1$ and an initial sequence number.
2.  **SYN + ACK:** Server replies with both `SYN` and `ACK` flags set to $1$.
3.  **ACK:** Client sends an `ACK` back to the server, establishing the connection.

**33. What are the 3 phases of TCP Congestion Control (Expt 5.3)?**
1.  **Slow Start (Exponential Growth):** Congestion window ($\text{cwnd}$) starts at $1\text{ MSS}$ (Maximum Segment Size) and **doubles** every RTT ($\text{cwnd} = 1, 2, 4, 8\dots$) until it reaches the Slow Start Threshold ($\text{ssthresh}$).
2.  **Congestion Avoidance (Additive Increase):** Once $\text{cwnd} \ge \text{ssthresh}$, $\text{cwnd}$ increases **linearly** by $1\text{ MSS}$ per RTT ($\text{cwnd} = \text{cwnd} + 1$).
3.  **Congestion Detection (Multiplicative Decrease):**
    *   If **Time-out** occurs (severe congestion): $\text{ssthresh} = \frac{\text{cwnd}}{2}$, set $\text{cwnd} = 1$, and enter *Slow Start*.
    *   If **$3$ Duplicate ACKs** occur (mild congestion): $\text{ssthresh} = \frac{\text{cwnd}}{2}$, set $\text{cwnd} = \text{ssthresh}$ (or $+3$), and continue in *Congestion Avoidance* (Fast Recovery).

**34. What is the difference between Flow Control and Congestion Control?**
*   **Flow Control:** Prevents a fast sender from overwhelming a **slow receiver** (uses the receiver's advertised window, $\text{rwnd}$).
*   **Congestion Control:** Prevents senders from overwhelming the **network/routers** (uses the congestion window, $\text{cwnd}$). Actual sender window $= \min(\text{rwnd}, \text{cwnd})$.

---

## Section 6: Application Layer & Cryptography (Expt 6.1 & 6.2)

**35. What is DNS, and what is the difference between Recursive and Iterative DNS queries (Expt 6.1)?**
*   **DNS (Domain Name System)** translates human-readable domain names (like `www.google.com`) into IP addresses. It uses port **$53$**.
*   **Recursive Query:** The client asks the local DNS server for the final IP address, and the server does all the work of querying other servers on the client's behalf.
*   **Iterative Query:** If a queried DNS server doesn't know the IP, it simply returns the address of the *next* DNS server (e.g., Root $\rightarrow$ TLD $\rightarrow$ Authoritative) for the requester to contact directly.

**36. What are the well-known port numbers for common Application Layer protocols?**
*   **FTP (File Transfer Protocol):** Port $20$ (Data) & Port $21$ (Control)
*   **SSH (Secure Shell):** Port $22$
*   **Telnet:** Port $23$
*   **SMTP (Simple Mail Transfer Protocol):** Port $25$
*   **DNS:** Port $53$
*   **DHCP:** Port $67$ (Server) & Port $68$ (Client)
*   **HTTP:** Port $80$ | **HTTPS:** Port $443$
*   **POP3:** Port $110$ | **IMAP:** Port $143$
*   **SNMP:** Port $161$

**37. What is RSA, and how are keys generated, encrypted, and decrypted (Expt 6.2)?**
*   **RSA (Rivest–Shamir–Adleman)** is an **asymmetric (public-key) cryptographic algorithm** that uses two different keys: a **Public Key** $(e, n)$ for encryption and a **Private Key** $(d, n)$ for decryption.
*   **Steps:**
    1.  Choose two large prime numbers $p$ and $q$.
    2.  Compute modulus $n = p \times q$.
    3.  Compute Euler's totient function $\phi(n) = (p - 1)(q - 1)$.
    4.  Choose public exponent $e$ such that $1 < e < \phi(n)$ and $\gcd(e, \phi(n)) = 1$ (coprime).
    5.  Compute private exponent $d$ such that $(d \times e) \pmod{\phi(n)} = 1$.
    6.  **Encryption** of plaintext $M$: $C = M^e \pmod n$
    7.  **Decryption** of ciphertext $C$: $M = C^d \pmod n$

**38. What is the difference between Symmetric and Asymmetric Key Cryptography?**
*   **Symmetric:** Uses the **same secret key** for both encryption and decryption (e.g., DES, AES). It is faster but has a key distribution problem.
*   **Asymmetric:** Uses a **Public Key** to encrypt and a mathematically linked **Private Key** to decrypt (e.g., RSA). It solves the key exchange problem but is computationally slower.