
Type : #Note    
Date : 2026-10-07    
Tags : [[computer networking]]  
~ ***Yash Agrawall*** ~     

---
# Data-link Layer 

- Internet is made up of several links (LANs and WANs) connected by routers
- Routers are responsible to choose the best link between the host and the destination through which a datagram can travel from 
- The Data-link layer is responsible for taking the datagram and moving it across the link
- The link can be : 
	- a wired LAN with a link-layer switch 
	- a wireless LAN 
	- a wired WAN 
	- a wireless WAN 
- We can have different protocols used with any link type 
- [[TCP-IP Protocol]] does not define any specific protocol for the data-link layer 
- Any protocol that can take the datagram and carry through the link suffices for the network layer 
- Data-link layer takes a **datagram** and encapsulates it in a **packet** called the *frame* 



---
# Questions 






---
# References 

1. [[Data_Communication_&_Networking-Forouzan-5th_Ed.pdf]] Chapter 2 Section 2.2.3
2. [[TCP-IP Protocol]]
3. [[Protocol Layering]]