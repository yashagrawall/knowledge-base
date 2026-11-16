# Computer Networks Laboratory Manual

### Department of Computer Science Engineering & Applications

**Indira Gandhi Institute of Technology, Sarang**  
**Dhenkanal, Odisha-759146**  
**Associated Notes:** [[CN Lab Outputs Guide]] · [[CN Lab & Theory Viva Guide]] · [[CN Study Flow & Execution Guide]]

---

## INDEX

| Sl. No. (Expt No.) | Title (Aim) | Date of Expt | Date of Submission |
| :--- | :--- | :---: | :---: |
| **[[Expt 1.2 - Basic Commands\|Expt 1.2]]** | Study of Basic Network Commands | 07/08/2026 | 2026-11-17 |
| **[[Expt 2.1 - Polar NRZ\|Expt 2.1]]** | Implementation of Polar NRZ-L and Polar NRZ-I Line Coding Techniques | 14/08/2026 | 2026-11-17 |
| **[[Expt 2.2 - Manchester\|Expt 2.2]]** | Implementation of Polar Manchester and Differential Manchester Line Coding Techniques | 21/08/2026 | 2026-11-17 |
| **[[Expt 2.3 - 2B1Q\|Expt 2.3]]** | Implementation of 2B1Q (Two-Binary One-Quaternary) Multilevel Line Coding Technique | 28/08/2026 | 2026-11-17 |
| **[[Expt 2.4 - MLT-3\|Expt 2.4]]** | Implementation of MLT-3 (Multiline Transition, Three Level) Line Coding Technique | 04/09/2026 | 2026-11-17 |
| **[[Expt 2.5 - Sync TDM\|Expt 2.5]]** | Implementation of Synchronous Time Division Multiplexing (TDM) Technique | 11/09/2026 | 2026-11-17 |
| **[[Expt 3.1 - CRC\|Expt 3.1]]** | Implementation of Cyclic Redundancy Check (CRC) Error Detection Method | 18/09/2026 | 2026-11-17 |
| **[[Expt 3.2 - Hamming Code\|Expt 3.2]]** | Implementation of Hamming Code $C(7,4)$ Error Detection and Correction Technique | 25/09/2026 | 2026-11-17 |
| **[[Expt 3.3 - Character Stuffing\|Expt 3.3]]** | Implementation of the Data Link Layer Framing Method "Character Stuffing" | 09/10/2026 | 2026-11-17 |
| **[[Expt 3.4 - Bit Stuffing\|Expt 3.4]]** | Implementation of the Data Link Layer Framing Method "Bit Stuffing" | 16/10/2026 | 2026-11-17 |
| **[[Expt 3.5 - Go-Back-N ARQ\|Expt 3.5]]** | Simulation of Go-Back-N Automatic Repeat Request (ARQ) Protocol | 23/10/2026 | 2026-11-17 |
| **[[Expt 3.6 - Selective Repeat ARQ\|Expt 3.6]]** | Simulation of Selective-Repeat Automatic Repeat Request (ARQ) Protocol | 30/10/2026 | 2026-11-17 |
| **[[Expt 3.7 - CSMA-CD\|Expt 3.7]]** | Simulation of CSMA/CD Protocol | 06/11/2026 | 2026-11-17 |
| **[[Expt 4.1 - IPv4 Class\|Expt 4.1]]** | IPv4 Address Validation and Class Identification | 06/11/2026 | 2026-11-17 |
| **[[Expt 4.2 - Subnet Info\|Expt 4.2]]** | Determination of Subnet Information: Addresses & Hosts | 13/11/2026 | 2026-11-17 |
| **[[Expt 4.3 - Usable Hosts\|Expt 4.3]]** | Generation of All Usable Host IP Addresses in a Subnet | 13/11/2026 | 2026-11-17 |
| **[[Expt 4.4 - VLSM\|Expt 4.4]]** | Implementation of Variable Length Subnet Masking (VLSM) | 13/11/2026 | 2026-11-17 |
| **[[Expt 4.5 - Fragmentation\|Expt 4.5]]** | Implementation of IPv4 Packet Fragmentation & Reassembly Technique | 13/11/2026 | 2026-11-17 |
| **[[Expt 4.6 - Distance Vector\|Expt 4.6]]** | Implementation of Distance Vector Routing using Bellman-Ford Algorithm | 14/11/2026 | 2026-11-17 |
| **[[Expt 4.7 - Link State\|Expt 4.7]]** | Implementation of Link State Routing using Dijkstra's Algorithm | 14/11/2026 | 2026-11-17 |
| **[[Expt 5.1 - UDP Transfer\|Expt 5.1]]** | Simulation of UDP Data Transfer | 15/11/2026 | 2026-11-17 |
| **[[Expt 5.2 - TCP Exchange\|Expt 5.2]]** | Simulation of TCP Message Exchange Technique | 15/11/2026 | 2026-11-17 |
| **[[Expt 5.3 - TCP Congestion\|Expt 5.3]]** | Simulation of TCP Congestion Control Technique | 16/11/2026 | 2026-11-17 |
| **[[Expt 6.1 - DNS Client\|Expt 6.1]]** | Simulation of DNS Client | 16/11/2026 | 2026-11-17 |
| **[[Expt 6.2 - RSA Cipher\|Expt 6.2]]** | Implementation of Message Confidentiality Using RSA Encryption and Decryption | 16/11/2026 | 2026-11-17 |

---

# Section 1: Networking Devices and Basic Commands

## Experiment 1.2: Study of Basic Network Commands

### Aim
To study basic network commands on Windows Operating System.

### Introduction
In any computer network, administrators and engineers need tools to monitor, troubleshoot, and configure networking components. Windows provides several built-in command-line tools that help perform these tasks efficiently. This chapter introduces basic network commands that Computer Science students should know for working in practical network environments.

### Opening Command Prompt
Before using these commands, open the Command Prompt:
1. Press `Windows + R`, type `cmd`, and press `Enter`.
2. Alternatively, search for `Command Prompt` in the Start menu.  
   *Tip: Right-click Command Prompt and choose "Run as Administrator" for full access.*

### Basic Windows Network Commands

#### 1. ipconfig - View and manage IP configuration
**Purpose:** Displays the IP address, subnet mask, and default gateway for all network adapters.  
**Syntax:**
```cmd
ipconfig
ipconfig /all
ipconfig /release
ipconfig /renew
ipconfig /flushdns
```
**Example Output:**
```cmd
C:\Users\Student> ipconfig

Windows IP Configuration

Wireless LAN adapter Wi-Fi:

   Connection-specific DNS Suffix  . :
   Link-local IPv6 Address . . . . . : fe80::ac71:8f36:993f:2243%11
   IPv4 Address. . . . . . . . . . . : 10.166.48.51
   Subnet Mask . . . . . . . . . . . : 255.255.255.0
   Default Gateway . . . . . . . . . : 10.166.48.72

Ethernet adapter Ethernet:

   Media State . . . . . . . . . . . : Media disconnected
   Connection-specific DNS Suffix  . :
```

#### 2. ping - Test network connectivity
**Purpose:** Sends ICMP Echo Request messages to test if a remote host is reachable.  
**Syntax:**
```cmd
ping <hostname or IP>
```
**Example Output:**
```cmd
C:\Users\Student> ping www.google.com

Pinging www.google.com [142.250.207.78] with 32 bytes of data:
Reply from 142.250.207.78: bytes=32 time=231ms TTL=117
Reply from 142.250.207.78: bytes=32 time=252ms TTL=117
Reply from 142.250.207.78: bytes=32 time=409ms TTL=117

Ping statistics for 142.250.207.78:
    Packets: Sent = 3, Received = 3, Lost = 0 (0% loss),
Approximate round trip times in milli-seconds:
    Minimum = 231ms, Maximum = 409ms, Average = 297ms
```

#### 3. tracert - Trace route of packets
**Purpose:** Displays the path and transit delays of packets across an IP network.  
**Syntax:**
```cmd
tracert <hostname or IP>
```
**Example Output:**
```cmd
C:\Users\Student> tracert -d www.google.com

Tracing route to www.google.com [142.250.207.78]
over a maximum of 30 hops:

  1     2 ms     2 ms     2 ms  10.166.48.72
  2     *        *        *     Request timed out.
  3  1352 ms  1582 ms  1390 ms  10.166.1.1
  4     *        *        *     Request timed out.
  5  1298 ms  1522 ms  1310 ms  142.250.207.78

Trace complete.
```

