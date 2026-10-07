
Type : #Note    
Date : 2026-09-29    
Tags : [[computer networking]]        
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# TCP/IP Protocol Suite

- Transmission Control Protocol / Internet Protocol 
- A set of protocol organised in different layers 
- Hierarchical protocol made up of interactive modules 
	- each upper level protocol is supported by the services provided by one or more lower level protocols

- Originally TCP/IP was defined as a 4 software layers built upon a hardware
- As of 2026, it is thought of as a 5 layer model 

![[Pasted image 20261006225220.png]]

> [!example] Communication between two devices using 2 LANs (links) each with a link-layer switch which is connected to a router. 
> ![[Pasted image 20261006225600.png]]


- Each physical device has a set of layers depending on the role of the device in the internet 
- The source and the destination have all the [[Layers in a TCP-IP Protocol|5 layers]] 
- Data is sent through and recieved through the [[Physical Layer]] 
- Router has only 3 layers : [[Network Layer]], [[Data-link Layer]], [[Physical Layer]] 
- Router is always involved in one [[Network Layer]] but in $n$ combinations of [[Data-link Layer|link]] and [[Physical Layer|physical layers]] in which $n$ is the no. of links the router is connected to. 
- Each link may be using different [[Data-link Layer|link-layer]] and [[Physical Layer|physical layer]] protocols 
	- The router needs to recieve in different pairs of protocols and send in another pairs of protocols
- [[Data-link Layer|link-layer]] switch is involved in 2 layers : [[Physical Layer|Physical]] and [[Data-link Layer|Data-link]] 
- The switch has 2 different connections but the connections are in the same link → uses same pair of protocols 



---
# Questions 






---
# References 

1. [[Data_Communication_&_Networking-Forouzan-5th_Ed.pdf]] Chapter 2 Section 2.2