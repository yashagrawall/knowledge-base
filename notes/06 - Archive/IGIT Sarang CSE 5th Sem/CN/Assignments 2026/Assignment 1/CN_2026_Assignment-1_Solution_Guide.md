
Type : #RawNote       
Date : 2026-09-12        
Tags :  [[College]]  
~ ***Yash Agrawall*** ~     

---
# CN_2026_Assignment-1_Solution_Guide

---
## 1. Prerequisites

| Topic                       | Cover from           | What to learn                                                                               |
| --------------------------- | -------------------- | ------------------------------------------------------------------------------------------- |
| What is data communication? | **Forouzan — Ch. 1** | Sender, receiver, message, medium, protocol                                                 |
| Basic network idea          | **Forouzan — Ch. 1** | Why data needs a communication medium<br>Communication between devices, data flow, networks |
| Analog vs digital data      | **Forouzan — Ch. 3** | Basic distinction                                                                           |
| Signals                     | **Forouzan — Ch. 3** | Amplitude, frequency, phase, period, wavelength                                             |
| Bandwidth                   | **Forouzan — Ch. 3** | What bandwidth actually means<br>Frequency range and its relationship to data transmission  |
| Transmission impairment     | **Forouzan — Ch. 3** | Attenuation, distortion, noise                                                              |

Forouzan's 4th edition specifically organizes the material as **Data and Signals → Digital Transmission → Analog Transmission → Multiplexing → Transmission Media**, so it is a very good backbone for this sequence. ([Google Books](https://books.google.com/books/about/Data_Communications_and_Networking.html?hl=en&id=Bk4wnwEACAAJ&output=html_text&utm_source=chatgpt.com "Data Communications and Networking - Behrouz A. Forouzan - Google Books"))

---

# 2. Core Transmission Media

### A. Guided Media

|Topic|Primary source|Secondary source|
|---|---|---|
|Guided media overview|**Forouzan — Ch. 7**|Tanenbaum — Ch. 2|
|Twisted-pair cable|**Forouzan — Ch. 7**|Tanenbaum — Ch. 2|
|UTP|**Forouzan — Ch. 7**|Tanenbaum|
|STP|**Forouzan — Ch. 7**|Tanenbaum|
|Coaxial cable|**Forouzan — Ch. 7**|Tanenbaum|
|Optical fiber|**Forouzan — Ch. 7**|**Tanenbaum — Ch. 2**|
|Fiber construction|**Forouzan — Ch. 7**|Tanenbaum|
|Total internal reflection|**Tanenbaum — Ch. 2**|Tomasi|
|Single-mode vs multimode|**Tanenbaum — Ch. 2**|Tomasi|
|Fiber vs copper|**Tanenbaum — Ch. 2**|Tomasi|

Forouzan's Transmission Media chapter directly covers **twisted pair, coaxial cable and optical fiber**. ([Kriso](https://www.kriso.ee/introduction-data-communications-networking-db-9780256230444.html?utm_source=chatgpt.com "Introduction to Data Communications and Networking - Behrouz A. Forouzan - 9780256230444 - Raamat | Kriso.ee"))