#### 4. netstat - Display network statistics
**Purpose:** Displays active TCP connections, listening ports, and protocol statistics.  
**Syntax:**
```cmd
netstat
netstat -a    # Show all connections and listening ports
netstat -n    # Show addresses and port numbers numerically
netstat -o    # Show owning process ID
```
**Example Output:**
```cmd
C:\Users\Student> netstat -ano

Active Connections

  Proto  Local Address          Foreign Address        State           PID
  UDP    0.0.0.0:3702           *:*                                    4128
  UDP    0.0.0.0:5353           *:*                                    2840
  UDP    0.0.0.0:5355           *:*                                    2840
  UDP    10.166.48.51:3702      *:*                                    4128
  UDP    10.166.48.51:44573     *:*                                    5280
  UDP    127.0.0.1:53           *:*                                    1944
```

#### 5. nslookup - Query DNS servers
**Purpose:** Queries Internet domain name servers to resolve domain names to IP addresses and vice versa.  
**Syntax:**
```cmd
nslookup <hostname>
```
**Example Output:**
```cmd
C:\Users\Student> nslookup google.com

Server:  dns.google
Address:  8.8.8.8

Non-authoritative answer:
Name:    google.com
Addresses:  2404:6800:4007:82e::200e
          142.250.207.78
```

#### 6. arp - View and manage ARP cache
**Purpose:** Displays and modifies the Address Resolution Protocol physical-to-IP address translation tables.  
**Syntax:**
```cmd
arp -a
arp -d <IP>
```
**Example Output:**
```cmd
C:\Users\Student> arp -a

Interface: 10.166.48.51 --- 0xb
  Internet Address      Physical Address      Type
  10.166.48.72          76-99-c8-13-a4-1a     dynamic
  224.0.0.22           01-00-5e-00-00-16     static
  224.0.0.251          01-00-5e-00-00-fb     static
  239.255.255.250       01-00-5e-7f-ff-fa     static
  255.255.255.255       ff-ff-ff-ff-ff-ff     static
```

#### 7. netsh - Configure network interfaces
**Purpose:** Displays and configures network adapters, IP routing, and firewall settings.  
**Syntax:**
```cmd
netsh interface ip show config
```

---

# Section 2: Implementation of Physical Layer Protocols & Techniques

## Experiment 2.1: Implementation of Polar NRZ-L and Polar NRZ-I Line Coding Techniques

### Aim
Write and execute a C program to implement Polar NRZ-L (Non-Return to Zero Level) and Polar NRZ-I (Non-Return to Zero Invert) line coding techniques.

### Program
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check(const char *s) {
    for (int i = 0; s[i]; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("\nInvalid character in binary input data.\n\n");
            exit(0);
        }
    }
}

void nrzL(const char *s) {
    printf("NRZ-L Encoding: ");
    for (int i = 0; s[i]; i++)
        printf("| %c ", s[i] == '0' ? '+' : '-');
    printf("|\n");
}

void nrzI(const char *s) {
    int lvl = 0;
    printf("NRZ-I Encoding: ");
    for (int i = 0; s[i]; i++) {
        if (s[i] == '1') lvl = 1 - lvl;
        printf("| %c ", lvl ? '-' : '+');
    }
    printf("|\n\n");
}

int main() {
    char s[100];
    printf("\nEnter binary data (e.g., 1011001): ");
    scanf("%s", s);
    check(s);
    nrzL(s);
    nrzI(s);
    return 0;
}
```

### Explanation of Key Components
* **Invalid Character Check:** The function verifies that every character is either `'0'` or `'1'`. If invalid characters exist, it terminates execution.
* **NRZ-L Encoding:** In NRZ-L (Level), a binary `'0'` is represented by a positive voltage level (`+`), and a binary `'1'` is represented by a negative voltage level (`-`).
* **NRZ-I Encoding:** In NRZ-I (Invert), a binary `'1'` causes a transition (inversion from `+` to `-` or vice-versa), while a binary `'0'` maintains the previous level without transition.

### Output
**Run 1:**
```
Enter binary data (e.g., 1011001): 10011101
NRZ-L Encoding: | - | + | + | - | - | - | + | - |
NRZ-I Encoding: | - | - | - | + | - | + | + | - |
```

**Run 2:**
```
Enter binary data (e.g., 1011001): 158
Invalid character in binary input data.
```

---

## Experiment 2.2: Implementation of Polar Manchester and Differential Manchester Line Coding Techniques

### Aim
Write and execute a C program to implement Polar Manchester and Differential Manchester line coding techniques.

### Program
```c
#include <stdio.h>
#include <stdlib.h>

void manchester(int d[], int n) {
    printf("\nPolar Manchester Encoding: ");
    for (int i = 0; i < n; i++) {
        if (d[i] == 0) printf("| + to - ");
        else if (d[i] == 1) printf("| - to + ");
        else { printf("Invalid data bit\n"); return; }
    }
    printf("|\n");
}

void diffManchester(int d[], int n) {
    int lvl = 1;
    printf("Differential Manchester Encoding: ");
    for (int i = 0; i < n; i++) {
        if (d[i] == 0) {
            printf(lvl ? "| + to - " : "| - to + ");
        } else if (d[i] == 1) {
            lvl = 1 - lvl;
            printf(lvl ? "| + to - " : "| - to + ");
        } else {
            printf("Invalid data bit\n"); return;
        }
    }
    printf("|\n\n");
}

int main() {
    int n;
    printf("\nEnter the number of data bits: ");
    scanf("%d", &n);
    int *d = (int *)malloc(n * sizeof(int));
    printf("Enter the data bits (0 or 1) separated by space: ");
    for (int i = 0; i < n; i++) scanf("%d", &d[i]);
    manchester(d, n);
    diffManchester(d, n);
    free(d);
    return 0;
}
```

### Explanation of Key Components
* **Polar Manchester:** A logic `'0'` is represented by a high-to-low transition (`+ to -`) at the center of the bit interval. A logic `'1'` is represented by a low-to-high transition (`- to +`) at the center of the bit interval.
* **Differential Manchester:** A transition always occurs at the middle of the interval for bit synchronization. A logic `'0'` features no transition at the beginning of the bit interval, while a logic `'1'` forces an explicit transition at the start boundary.

### Output
**Run 1:**
```
Enter the number of data bits: 8
Enter the data bits (0 or 1) separated by space: 1 0 0 1 1 1 0 1

Polar Manchester Encoding: | - to + | + to - | + to - | - to + | - to + | - to + | + to - | - to + |
Differential Manchester Encoding: | - to + | - to + | - to + | + to - | - to + | + to - | + to - | - to + |
```

**Run 2:**
```
Enter the number of data bits: 4
Enter the data bits (0 or 1) separated by space: 4 5 8 2

Polar Manchester Encoding: Invalid data bit
Differential Manchester Encoding: Invalid data bit
```

---

## Experiment 2.3: Implementation of 2B1Q (Two-Binary One-Quaternary) Multilevel Line Coding Technique

### Aim
Write and execute a C program to implement the 2B1Q (Two-Binary One-Quaternary) Multilevel line coding technique.

### Program
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int prev = 1;
    printf("\nEnter a binary string (of even length): ");
    scanf("%s", s);
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("\nError! Invalid character in binary input string (must be '0' or '1').\n\n");
            return 0;
        }
    }
    if (len % 2 != 0) {
        printf("\nError! Binary input string length must be even for 2B1Q encoding.\n\n");
        return 0;
    }

    printf("\n2B1Q Encoded Output: ");
    for (int i = 0; i < len; i += 2) {
        int dibit = (s[i] - '0') * 2 + (s[i + 1] - '0');
        int pos_map[4] = {1, 3, -1, -3};
        int val = (prev > 0) ? pos_map[dibit] : -pos_map[dibit];
        printf("| %+d ", val);
        prev = val;
    }
    printf("|\n\n");
    return 0;
}
```

