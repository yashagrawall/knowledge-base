
Type : #Note    
Date : 2026-09-15    
Tags : [[computer networking]]   
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Twisted-pair Cable 

- Consists of two conductors (normally Copper)
- Each has its own insulation 
- Twisted together 

![[Pasted image 20260915163748.png]]

- One wire is used to carry signals to the reciever 
- Other is used only as a ground reference 
- Reciever uses the difference between the two 
- Unwanted signals → interference (noise) , crosstalk 
	- affects both wires 
	- creates unwanted signals 


---
## Why are the wires twisted and not parallel ? 

- If parallel → effect of unwanted signals is not same in both the wires 
	- both are at different locations relative to the source of unwanted signals 
	- results in a difference at the recievers end 
- By twisting the two cables, a balance is maintained 
	- Both the cable have equal no. of unwanted signals 
	- Reciever calculates the difference → net zero 

- More the no. of twists per unit of length, more balanced the signal is, lesser the unwanted signals 
###### Example 

- In one twist one wire is closer and the other is farther → on the next twist, the reverse is true 
- Both the cable have equal no. of unwanted signals → Reciever calculates the difference → net zero 

---
## Unshielded v/s Shielded Twisted Pair Cable 

- Most common Twisted pair cable → Unshielded Twisted Pair (UTP)
- IBM created version → Shielded Twisted Pair (STP)
- STP cable has a metal foil or braided mesh covering that encases each pair of insulated conductors 
- Pros of STP : 
	- metal casing improves the quality of cable by preventing the penetration of noise or crosstalk 
- Cons of STP : 
	- bulkier and more expensive 
- STP is seldom used outside of IBM 

![[Pasted image 20260915171519.png]]

---
## Categories of UTP 

- The Electronic Industries Association (EIA) has developed standards to classify UTP cable into 7 categories  
- 1 → lowest quality cable 
- 7 → highest quality cable 
- Each EIA category is suitable for specific use case 

![[Pasted image 20260915171904.png]]

---
## Connectors 

- Most common UTP connector is RJ45 (RJ → Registered Jack)
- RJ45 is a key connector → can be inserted in only one way 

![[Pasted image 20260915172255.png]]

---
## Performance 

- Compare [[Transmission Media#Attenuation|Attenuation]] v/s [[Transmission Media#Frequency|Frequency]] and [[Transmission Media#Distance|Distance]] 
- With increasing [[Transmission Media#Frequency|frequency]], the [[Transmission Media#Attenuation|attenuation]] sharply increases with frequencies above 100 kHz 

![[Pasted image 20260915193749.png]]

---
## Applications 

- Used in telephone lines to provide voice and data channels 
	- [[#Categories of UTP|Category]] 1 UTP 
- LANs such as 1OBase-T and 1OOBase -T 
	- [[#Categories of UTP|Category]] 3 to 7

---
# Questions 






---
# References 

1. [[Forouzan-4th-ed.pdf]] Chapter 7 Section 7.1 