Tanenbaum's Physical Layer chapter goes considerably deeper into **twisted pair, coaxial cable, fiber optics, fiber networks and fiber-vs-copper comparisons**. ([O'Reilly Media](https://www.oreilly.com/library/view/computer-networks-fourth/0130661023/?utm_source=chatgpt.com "Computer Networks, Fourth Edition [Book]"))

---

# 3. Unguided Media

|Topic|Primary source|Secondary source|
|---|---|---|
|Unguided media overview|**Forouzan — Ch. 7**|Tanenbaum — Ch. 2|
|Electromagnetic spectrum|**Tanenbaum — Ch. 2**|Tomasi|
|Radio waves|**Forouzan — Ch. 7**|Tanenbaum|
|Radio propagation|**Forouzan — Ch. 7**|Tanenbaum|
|Microwaves|**Forouzan — Ch. 7**|Tanenbaum|
|Line-of-sight|**Tanenbaum — Ch. 2**|Tomasi|
|Infrared|**Tanenbaum — Ch. 2**|Tomasi|
|Satellite communication|**Tanenbaum — Ch. 2**|Forouzan|

Tanenbaum's Physical Layer chapter has dedicated sections on **radio, microwave, infrared/millimeter waves and communication satellites**, making it particularly good for the wireless portion. ([O'Reilly Media](https://www.oreilly.com/library/view/computer-networks-fourth/0130661023/?utm_source=chatgpt.com "Computer Networks, Fourth Edition [Book]"))

---

# 4. Concepts you should understand _after_ the media

These aren't prerequisites for understanding the media, but they'll help you write a much better report.

|Topic|Source|
|---|---|
|Bit rate|**Forouzan — Ch. 3–4**|
|Baud rate|**Forouzan — Ch. 4–5**|
|Data-rate limitations|**Tanenbaum — Ch. 2**|
|Nyquist concept|**Tanenbaum — Ch. 2**|
|Shannon capacity|**Tanenbaum — Ch. 2**|
|Signal-to-noise ratio|**Forouzan — Ch. 3**|
|Transmission distance|**Forouzan + Tanenbaum**|

**Don't go deep into the mathematics.** For your report, understanding the physical meaning is more valuable.

---

# 5. For deeper technical understanding

### **Tomasi — use selectively**

Don't read the entire book.

Use it when you want to understand:

- How electrical signals travel through copper
    
- Why shielding matters
    
- Fiber-optic transmission
    
- Electromagnetic transmission
    
- Practical communication systems
    

Think of Tomasi as your **"how does this physically work?"** source.

---

# 6. For modern networking context

### **Kurose & Ross**

Use this **after** you've understood the basic media.

Use it for questions like:

- Where does fiber fit into the Internet?
    
- Why are different physical media used in different parts of a network?
    
- How does the physical layer relate to the rest of the network stack?
    

Don't use Kurose & Ross as your primary source for the basic transmission-media theory.

---

# 7. Your actual study sequence

I would make you study exactly this:

### **FOUNDATION**

**1. Data communication**  
→ Forouzan Ch. 1

**2. Data & signals**  
→ Forouzan Ch. 3

**3. Bandwidth + frequency**  
→ Forouzan Ch. 3

**4. Transmission impairment**  
→ Forouzan Ch. 3

↓

### **TRANSMISSION MEDIA**

**5. What is transmission media?**  
→ Forouzan Ch. 7

**6. Guided vs unguided**  
→ Forouzan Ch. 7

**7. Twisted pair**  
→ Forouzan Ch. 7 → Tanenbaum Ch. 2

**8. Coaxial cable**  
→ Forouzan Ch. 7 → Tanenbaum Ch. 2

**9. Optical fiber**  
→ Forouzan Ch. 7 → Tanenbaum Ch. 2 → Tomasi if needed

**10. Radio**  
→ Forouzan Ch. 7 → Tanenbaum Ch. 2

**11. Microwave**  
→ Forouzan Ch. 7 → Tanenbaum Ch. 2

**12. Infrared**  
→ Tanenbaum Ch. 2

**13. Satellite**  
→ Tanenbaum Ch. 2

↓

### **SYNTHESIS**

**14. Compare all media**  
→ Your own analysis + Forouzan/Tanenbaum

**15. Applications**  
→ Kurose & Ross + the textbooks

**16. Advantages & limitations**  
→ Compare what you've learned

↓

### **REPORT**

**17. Build the report structure**  
**18. Write in your own words**  
**19. Add citations**  
**20. References/Bibliography**

---

## The 3 books that actually matter

If you don't want to juggle five books:

### **#1 — Forouzan**

**Learn the fundamentals + most of the actual topic.**

### **#2 — Tanenbaum**

**Deepen your understanding + wireless + comparisons.**

### **#3 — Tomasi**

**Only when you want additional physical/technical depth.**

Kurose & Ross and Olifer are **optional** for this particular report.

**So your study path is essentially:**

> **Forouzan Ch. 1 → Ch. 3 → Ch. 7**  
> **↓**  
> **Tanenbaum Ch. 2 for deeper understanding**  
> **↓**  
> **Tomasi only where necessary**  
> **↓**  
> **Write the report**

This is considerably more efficient than trying to consume an entire Computer Networks course first.

---
# REPORT FORMAT — TRANSMISSION MEDIA

---
- **Target length:** 5–6 pages of main content
- **Format:** Academic/technical report
- **Writing style:** Formal, clear, and in your own words
- **Use:** Numbered headings, diagrams/figures, tables, and in-text citations
---

- ### **PAGE 1 — TITLE / COVER PAGE**
    
    **TRANSMISSION MEDIA**  
    _A Technical Report_
    
    **Submitted by**
    
    **Full Name:** __________________________  
    **Registration Number:** __________________  
    **Roll Number:** _________________________
    
    **Department:** __________________________  
    **College/University:** ___________________
    
    **Subject:** Computer Networks
    
    **Academic Year:** 2026–27
    
    - Keep this page clean.
    - **No abstract or technical content on this page.**
    - Center-align the main title and student details.

---

- ### **PAGE 2 — ABSTRACT + INTRODUCTION**
    
    **1. Abstract**
    
    - ~150–200 words
    - Briefly explain:
        - What transmission media is
        - Why it is important
        - Main types covered
        - What the report examines
    
    **2. Introduction**
    
    - What is data communication?
    - Why communication requires a medium
    - What is transmission media?
    - Role of transmission media in computer networks
    - Brief overview of the report

---

- ### **PAGE 3 — FUNDAMENTALS + GUIDED MEDIA**
    
    **3. Fundamentals of Transmission Media**
    
    - Signal and transmission
    - Bandwidth
    - Data rate
    - Attenuation
    - Noise/interference
    - Factors affecting transmission quality
    
    **4. Classification of Transmission Media**
    
    - Guided media
    - Unguided media
    - Add a simple classification diagram
    
    **5. Guided Transmission Media**
    
    **5.1 Twisted-Pair Cable**
    
    - Construction
    - Working principle
    - UTP and STP
    - Advantages
    - Limitations
    - Applications

---

- ### **PAGE 4 — GUIDED MEDIA**
    
    **5.2 Coaxial Cable**
    
    - Construction
    - Working
    - Advantages
    - Limitations
    - Applications
    
    **5.3 Optical Fiber**
    
    - Construction
    - Working principle
    - Total internal reflection
    - Single-mode vs multimode
    - Advantages
    - Limitations
    - Applications
    - Give **optical fiber the most space** because it is technically richer and important in modern networks.
    - Include a labeled diagram of fiber construction.

---

- ### **PAGE 5 — UNGUIDED MEDIA**
    
    **6. Unguided Transmission Media**
    
    **6.1 Radio Waves**
    
    - Characteristics
    - Propagation
    - Applications
    - Advantages/limitations
    
    **6.2 Microwaves**
    
    - Characteristics
    - Line-of-sight transmission
    - Applications
    - Advantages/limitations
    
    **6.3 Infrared**
    
    - Characteristics
    - Range
    - Applications
    - Advantages/limitations
    
    **6.4 Satellite Communication**
    
    - Uplink/downlink
    - Basic working
    - Applications
    - Advantages/limitations

---

- ### **PAGE 6 — COMPARISON + APPLICATIONS + CONCLUSION**
    
    **7. Comparison of Transmission Media**
    
    Include a table:

|Medium|Type|Bandwidth|Range|Interference|Cost|Major Applications|
|---|---|---|---|---|---|---|
    
**8. Applications**
    
- Internet infrastructure
    - Ethernet
    - Telephone communication
    - Data centers
    - Wi-Fi
    - Cellular networks
    - Satellite communication
    - Undersea cables
    
    **9. Conclusion**
    
    - Summarize the major findings
    - Explain why no single medium is ideal for every situation
    - Connect the choice of medium to factors such as distance, bandwidth, cost, interference, and reliability
    
    **10. References**
    
    - List the sources actually used.

---

- ## **Reference format**
    
    Use a consistent academic style. For example:
    
    **Books**
    
    `[1]` B. A. Forouzan, _Data Communications and Networking_, McGraw-Hill.
    
    `[2]` A. S. Tanenbaum and D. J. Wetherall, _Computer Networks_, Pearson.
    
    `[3]` W. Tomasi, _Introduction to Data Communications and Networking_, Pearson.
    
    **Web sources**
    
    `[4]` Organization/Author, “Title of webpage,” Website, Year. [Online]. Available: URL. [Accessed: September 2026].
    
- **In-text citation example:**
    
    > Optical fiber uses light to transmit information and is highly resistant to electromagnetic interference [1].
    
- **Figures:** Number them:
    - _Figure 1. Classification of Transmission Media_
    - _Figure 2. Structure of a Coaxial Cable_
    - _Figure 3. Structure of an Optical Fiber_
- **Tables:** Number them:
    - _Table 1. Comparison of Transmission Media_
- **Important:** The **5–6 pages should ideally mean the substantive report**, excluding the cover page and potentially the references page. If your instructor has explicitly said “5–6 pages including everything,” then we should compress the structure accordingly.