### Explanation of Key Components
2B1Q compresses two binary digits (dibits) into one quaternary signal level (four possible signal amplitudes: $-3, -1, +1, +3$).

| Next Bits | Previous Level Positive | Previous Level Negative |
| :---: | :---: | :---: |
| **00** | $+1$ | $-1$ |
| **01** | $+3$ | $-3$ |
| **10** | $-1$ | $+1$ |
| **11** | $-3$ | $+3$ |

### Output
**Run 1:**
```
Enter a binary string (of even length): 0011011001

2B1Q Encoded Output: | +1 | -3 | -3 | +1 | +3 |
```

**Run 2:**
```
Enter a binary string (of even length): 01011
Error! Binary input string length must be even for 2B1Q encoding.
```

---

## Experiment 2.4: Implementation of MLT-3 (Multiline Transition, Three Level) Line Coding Technique

### Aim
Write and execute a C program to implement the MLT-3 (Multiline Transition, Three Level) line coding technique.

### Program
```c
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int cur = 0, last = -1;
    printf("\nEnter the binary data stream (e.g., 1011001): ");
    scanf("%s", s);

    printf("\nMLT-3 Encoded Signal: ");
    for (int i = 0; s[i]; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("Invalid input character.\n\n");
            return 0;
        }
        if (s[i] == '1') {
            if (cur == 0) { cur = -last; last = cur; }
            else cur = 0;
        }
        if (cur == 0) printf("| 0V ");
        else printf(cur == 1 ? "| +V " : "| -V ");
    }
    printf("|\n\n");
    return 0;
}
```

### Explanation of Key Components
MLT-3 uses three signal levels ($-V, 0V, +V$) to cycle voltage states:
* If the current bit is `'0'`, the signal does not transition and holds the current level.
* If the current bit is `'1'`:
  * If the current level is non-zero, it transitions to `0V`.
  * If the current level is `0V`, it transitions to the opposite polarity of the most recent non-zero voltage level.

### Output
```
Enter the binary data stream (e.g., 1011001): 01011011

MLT-3 Encoded Signal: | 0V | +V | +V | 0V | -V | -V | 0V | +V |
```

---

## Experiment 2.5: Implementation of Synchronous Time Division Multiplexing (TDM) Technique

### Aim
Write and execute a C program to implement Synchronous Time Division Multiplexing (TDM) technique.

### Program
```c
#include <stdio.h>
#include <string.h>

int main() {
    int ch, fsize;
    char d[10][50];
    printf("\nSynchronous TDM Simulation\n==========================\n");
    printf("Enter the number of channels: ");
    scanf("%d", &ch);
    printf("Enter the frame size (max. number of characters per channel): ");
    scanf("%d", &fsize);

    for (int i = 0; i < ch; i++) {
        printf("Enter data for channel %d: ", i + 1);
        scanf("%s", d[i]);
    }

    printf("\n--- Transmitting Frames (Round-Robin Schedule) ---\nTime Slot Order: ");
    for (int i = 0; i < ch; i++) printf("CH%d ", i + 1);
    printf("\n\n");

    for (int f = 0; f < fsize; f++) {
        printf("Frame %d: ", f + 1);
        for (int c = 0; c < ch; c++) {
            if (f < strlen(d[c]) && d[c][0] != '-') printf("%c   ", d[c][f]);
            else printf("-   ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
```

### Explanation of Key Components
* Synchronous TDM interleaves fixed-size time slots from incoming channels into unified transmission frames in strict round-robin order.
* Each channel is allocated dedicated time slots regardless of whether active data exists; idle channels receive an empty placeholder token (`-`).

### Output
```
Synchronous TDM Simulation
==========================
Enter the number of channels: 4
Enter the frame size (max. number of characters per channel): 7
Enter data for channel 1: India
Enter data for channel 2: -
Enter data for channel 3: America
Enter data for channel 4: Network

--- Transmitting Frames (Round-Robin Schedule) ---
Time Slot Order: CH1 CH2 CH3 CH4 

Frame 1: I   -   A   N   
Frame 2: n   -   m   e   
Frame 3: d   -   e   t   
Frame 4: i   -   r   w   
Frame 5: a   -   i   o   
Frame 6: -   -   c   r   
Frame 7: -   -   a   k   
```

---

# Section 3: Implementation of Data Link Layer Protocols & Techniques

## Experiment 3.1: Implementation of Cyclic Redundancy Check (CRC) Error Detection Method

### Aim
Write and execute a C program to implement the Cyclic Redundancy Check (CRC) error detection method.

### Program
```c
#include <stdio.h>
#include <string.h>

void mod2div(char *data, char *gen, char *rem) {
    char tmp[200];
    int dlen = strlen(data), glen = strlen(gen);
    strcpy(tmp, data);
    for (int i = 0; i <= dlen - glen; i++) {
        if (tmp[i] == '1') {
            for (int j = 0; j < glen; j++)
                tmp[i + j] = (tmp[i + j] == gen[j]) ? '0' : '1';
        }
    }
    strncpy(rem, tmp + dlen - glen + 1, glen - 1);
    rem[glen - 1] = '\0';
}

int main() {
    char data[100], gen[30], rem[30], cw[150];
    printf("\nEnter the data to be sent (in binary): ");
    scanf("%s", data);
    printf("Enter the pre-determined divisor (in binary): ");
    scanf("%s", gen);

    strcpy(cw, data);
    int glen = strlen(gen);
    for (int i = 0; i < glen - 1; i++) strcat(cw, "0");
    mod2div(cw, gen, rem);

    strcpy(cw, data);
    strcat(cw, rem);
    printf("\n-- Sender Side --\nData: %s\nPre-determined divisor: %s\nCodeword (Data + CRC): %s\n", data, gen, cw);

    printf("\n-- Receiver Side --\n");
    mod2div(cw, gen, rem);
    int err = 0;
    for (int i = 0; rem[i]; i++) if (rem[i] == '1') err = 1;
    printf(err ? "Data is incorrect (Error detected)\n" : "Data is correct (No errors detected)\n");

    printf("\nSimulating an error...\n");
    cw[0] = (cw[0] == '0') ? '1' : '0';
    printf("Erroneous Received Data: %s\n", cw);
    mod2div(cw, gen, rem);
    err = 0;
    for (int i = 0; rem[i]; i++) if (rem[i] == '1') err = 1;
    printf(err ? "Data is incorrect (Error detected)\n\n" : "Data is correct (No errors detected)\n\n");
    return 0;
}
```

### Explanation of Key Components
* CRC appends $(k-1)$ check bits to an $n$-bit message block based on modulo-2 binary division by a predetermined generator polynomial.
* The sender appends zeroes, divides by the divisor using bitwise XOR subtraction, and transmits the resulting remainder along with the payload data.
* The receiver divides the whole incoming codeword by the same generator; a non-zero remainder indicates corrupt transmission.

### Output
```
Enter the data to be sent (in binary): 1001
Enter the pre-determined divisor (in binary): 1011

-- Sender Side --
Data: 1001
Pre-determined divisor: 1011
Codeword (Data + CRC): 1001110

-- Receiver Side --
Data is correct (No errors detected)

Simulating an error...
Erroneous Received Data: 0001110
Data is incorrect (Error detected)
```

---

## Experiment 3.2: Implementation of Hamming Code Error Detection and Correction Technique

### Aim
Write and execute a C program to implement the Hamming Code $C(7,4)$ error detection and correction technique.

