
Type : #Note    
Date : 2026-10-07    
Tags : [[computer networking]]       
~ ***Yash Agrawall*** ~     

---
# Layers in a [[TCP-IP Protocol]] 

---
## Logical Connections between layers 

![[Pasted image 20261007010258.png]]

- Duty of [[Application Layer]] , [[Transport Layer]] and [[Network Layer]] is end-to-end. 
	- the domain of duty of the top three layers is the internet
	- Data unit (packets) should not be changed by any router or link-layer switch 
- Duty of [[Data-link Layer]] and [[Physical Layer]] is hop-to-hop.
	- hop is a host or a router 
	- the domain of duty of the two lower layers is the link.
	- Packet created by the host is changed only by the routers, not by the [[Data-link Layer|link layer]] switch

### [[Protocol Layering#Second Principle| 2nd Principle of Protocol Layering in TCP/IP Protocol]]

![[Pasted image 20261007011343.png]]

- Logical Connection is between the Hosts 
- Identical objects exist between two hops (not necessarily → Fragmentation)
	- Fragmentation : a router may fragment the packet at the network layer and send more packets than received
- Link between two hops does not change the object 

---
# Questions 






---
# References 

1. [[Data_Communication_&_Networking-Forouzan-5th_Ed.pdf]] Chapter 2 Section 2.2.2
2. [[TCP-IP Protocol]]
3. [[Protocol Layering]]