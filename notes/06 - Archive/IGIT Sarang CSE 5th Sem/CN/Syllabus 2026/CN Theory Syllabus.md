
Type : #RawNote       
Date : 2026-09-27        
Tags :  [[College]] ; [[computer networking]]  
~ ***Yash Agrawall*** ~     

---
# Computer Networks (PCCS4307)
**B.Tech Computer Science & Engineering — 5th Semester**  
**Course Credits**: 3 (3-0-0)  
**Department**: Computer Science Engineering & Applications, IGIT Sarang

---

## Course Objectives
This course aims at providing the students a theoretical understanding of data communication and computer networks. Students are introduced to data communication, network design and its operations based around the TCP/IP model (the five-layer Internet model). A bottom-up approach is used. With this approach, students learn first about data communications (lower layers) before learning about networking (upper layers). On completion of the course, students should be able, in part to design, implement and maintain a typical computer network.

---

## Course Syllabus

### MODULE I (10 Hours)
- **Introduction**:
  - Networks, Line Configurations, Network Topology, Network Types
  - Internetworks, Internet Architecture, Protocols and Standards
  - Layered Architecture, TCP/IP Model, OSI Reference Model
- **Physical Layer**:
  - Analog and Digital Signals and their Characteristics
  - Transmission Impairment (Attenuation, Distortion, Noise)
  - Data Rate Limits: Nyquist Formula & Shannon Capacity
  - Analog and Digital Transmission and Conversions:
    - Digital-to-Digital Conversion
    - Digital-to-Analog Conversion
    - Analog-to-Digital Conversion
    - Analog-to-Analog Conversion
  - Transmission Modes
  - Multiplexing: FDM, WDM, TDM
  - Switching Techniques (Circuit Switching, Packet Switching, Message Switching)
  - Transmission Media (Guided and Unguided)

### MODULE II (12 Hours)
- **Data Link Layer**:
  - Types of Errors
  - Error Detection Techniques: Parity, CRC (Cyclic Redundancy Check), Checksum
  - Error Correction Techniques: Hamming Code
  - Framing Techniques
  - Data Link Control Protocols: Stop-and-Wait ARQ, Go-Back-N ARQ, Selective-Repeat ARQ, Piggybacking
  - Multiple Access Protocols:
    - Random Access (ALOHA, CSMA, CSMA/CD, CSMA/CA)
    - Controlled Access (Reservation, Polling, Token Passing)
    - Channelization (FDMA, TDMA, CDMA)
  - Elementary Data Link Protocols: HDLC, PPP
  - Wired LANs: Ethernet (IEEE 802.3)
  - Wireless LANs (IEEE 802.11) & Bluetooth (IEEE 802.15)
  - Connecting Devices: Repeaters, Hubs, Bridges, Switches, Routers, Gateways, Backbone Networks, Virtual LANs (VLANs)
  - Virtual Circuit Networks: Frame Relay and ATM

### MODULE III (8 Hours)
- **Network Layer**:
  - Logical Addressing: IPv4 and IPv6 Addressing Architectures
  - Internetworking
  - Internet Protocols: IPv4, IPv6
  - Network Layer Protocols:
    - Address Resolution Protocol (ARP)
    - Reverse Address Resolution Protocol (RARP)
    - Internet Control Message Protocol (ICMP)
    - Internet Group Management Protocol (IGMP)
  - Forwarding and Routing Techniques (Distance Vector Routing, Link State Routing)

### MODULE IV (10 Hours)
- **Transport Layer**:
  - Process-to-Process Delivery
  - User Datagram Protocol (UDP)
  - Transmission Control Protocol (TCP)
  - Congestion Control and Congestion Control Algorithms (Open-loop, Closed-loop)
  - Quality of Service (QoS) & Techniques to Improve QoS (Leaky Bucket, Token Bucket)
- **Application Layer**:
  - Domain Name System (DNS)
  - Remote Logging Architecture and Protocols (TELNET, SSH)
  - Electronic Mail Architecture and Protocols (SMTP, POP3, IMAP)
  - File Transfer Protocol (FTP)
  - World Wide Web (WWW) and Hypertext Transfer Protocol (HTTP)

---

## Prescribed & Available Resources

### Available Textbooks in Vault (`07 - Annexure/Books/`)
1. **Primary Syllabus & Lower Layers (Modules I & II):**
   * [[Data_Communication_&_Networking-Forouzan-4th_Ed.pdf|Behrouz A. Forouzan — Data Communications and Networking (4th Ed)]] (Official IGIT Reference)
   * [[Data_Communication_&_Networking-Forouzan-5th_Ed.pdf|Behrouz A. Forouzan — Data Communications and Networking (5th Ed)]] (Modern diagrams & TCP/IP stack)
2. **Systems Architecture & Upper Layers (Modules III & IV):**
   * [[Computer_Networking:_A_Top_Down_Approach-Kurose_Ross-9th_ed.pdf|James F. Kurose & Keith W. Ross — Computer Networking: A Top-Down Approach (9th Ed)]]
   * *Best For:* TCP Reno/Cubic internals, congestion control (Ch 3), DNS, HTTP, socket programming (Ch 2).

### Visual Lectures & Interactive Tools
* **Primary Visual Video:** [Neso Academy — Computer Networks Playlist](https://www.youtube.com/playlist?list=PLBlnK6fEyqRgMCUAG0XRw78UA8qnv6jEx) (YouTube)
* **Exam Fast Numericals:** [Gate Smashers — CN Playlist](https://www.youtube.com/playlist?list=PLxCzCOWd7aiGFBD2-2joCpWOLUrDLvVV_) (CRC, Shannon/Nyquist, IP subnetting)
* **Interactive Tool:** Wireshark (packet traces & protocol headers)
* **Study Protocol & Scope:** [[Core_Subjects_Study_Method_and_Visual_Sources]]

---

## Official University References
1. **Behrouz A. Forouzan**, *Introduction to Data Communications and Networking*, 4th Edition, 2007, McGraw-Hill Education (India), New Delhi.
2. **Andrew S. Tanenbaum**, *Computer Networks*, 4th Edition, 2003, PHI Learning Pvt. Ltd. / Pearson Education Inc., New Delhi.
3. **Natalia Olifer & Victor Olifer**, *Computer Networks: Principles, Technologies and Protocols*, 1st Edition, 2006, Wiley India Pvt. Ltd., New Delhi.
4. **James F. Kurose & Keith W. Ross**, *Computer Networking: A Top-Down Approach Featuring the Internet*, 4th Edition, 2008, Pearson Education Inc., New Delhi.
5. **Wayne Tomasi**, *Introduction to Data Communications and Networking*, 1st Edition, 2005, Pearson Education Inc., New Delhi.