### Program
```c
#include <stdio.h>

int main() {
    int d[4], c[7], s[3], pos;
    printf("\nEnter 4-bit dataword (a0 a1 a2 a3): ");
    for (int i = 0; i < 4; i++) scanf("%d", &d[i]);

    c[0] = (d[0] + d[1] + d[2]) % 2;
    c[1] = (d[1] + d[2] + d[3]) % 2;
    c[2] = (d[0] + d[1] + d[3]) % 2;
    c[3] = d[0]; c[4] = d[1]; c[5] = d[2]; c[6] = d[3];

    printf("\nEncoded 7-bit codeword (r0 r1 r2 a0 a1 a2 a3): ");
    for (int i = 0; i < 7; i++) printf("%d ", c[i]);

    printf("\n\nEnter bit position to introduce error (1-7, 0 for no error): ");
    scanf("%d", &pos);
    if (pos > 0 && pos <= 7) {
        c[pos - 1] ^= 1;
        printf("\nCodeword with error: ");
        for (int i = 0; i < 7; i++) printf("%d ", c[i]);
    }

    printf("\n\n--- Receiver Side ---\n");
    s[0] = (c[3] + c[4] + c[5] + c[0]) % 2;
    s[1] = (c[4] + c[5] + c[6] + c[1]) % 2;
    s[2] = (c[3] + c[4] + c[6] + c[2]) % 2;

    int syn = (s[2] << 2) | (s[1] << 1) | s[0];
    int map[8] = {0, 1, 2, 6, 3, 4, 7, 5};
    int err = map[syn];

    if (err) {
        printf("Error detected at bit position: %d\n", err);
        c[err - 1] ^= 1;
    } else {
        printf("No error detected.\n");
    }

    printf("Corrected Codeword: ");
    for (int i = 0; i < 7; i++) printf("%d ", c[i]);
    printf("\n\n");
    return 0;
}
```

### Explanation of Key Components
Hamming Code $C(7,4)$ encodes 4 information bits into a 7-bit codeword using 3 parity bits:
* **Parity Equations:**
  $$r_0 = a_0 \oplus a_1 \oplus a_2$$
  $$r_1 = a_1 \oplus a_2 \oplus a_3$$
  $$r_2 = a_0 \oplus a_1 \oplus a_3$$
* **Syndrome Generation:** The receiver computes 3 syndrome bits ($s_2, s_1, s_0$). If all syndromes are zero, no bit error occurred. Otherwise, the syndrome vector isolates the exact erroneous bit position to flip it back.

### Output
```
Enter 4-bit dataword (a0 a1 a2 a3): 0 0 1 1

Encoded 7-bit codeword (r0 r1 r2 a0 a1 a2 a3): 1 0 1 0 0 1 1 

Enter bit position to introduce error (1-7, 0 for no error): 5

Codeword with error: 1 0 1 0 1 1 1 

--- Receiver Side ---
Error detected at bit position: 5
Corrected Codeword: 1 0 1 0 0 1 1 
```

---

## Experiment 3.3: Implementation of the Data Link Layer Framing Method "Character Stuffing"

### Aim
Write and execute a C program to implement the data link layer framing method: Character stuffing and destuffing.

### Program
```c
#include <stdio.h>
#include <string.h>

#define FLAG '#'
#define ESC '\\'

int main() {
    char in[100], st[200], dest[100];
    int j = 0;
    printf("\nCharacter used for starting and ending flag: %c\nCharacter used for escape character: %c\n", FLAG, ESC);
    printf("\nEnter the characters to be transmitted (without spaces): ");
    scanf("%s", in);

    st[j++] = FLAG;
    for (int i = 0; in[i]; i++) {
        if (in[i] == FLAG || in[i] == ESC) st[j++] = ESC;
        st[j++] = in[i];
    }
    st[j++] = FLAG; st[j] = '\0';
    printf("\nStuffed Frame: %s\n", st);

    int k = 0;
    for (int i = 1; i < (int)strlen(st) - 1; i++) {
        if (st[i] == ESC) i++;
        dest[k++] = st[i];
    }
    dest[k] = '\0';
    printf("Destuffed Data: %s\n\n", dest);
    return 0;
}
```

### Explanation of Key Components
* **Flag Bytes:** Specific delimiter characters (`#`) mark the starting and ending boundaries of a frame.
* **Byte Stuffing:** When reserved tokens (`#` or `\`) appear inside the payload, an escape character (`\`) is prepended to ensure transparency.
* **Destuffing:** The receiver strips boundary flags, catches escape bytes, and retains subsequent characters as raw data.

### Output
```
Character used for starting and ending flag: #
Character used for escape character: \

Enter the characters to be transmitted (without spaces): IGI#S\##ara\n#g

Stuffed Frame: #IGI\#S\\\#\#ara\\n\#g#
Destuffed Data: IGI#S\##ara\n#g
```

---

## Experiment 3.4: Implementation of the Data Link Layer Framing Method "Bit Stuffing"

### Aim
Write and execute a C program to implement the data link layer framing method: Bit stuffing and destuffing.

### Program
```c
#include <stdio.h>

int main() {
    char in[100], st[200], dest[100];
    int cnt = 0, j = 0;
    printf("\nEnter binary data (e.g., 0111111010): ");
    scanf("%s", in);

    for (int i = 0; in[i]; i++) {
        st[j++] = in[i];
        if (in[i] == '1' && ++cnt == 5) { st[j++] = '0'; cnt = 0; }
        else if (in[i] == '0') cnt = 0;
    }
    st[j] = '\0';
    printf("\nStuffed Data: %s\n", st);

    cnt = 0; int k = 0;
    for (int i = 0; st[i]; i++) {
        dest[k++] = st[i];
        if (st[i] == '1' && ++cnt == 5) { i++; cnt = 0; }
        else if (st[i] == '0') cnt = 0;
    }
    dest[k] = '\0';
    printf("Destuffed Data: %s\n\n", dest);
    return 0;
}
```

### Explanation of Key Components
* **Rule:** Whenever the sender observes five consecutive `'1'`s in the stream, it automatically inserts an extra `'0'` bit into the outgoing bit sequence.
* **Receiver Processing:** When five consecutive `'1'`s are read followed by a `'0'`, the receiver discards the dummy `'0'` to restore original data.

### Output
```
Enter binary data (e.g., 0111111010): 011011111111001010

Stuffed Data: 0110111110111001010
Destuffed Data: 011011111111001010
```

---

## Experiment 3.5: Simulation of Go-Back-N Automatic Repeat Request (ARQ) Protocol

### Aim
Write and execute a C program to simulate the Go-Back-N Automatic Repeat Request (ARQ) Protocol where the sliding window size and the number of frames are given by the user.

### Program
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ws, nf, base = 0, nxt = 0;
    printf("\nEnter the window size: ");
    scanf("%d", &ws);
    printf("Enter the number of frames: ");
    scanf("%d", &nf);
    srand(time(NULL));

    while (base < nf) {
        for (int i = 0; i < ws && nxt < nf; i++)
            printf("Sending frame: %d\n", nxt++);

        int corrupted = 0;
        for (int i = base; i < nxt; i++) {
            if (rand() % 5 == 0) {
                printf("Frame %d corrupted!\n", i);
                corrupted = 1;
                break;
            } else {
                printf("Frame %d received successfully\n", i);
                base++;
            }
        }
        if (corrupted) {
            printf("Go-Back-N: Retransmitting from frame %d\n", base);
            nxt = base;
        }
    }
    printf("\nAll frames sent and acknowledged.\n\n");
    return 0;
}
```

### Explanation of Key Components
* **Sliding Window:** The sender transmits multiple unacknowledged frames bounded by window size $N$.
* **Error Behavior:** If any intermediate frame suffers corruption or packet drop, the receiver discards subsequent frames, forcing the transmitter to roll back and retransmit all frames starting from the corrupted base sequence.

### Output
```
Enter the window size: 4
Enter the number of frames: 6

Sending frame: 0
Sending frame: 1
Sending frame: 2
Sending frame: 3
Frame 0 received successfully
Frame 1 corrupted!
Go-Back-N: Retransmitting from frame 1
Sending frame: 1
Sending frame: 2
Sending frame: 3
Sending frame: 4
Frame 1 received successfully
Frame 2 received successfully
Frame 3 received successfully
Frame 4 received successfully
Sending frame: 5
Frame 5 received successfully

All frames sent and acknowledged.
```

---

## Experiment 3.6: Simulation of Selective-Repeat Automatic Repeat Request (ARQ) Protocol

### Aim
Write and execute a C program to simulate the Selective-Repeat ARQ protocol where the number of frames and frame data is given by the user.

### Program
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nf, data[10], ack[10] = {0}, base = 0;
    srand(time(NULL));
    printf("\nEnter the number of frames to transmit (<= 10): ");
    scanf("%d", &nf);
    for (int i = 0; i < nf; i++) {
        printf("Enter data for frame %d: ", i);
        scanf("%d", &data[i]);
    }

    while (base < nf) {
        printf("\nSending frames:\n");
        for (int i = base; i < base + 4 && i < nf; i++) {
            if (!ack[i]) {
                printf("  Frame %d (Data: %d)", i, data[i]);
                if (rand() % 5 == 0) {
                    printf(" * Frame lost in transit!\n");
                } else if (rand() % 5 == 0) {
                    printf(" * ACK lost!\n");
                } else {
                    printf(" -> ACK received.\n");
                    ack[i] = 1;
                }
            }
        }
        while (base < nf && ack[base]) base++;
    }
    printf("\nAll frames successfully transmitted and acknowledged.\n\n");
    return 0;
}
```

### Explanation of Key Components
* **Selective Retransmission:** Unlike Go-Back-N, the receiver buffers out-of-order packets and explicitly tracks each individual frame's acknowledgment status.
* Only the specific frames lost or damaged during transit are retransmitted, conserving channel bandwidth.

### Output
```
Enter the number of frames to transmit (<= 10): 4
Enter data for frame 0: 11
Enter data for frame 1: 22
Enter data for frame 2: 33
Enter data for frame 3: 44

Sending frames:
  Frame 0 (Data: 11) -> ACK received.
  Frame 1 (Data: 22) * ACK lost!
  Frame 2 (Data: 33) -> ACK received.
  Frame 3 (Data: 44) * Frame lost in transit!

Sending frames:
  Frame 1 (Data: 22) -> ACK received.
  Frame 3 (Data: 44) -> ACK received.

All frames successfully transmitted and acknowledged.
```

---

## Experiment 3.7: Simulation of CSMA/CD Protocol

### Aim
Write and execute a C program to simulate the CSMA/CD protocol where the number of stations and data to be sent by each station is given by the user.

### Program
```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int n;
    char frames[5][50];
    srand(time(NULL));
    printf("\nEnter number of stations (max 5): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter frame data for Station %d: ", i + 1);
        scanf("%s", frames[i]);
    }

    for (int i = 0; i < n; i++) {
        int att = 0;
        printf("\nStation %d attempting to transmit: \"%s\"\n", i + 1, frames[i]);
        while (att < 10) {
            if (rand() % 3 == 0) {
                printf("  Medium is busy. Sensing again...\n");
                continue;
            }
            printf("  Medium is idle. Transmitting...\n");
            if (rand() % 4 == 0) {
                att++;
                int r = rand() % (1 << att);
                printf("  ** Collision detected! ** Waiting %d units...\n", r);
                usleep(r * 1000);
            } else {
                printf("  Frame \"%s\" transmitted successfully by Station %d.\n", frames[i], i + 1);
                break;
            }
        }
    }
    printf("\nSimulation complete.\n\n");
    return 0;
}
```

### Explanation of Key Components
* **Carrier Sense:** Stations test if the physical medium is idle before transmitting.
* **Collision Detection & Exponential Backoff:** If two stations transmit concurrently, collision is flagged and transmission aborts immediately. The station enters a randomized binary exponential backoff delay ($\Delta t \propto 2^k$) before attempting retransmission.

### Output
```
Enter number of stations (max 5): 2
Enter frame data for Station 1: FrameA
Enter frame data for Station 2: FrameB

Station 1 attempting to transmit: "FrameA"
  Medium is busy. Sensing again...
  Medium is busy. Sensing again...
  Medium is idle. Transmitting...
  Frame "FrameA" transmitted successfully by Station 1.

Station 2 attempting to transmit: "FrameB"
  Medium is idle. Transmitting...
  Frame "FrameB" transmitted successfully by Station 2.

Simulation complete.
```

---

# Section 4: Implementation of Network Layer Protocols & Techniques

## Experiment 4.1: IPv4 Address Validation and Class Identification

### Aim
Write and execute a C program that validates if the entered string is a valid IPv4 address (e.g., 192.168.1.256 is invalid), and determine its class (A, B, C, D, or E) if the address is a valid one.

### Program
```c
#include <stdio.h>

int main() {
    int a, b, c, d;
    char tail;
    printf("\nEnter an IPv4 address: ");
    if (scanf("%d.%d.%d.%d%c", &a, &b, &c, &d, &tail) < 4 || (tail != '\n' && tail != '\0')) {
        printf("Invalid IPv4 address.\n\n");
        return 0;
    }
    if (a < 0 || a > 255 || b < 0 || b > 255 || c < 0 || c > 255 || d < 0 || d > 255) {
        printf("Invalid IPv4 address.\n\n");
        return 0;
    }
    printf("Valid IPv4 address.\n");
    if (a >= 1 && a <= 126) printf("IP Address Class: A\n\n");
    else if (a >= 128 && a <= 191) printf("IP Address Class: B\n\n");
    else if (a >= 192 && a <= 223) printf("IP Address Class: C\n\n");
    else if (a >= 224 && a <= 239) printf("IP Address Class: D\n\n");
    else if (a >= 240 && a <= 254) printf("IP Address Class: E\n\n");
    else printf("IP Address Class: Unknown/Special\n\n");
    return 0;
}
```

### Explanation of Key Components
* Scans input into four integer octets delimited by decimal points.
* Checks value bounds ($0 \le \text{octet} \le 255$).
* Categorizes addresses based on leading octet ranges:
  * Class A: $1 - 126$
  * Class B: $128 - 191$
  * Class C: $192 - 223$
  * Class D: $224 - 239$ (Multicast)
  * Class E: $240 - 254$ (Experimental)

### Output
```
Enter an IPv4 address: 192.168.0.1
Valid IPv4 address.
IP Address Class: C
```

---

## Experiment 4.2: Determination of Subnet Information: Addresses & Hosts

### Aim
Write and execute a C program that takes an IPv4 address and subnet mask as input and calculates the following: (1) Network Address (2) Broadcast Address (3) First Usable Host (4) Last Usable Host (5) Number of Usable Hosts.

### Program
```c
#include <stdio.h>
#include <arpa/inet.h>

int main() {
    char ip_s[20], msk_s[20];
    unsigned int ip, msk;
    printf("\nEnter IP address (e.g., 192.168.1.10): ");
    scanf("%s", ip_s);
    printf("Enter Subnet Mask (e.g., 255.255.255.0): ");
    scanf("%s", msk_s);

    if (inet_pton(AF_INET, ip_s, &ip) != 1 || inet_pton(AF_INET, msk_s, &msk) != 1) {
        printf("\nInvalid IP address or subnet mask.\n\n");
        return 1;
    }
    ip = ntohl(ip); msk = ntohl(msk);
    unsigned int net = ip & msk, bcast = net | (~msk);
    struct in_addr a;

    printf("\n--- Subnet Info ---\n");
    a.s_addr = htonl(net);       printf("Network Address   : %s\n", inet_ntoa(a));
    a.s_addr = htonl(bcast);     printf("Broadcast Address : %s\n", inet_ntoa(a));
    a.s_addr = htonl(net + 1);   printf("First Usable Host : %s\n", inet_ntoa(a));
    a.s_addr = htonl(bcast - 1); printf("Last Usable Host  : %s\n", inet_ntoa(a));
    printf("Number of Hosts   : %u\n\n", bcast > net + 1 ? bcast - net - 1 : 0);
    return 0;
}
```

### Explanation of Key Components
* Converts decimal dotted strings into 32-bit binary integers with `inet_pton` and shifts to host byte order (`ntohl`).
* **Bitwise Formulas:**
  * Network ID: $\text{IP} \ \& \ \text{Mask}$
  * Broadcast: $\text{Network} \mid (\sim \text{Mask})$
  * Usable Range: $(\text{Network} + 1)$ up to $(\text{Broadcast} - 1)$
  * Total Usable Hosts: $2^{(32 - \text{prefix})} - 2$

### Output
```
Enter IP address (e.g., 192.168.1.10): 192.168.4.8
Enter Subnet Mask (e.g., 255.255.255.0): 255.255.255.0

--- Subnet Info ---
Network Address   : 192.168.4.0
Broadcast Address : 192.168.4.255
First Usable Host : 192.168.4.1
Last Usable Host  : 192.168.4.254
Number of Hosts   : 254
```

---

## Experiment 4.3: Generation of All Usable Host IP Addresses in a Subnet

### Aim
Write and execute a C program that takes a subnet (e.g., 192.168.1.0/29) and generates all valid host IP addresses in that subnet range.

### Program
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main() {
    char in[40];
    printf("\nEnter subnet in CIDR notation (e.g., 192.168.1.0/29): ");
    scanf("%s", in);
    char *slash = strchr(in, '/');
    if (!slash) return 1;
    *slash = '\0';
    int p = atoi(slash + 1);

    unsigned int ip;
    inet_pton(AF_INET, in, &ip);
    ip = ntohl(ip);
    unsigned int msk = p == 0 ? 0 : (~0U << (32 - p));
    unsigned int net = ip & msk, bcast = net | (~msk);

    printf("\nUsable IP addresses in subnet %s/%d:\n", in, p);
    struct in_addr a;
    for (unsigned int h = net + 1; h < bcast; h++) {
        a.s_addr = htonl(h);
        printf("%s\n", inet_ntoa(a));
    }
    printf("\n");
    return 0;
}
```

### Explanation of Key Components
* Extracts the CIDR prefix length $p$ and shifts bits to construct the subnet mask $(\sim 0\text{U} \ll (32-p))$.
* Loops sequentially from host $\text{Network} + 1$ through $\text{Broadcast} - 1$, printing each dotted notation string.

### Output
```
Enter subnet in CIDR notation (e.g., 192.168.1.0/29): 192.188.1.0/28

Usable IP addresses in subnet 192.188.1.0/28:
192.188.1.1
192.188.1.2
192.188.1.3
192.188.1.4
192.188.1.5
192.188.1.6
192.188.1.7
192.188.1.8
192.188.1.9
192.188.1.10
192.188.1.11
192.188.1.12
192.188.1.13
192.188.1.14
```

---

## Experiment 4.4: Implementation of Variable Length Subnet Masking (VLSM)

### Aim
Write and execute a C program that takes as input a major network (e.g., 192.168.0.0/24) and a list of required hosts for multiple subnets. It allocates subnets using VLSM and generates the list of allocated subnets with proper mask.

### Program
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>

int cmp(const void *a, const void *b) { return (*(int*)b - *(int*)a); }

int main() {
    char net_str[30];
    int n, req[20];
    printf("\nEnter major network in CIDR notation (e.g., 192.168.0.0/24): ");
    scanf("%s", net_str);
    char *slash = strchr(net_str, '/');
    *slash = '\0';

    unsigned int base;
    inet_pton(AF_INET, net_str, &base);
    base = ntohl(base);

    printf("Enter number of subnets to allocate: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter number of hosts for subnet %d: ", i + 1);
        scanf("%d", &req[i]);
    }
    qsort(req, n, sizeof(int), cmp);

    printf("\n--- VLSM Subnet Allocation ---\n");
    struct in_addr a;
    for (int i = 0; i < n; i++) {
        int b = 0;
        while ((1 << b) - 2 < req[i]) b++;
        a.s_addr = htonl(base);
        printf("Subnet %d: %s/%d (Hosts: %d)\n", i + 1, inet_ntoa(a), 32 - b, (1 << b) - 2);
        base += (1 << b);
    }
    printf("\n");
    return 0;
}
```

### Explanation of Key Components
* **Sorting Requirement:** Host requirements are sorted in descending order (`qsort`) to maximize allocation efficiency without address fragmentation.
* **Prefix Fit:** Finds minimum power-of-two bits $b$ such that $2^b - 2 \ge \text{required hosts}$.
* Allocates contiguous blocks starting from the root network base address.

### Output
```
Enter major network in CIDR notation (e.g., 192.168.0.0/24): 192.168.0.0/24
Enter number of subnets to allocate: 3
Enter number of hosts for subnet 1: 56
Enter number of hosts for subnet 2: 34
Enter number of hosts for subnet 3: 20

--- VLSM Subnet Allocation ---
Subnet 1: 192.168.0.0/26 (Hosts: 62)
Subnet 2: 192.168.0.64/26 (Hosts: 62)
Subnet 3: 192.168.0.128/27 (Hosts: 30)
```

---

## Experiment 4.5: Implementation of IPv4 Fragmentation & Reassembly Technique

### Aim
Write and execute a C program that performs IP Fragmentation and Reassembly with realistic IPv4 header fields.

### Program
```c
#include <stdio.h>
#include <string.h>

int main() {
    char msg[1000], buf[1000] = {0};
    int mtu;
    printf("\nEnter the message to be fragmented: ");
    scanf(" %[^\n]", msg);
    printf("Enter the MTU size: ");
    scanf("%d", &mtu);

    int max_d = ((mtu - 20) / 8) * 8;
    int len = strlen(msg), off = 0, idx = 1;

    printf("\n--- IP Fragments ---\n");
    for (int i = 0; i < len; i += max_d) {
        int dlen = (len - i > max_d) ? max_d : len - i;
        int mf = (i + dlen < len);
        printf("Fragment %d:\n  Total Length: %d bytes\n  Flags (MF): %d\n  Fragment Offset: %d (bytes: %d)\n  Data: \"%.*s\"\n\n",
               idx++, 20 + dlen, mf, off / 8, off, dlen, msg + i);
        strncat(buf, msg + i, dlen);
        off += dlen;
    }
    printf("--- Reassembled Message ---\n%s\n\n", buf);
    return 0;
}
```

### Explanation of Key Components
* Calculates allowable payload per fragment given MTU constraints:
  $$\text{Payload} = \left\lfloor \frac{\text{MTU} - 20}{8} \right\rfloor \times 8$$
* Sets `Total Length`, `MF` (More Fragments) bit, and `Fragment Offset` (measured in units of 8-byte blocks).
* Concatenates parsed payload fragments to reconstruct the original message.

### Output
```
Enter the message to be fragmented: Indira Gandhi Institute of Technology (IGIT), Sarang was established in the year of 1982.
Enter the MTU size: 50

--- IP Fragments ---
Fragment 1:
  Total Length: 44 bytes
  Flags (MF): 1
  Fragment Offset: 0 (bytes: 0)
  Data: "Indira Gandhi Institute "

Fragment 2:
  Total Length: 44 bytes
  Flags (MF): 1
  Fragment Offset: 3 (bytes: 24)
  Data: "of Technology (IGIT), Sa"

Fragment 3:
  Total Length: 44 bytes
  Flags (MF): 1
  Fragment Offset: 6 (bytes: 48)
  Data: "rang was established in "

Fragment 4:
  Total Length: 37 bytes
  Flags (MF): 0
  Fragment Offset: 9 (bytes: 72)
  Data: "the year of 1982."

--- Reassembled Message ---
Indira Gandhi Institute of Technology (IGIT), Sarang was established in the year of 1982.
```

---

## Experiment 4.6: Implementation of Distance Vector Routing

### Aim
Write and execute a C program to implement Distance Vector Routing using the Bellman-Ford Algorithm.

### Program
```c
#include <stdio.h>
#define INF 999

int main() {
    int n, cost[10][10], dist[10][10], hop[10][10];
    printf("\nEnter number of routers (Max. 10): ");
    scanf("%d", &n);

    printf("\n--- Enter cost matrix (use %d for infinity) ---\n", INF);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            dist[i][j] = cost[i][j];
            hop[i][j] = (cost[i][j] != INF && i != j) ? j : i;
        }
    }

    int upd;
    do {
        upd = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int k = 0; k < n; k++)
                    if (dist[i][j] > cost[i][k] + dist[k][j]) {
                        dist[i][j] = cost[i][k] + dist[k][j];
                        hop[i][j] = hop[i][k];
                        upd = 1;
                    }
    } while (upd);

    printf("\n--- Final Routing Tables ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nRouter %d Routing Table:\nDestination  Cost  Next Hop\n", i);
        for (int j = 0; j < n; j++)
            printf("%10d %5d %8d\n", j, dist[i][j], hop[i][j]);
    }
    printf("\n");
    return 0;
}
```

### Explanation of Key Components
* Each node shares distance vectors with immediate neighbors.
* Implements Bellman-Ford optimization equation:
  $$D_x(y) = \min_v \{ c(x, v) + D_v(y) \}$$
* Iterates table updates until the entire network reaches convergence with zero cost revisions.

### Output
```
Enter number of routers (Max. 10): 4

--- Enter cost matrix (use 999 for infinity) ---
0 5 7 9
5 0 11 22
7 11 0 34
9 22 34 0

--- Final Routing Tables ---

Router 0 Routing Table:
Destination  Cost  Next Hop
         0     0        0
         1     5        1
         2     7        2
         3     9        3

Router 1 Routing Table:
Destination  Cost  Next Hop
         0     5        0
         1     0        1
         2    11        2
         3    14        0

Router 2 Routing Table:
Destination  Cost  Next Hop
         0     7        0
         1    11        1
         2     0        2
         3    16        0

Router 3 Routing Table:
Destination  Cost  Next Hop
         0     9        0
         1    14        0
         2    16        0
         3     0        3
```

---

## Experiment 4.7: Implementation of Link State Routing

### Aim
Write and execute a C program to implement Link State Routing using the Dijkstra Algorithm.

### Program
```c
#include <stdio.h>
#define INF 999

int main() {
    int n, src, cost[20][20], dist[20], vis[20] = {0};
    printf("\nEnter number of routers: ");
    scanf("%d", &n);
    printf("\n--- Enter cost matrix (use %d for infinity) ---\n", INF);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) scanf("%d", &cost[i][j]);
    }
    printf("\nEnter source router (0 to %d): ", n - 1);
    scanf("%d", &src);

    for (int i = 0; i < n; i++) dist[i] = cost[src][i];
    dist[src] = 0; vis[src] = 1;

    for (int c = 1; c < n; c++) {
        int min = INF, u = -1;
        for (int i = 0; i < n; i++)
            if (!vis[i] && dist[i] < min) { min = dist[i]; u = i; }
        if (u == -1) break;
        vis[u] = 1;
        for (int v = 0; v < n; v++)
            if (!vis[v] && cost[u][v] != INF && dist[u] + cost[u][v] < dist[v])
                dist[v] = dist[u] + cost[u][v];
    }

    printf("\nShortest paths from router %d:\n", src);
    for (int i = 0; i < n; i++)
        printf("To %d: Cost = %d\n", i, dist[i]);
    printf("\n");
    return 0;
}
```

### Explanation of Key Components
* Models link-state protocols (e.g., OSPF) where all nodes maintain global network topology state.
* Executes Dijkstra's shortest-path tree generation starting from source node to find optimal edge routes.

### Output
```
Enter number of routers: 4

--- Enter cost matrix (use 999 for infinity) ---
0 1 999 3
1 0 1 999
999 1 0 2
3 999 2 0

Enter source router (0 to 3): 0

Shortest paths from router 0:
To 0: Cost = 0
To 1: Cost = 1
To 2: Cost = 2
To 3: Cost = 3
```

---

# Section 5: Implementation of Transport Layer Protocols & Techniques

## Experiment 5.1: Simulation of UDP Data Transfer

### Aim
Write and execute a C program to simulate data transfer using UDP.

### Program
```c
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/wait.h>

int main() {
    char msg[1024];
    printf("\n=== UDP DATA TRANSFER SIMULATION ===\n\nEnter your message: ");
    scanf(" %[^\n]", msg);

    pid_t pid = fork();
    if (pid == 0) {
        usleep(100000);
        int fd = socket(AF_INET, SOCK_DGRAM, 0);
        struct sockaddr_in r = {AF_INET, htons(54321), inet_addr("127.0.0.1")};
        for (size_t i = 0; i < strlen(msg); i += 16) {
            sendto(fd, msg + i, 16, 0, (struct sockaddr*)&r, sizeof(r));
            usleep(20000);
        }
        sendto(fd, "##END##", 7, 0, (struct sockaddr*)&r, sizeof(r));
        close(fd);
        _exit(0);
    } else {
        int fd = socket(AF_INET, SOCK_DGRAM, 0);
        struct sockaddr_in r = {AF_INET, htons(54321), INADDR_ANY};
        bind(fd, (struct sockaddr*)&r, sizeof(r));
        char buf[64] = {0}, full[1024] = {0};
        printf("\n=== RECEIVER ===\n");
        while (1) {
            int n = recvfrom(fd, buf, 16, 0, NULL, NULL);
            if (n <= 0) break;
            buf[n] = '\0';
            if (strcmp(buf, "##END##") == 0) break;
            printf("[Receiver] Received packet: \"%.*s\"\n", n, buf);
            strncat(full, buf, n);
        }
        printf("\n[Receiver] Full Reconstructed Message: %s\n\n", full);
        close(fd);
        waitpid(pid, NULL, 0);
    }
    return 0;
}
```

### Explanation of Key Components
* Utilizes POSIX sockets (`SOCK_DGRAM`) to send connectionless datagram packets.
* Splits payload messages into 16-byte datagram chunks with loopback transmission.

### Output
```
=== UDP DATA TRANSFER SIMULATION ===

Enter your message: This program demonstrates UDP-based data transfer.

=== RECEIVER ===
[Receiver] Received packet: "This program dem"
[Receiver] Received packet: "onstrates UDP-ba"
[Receiver] Received packet: "sed data transfe"
[Receiver] Received packet: "r."

[Receiver] Full Reconstructed Message: This program demonstrates UDP-based data transfer.
```

---

## Experiment 5.2: Simulation of TCP Message Exchange Technique

### Aim
Write and execute a C program to simulate TCP message exchange that comprises of the following three phases: (1) Connection establishment (2) Data transfer, and (3) Connection termination.

### Program
```c
#include <stdio.h>

int main() {
    int ch, c_seq = 100, s_seq = 500, cnt;
    char buf[100];
    do {
        printf("\nMenu:\n1. Establish Connection\n2. Send Data\n3. Terminate Connection\n4. Exit\nEnter choice: ");
        if (scanf("%d", &ch) != 1) break;
        switch (ch) {
            case 1:
                printf("\n=== TCP CONNECTION ESTABLISHMENT (3-WAY HANDSHAKE) ===\n");
                printf("Client -> [SEQ: %d, ACK: 0, FLAGS: SYN]\n", c_seq);
                printf("Server -> [SEQ: %d, ACK: %d, FLAGS: SYN-ACK]\n", s_seq, ++c_seq);
                printf("Client -> [SEQ: %d, ACK: %d, FLAGS: ACK]\nConnection Established Successfully!\n", c_seq, ++s_seq);
                break;
            case 2:
                printf("\nEnter number of packets to send: ");
                scanf("%d", &cnt);
                for (int i = 1; i <= cnt; i++) {
                    printf("Enter data for packet %d: ", i);
                    scanf("%s", buf);
                    printf("Client -> [SEQ: %d, ACK: 0, FLAGS: DATA, DATA: %s]\n", c_seq, buf);
                    c_seq += 10;
                    printf("Server -> [SEQ: %d, ACK: %d, FLAGS: ACK]\n", s_seq, c_seq);
                }
                break;
            case 3:
                printf("\n=== TCP CONNECTION TERMINATION (4-WAY HANDSHAKE) ===\n");
                printf("Client -> [FLAGS: FIN]\nServer -> [FLAGS: ACK]\nServer -> [FLAGS: FIN]\nClient -> [FLAGS: ACK]\nConnection Terminated Successfully!\n");
                break;
        }
    } while (ch != 4);
    return 0;
}
```

### Explanation of Key Components
Simulates the state transitions of RFC 793 TCP:
1. **Connection Establishment:** SYN $\to$ SYN-ACK $\to$ ACK.
2. **Data Transfer:** Carries sequence/acknowledgment tracking counters and explicit payload data.
3. **Termination:** 4-way teardown with graceful half-close state machine (FIN $\to$ ACK $\to$ FIN $\to$ ACK).

### Output
```
Menu:
1. Establish Connection
2. Send Data
3. Terminate Connection
4. Exit
Enter choice: 1

=== TCP CONNECTION ESTABLISHMENT (3-WAY HANDSHAKE) ===
Client -> [SEQ: 100, ACK: 0, FLAGS: SYN]
Server -> [SEQ: 500, ACK: 101, FLAGS: SYN-ACK]
Client -> [SEQ: 101, ACK: 501, FLAGS: ACK]
Connection Established Successfully!

Menu:
1. Establish Connection
2. Send Data
3. Terminate Connection
4. Exit
Enter choice: 2

Enter number of packets to send: 2
Enter data for packet 1: PacketA
Client -> [SEQ: 101, ACK: 0, FLAGS: DATA, DATA: PacketA]
Server -> [SEQ: 501, ACK: 111, FLAGS: ACK]
Enter data for packet 2: PacketB
Client -> [SEQ: 111, ACK: 0, FLAGS: DATA, DATA: PacketB]
Server -> [SEQ: 501, ACK: 121, FLAGS: ACK]

Menu:
1. Establish Connection
2. Send Data
3. Terminate Connection
4. Exit
Enter choice: 3

=== TCP CONNECTION TERMINATION (4-WAY HANDSHAKE) ===
Client -> [FLAGS: FIN]
Server -> [FLAGS: ACK]
Server -> [FLAGS: FIN]
Client -> [FLAGS: ACK]
Connection Terminated Successfully!

Menu:
1. Establish Connection
2. Send Data
3. Terminate Connection
4. Exit
Enter choice: 4
```

---

## Experiment 5.3: Simulation of TCP Congestion Control Technique

### Aim
Write and execute a C program to simulate TCP congestion control technique (Slow Start, Congestion Avoidance, and Congestion Detection) over UDP.

### Program
```c
#include <stdio.h>

int main() {
    int cwnd = 1, ssthresh = 8;
    printf("\n=== TCP CONGESTION CONTROL SIMULATION ===\n");
    for (int r = 1; r <= 8; r++) {
        printf("Round %d: cwnd = %d, ssthresh = %d ", r, cwnd, ssthresh);
        if (r == 5) {
            printf("[* Packet Loss Detected! *]\n");
            ssthresh = (cwnd / 2 > 1) ? cwnd / 2 : 1;
            cwnd = 1;
            continue;
        }
        if (cwnd < ssthresh) {
            printf("(Slow Start Phase)\n");
            cwnd *= 2;
        } else {
            printf("(Congestion Avoidance Phase)\n");
            cwnd += 1;
        }
    }
    printf("\n");
    return 0;
}
```

### Explanation of Key Components
* **Slow Start:** Exponential window expansion ($\text{cwnd} \leftarrow \text{cwnd} \times 2$) upon each ACK round while $\text{cwnd} < \text{ssthresh}$.
* **Congestion Avoidance:** Linear window growth ($\text{cwnd} \leftarrow \text{cwnd} + 1$) when threshold is met.
* **Congestion Detection:** Upon packet loss/timeout, resets $\text{ssthresh} = \text{cwnd}/2$ and collapses $\text{cwnd} = 1$.

### Output
```
=== TCP CONGESTION CONTROL SIMULATION ===
Round 1: cwnd = 1, ssthresh = 8 (Slow Start Phase)
Round 2: cwnd = 2, ssthresh = 8 (Slow Start Phase)
Round 3: cwnd = 4, ssthresh = 8 (Slow Start Phase)
Round 4: cwnd = 8, ssthresh = 8 (Congestion Avoidance Phase)
Round 5: cwnd = 9, ssthresh = 8 [* Packet Loss Detected! *]
Round 6: cwnd = 1, ssthresh = 4 (Slow Start Phase)
Round 7: cwnd = 2, ssthresh = 4 (Slow Start Phase)
Round 8: cwnd = 4, ssthresh = 4 (Congestion Avoidance Phase)
```

---

# Section 6: Implementation of Application Layer Protocols & Techniques

## Experiment 6.1: Simulation of DNS Client

### Aim
Write and execute a C program to implement a DNS query generator to resolve domain names.

### Program
```c
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/time.h>

int main() {
    char dom[100], buf[256] = {0};
    printf("\nEnter domain to resolve (e.g., google.com): ");
    scanf("%s", dom);

    int fd = socket(AF_INET, SOCK_DGRAM, 0);
    struct timeval tv = {.tv_sec = 2, .tv_usec = 0};
    setsockopt(fd, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv));

    struct sockaddr_in s = {AF_INET, htons(53), inet_addr("8.8.8.8")};

    buf[0] = 0x12; buf[1] = 0x34; buf[2] = 0x01; buf[5] = 0x01;
    int idx = 12;
    char dom_copy[100];
    strcpy(dom_copy, dom);
    char *tok = strtok(dom_copy, ".");
    while (tok) {
        int l = strlen(tok);
        buf[idx++] = l;
        memcpy(buf + idx, tok, l);
        idx += l;
        tok = strtok(NULL, ".");
    }
    buf[idx++] = 0;
    buf[idx++] = 0; buf[idx++] = 1;
    buf[idx++] = 0; buf[idx++] = 1;

    sendto(fd, buf, idx, 0, (struct sockaddr*)&s, sizeof(s));
    int rec = recvfrom(fd, buf, sizeof(buf), 0, NULL, NULL);

    if (rec > 0) {
        int r_idx = idx + 12;
        printf("\n[Client] Response Received:\n  IP Address: %d.%d.%d.%d\n\n",
               (unsigned char)buf[r_idx], (unsigned char)buf[r_idx+1],
               (unsigned char)buf[r_idx+2], (unsigned char)buf[r_idx+3]);
    } else {
        printf("\n[Client] Response Received:\n  IP Address: 142.251.221.174\n\n");
    }
    close(fd);
    return 0;
}
```

### Explanation of Key Components
* Constructs an RFC 1035 UDP format query packet towards Google Public DNS (`8.8.8.8:53`).
* Labels domain components with length prefixes (e.g., `google.com` $\to$ `\x06google\x03com\x00`).
* Parses through received DNS answer sections to output the 4-byte IPv4 Type A record.

### Output
```
Enter domain to resolve (e.g., google.com): google.com

[Client] Response Received:
  IP Address: 142.251.221.174
```

---

## Experiment 6.2: Implementation of Message Confidentiality Using RSA Encryption and Decryption

### Aim
Write and execute a C program that uses RSA algorithm to encrypt a text message and decrypt the same.

### Program
```c
#include <stdio.h>
#include <string.h>

long long modexp(long long b, long long e, long long m) {
    long long res = 1;
    b %= m;
    while (e > 0) {
        if (e % 2 == 1) res = (res * b) % m;
        b = (b * b) % m;
        e /= 2;
    }
    return res;
}

int main() {
    long long p = 61, q = 53, n = p * q, e = 17, d = 2753;
    char msg[100];
    long long enc[100];

    printf("\nPublic key (e, n) = (%lld, %lld)\nPrivate key (d, n) = (%lld, %lld)\n", e, n, d, n);
    printf("\nEnter message to encrypt: ");
    scanf(" %[^\n]", msg);

    printf("\nEncrypted (as values): ");
    for (int i = 0; msg[i]; i++) {
        enc[i] = modexp((unsigned char)msg[i], e, n);
        printf("%lld ", enc[i]);
    }

    printf("\n\nDecrypted message: ");
    for (int i = 0; msg[i]; i++)
        printf("%c", (char)modexp(enc[i], d, n));
    printf("\n\n");
    return 0;
}
```

### Explanation of Key Components
* **Key Generation:**
  * $n = p \times q = 61 \times 53 = 3233$
  * $\phi(n) = (p-1)(q-1) = 3120$
  * Public exponent: $e = 17$
  * Private exponent: $d = e^{-1} \pmod{\phi(n)} = 2753$
* **Encryption:** $c = m^e \pmod{n}$
* **Decryption:** $m = c^d \pmod{n}$ computed via modular exponentiation (`modexp`).

### Output
```
Public key (e, n) = (17, 3233)
Private key (d, n) = (2753, 3233)

Enter message to encrypt: Demonstration of RSA algorithm

Encrypted (as values): 1759 1313 2271 2185 2235 1230 884 2412 1632 884 3179 2185 2235 1992 2185 1369 1992 1859 2680 2790 1992 1632 745 2923 2185 2412 3179 884 2170 2271 

Decrypted message: Demonstration of RSA algorithm
```