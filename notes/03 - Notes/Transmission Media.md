
Type : #Note    
Date : 2026-09-14    
Tags :  







[[computer networking]]   
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Transmission Media 

- Located below the Physical Layer 
- Directly controlled by the physical layer 

![[Pasted image 20260914193359.png]]

- Transmission Media : Anything that can carry information from one source to a destination 
- In data communications, 
	- transmission media  : free space, metallic cable or fiber-optic cable. 
	- information : a signal that is the result of a conversion of data from another form 

---
## History 

- Use of long distance communication using electric signals started with the invention of telegraph by Morse in the 19th century 
	- dependent of metallic medium 
	- slow 
- Telephone was invented in 1869
	- dependent on metallic medium 
	- unreliable due to poor quality of wires 
	- noisy lines 
	- unsophisticated technology 
- Wireless communication started in 1895 when Hertz was able to send high frequency signals 
- Marconi deviced a method to send telegraph type mesage over the Atlantic Ocean 

- Now we use : 
	- better metallic wires : twisted pair, coaxial cables
	- optic fibres → increseased data rate incredibility 
	- free space(air, water, vaccum) → more efficient 

--- 
## Background 

- Computers and telecommunication devices use signals to represent data 
- Signals are transmitted from one device to another in the form of EM energy → propagated through Transmission Media 
- EM energy consists of 
	- Electric Fields and Magnetic Fields vibrating in relation to each other 
	- Power 
	- Radio Waves 
	- Infrared Light 
	- Visible Light 
	- Ultraviolet light 
	- X rays
	- Gamma Rays 
	- Cosmic Rays 
- Not all are used to transmit data 

---
# Types of Transmission Media 

1. [[Guided Transmission Media]]
	- [[Twisted-pair Cable]] 
	- [[Coaxial Cable]] 
	- [[Fiber Optic Cable]] 

2. [[Unguided Transmission Media]]
	- Free Space 

![[Pasted image 20260915162736.png]]

---
## Common Terms 

---
### Attenuation 

- loss of signal strength as the signal travels through the medium 
- unit : decibels (dB)
- longer the transmission distance → greater the attenuation 
- higher the attenuation → weaker the signal recieved 
- repeaters / amplifiers may be needed for long distance 

$$
Distance (\uparrow) \to  Attenuation (\uparrow) \to \text{Signal Strength} (\downarrow) 
$$
---
### Frequency 

- No. of cycles of signals occuring per second 
- unit : Hertz (Hz)
- Higher frequency → higher [[#Data rate]] (generally)
	- but can also experience higher [[#Attenuation]] in some media
- The characteristics of a Transmission Media determines which range of frequensies it can carry effectively 
- Medium that can effectively carry higher frequeny signals can potentially support greater [[#bandwidth]] 
$$
Frequency = \text{How fast can the signal oscillates}
$$
---
### Distance 

- Length over which a signal can travel while maintaining acceptable quality 
- Twisted Pair cables have relatively shorter distances 
- [[Coaxial Cable]] : longer than typical twisted pair applications 
- [[Fiber Optic Cable]] : very long distances 
- Radio / Microwave : can cover large distance depending on [[#Frequency]], [[#Power]], Antenna and Envirnoment 
- Distance is closely related to [[#Attenuation]]

---
### Guage 

- Thickness / diameter of the conductor 
- for wire guage : 
	- Lower guage no. → thicker wire 
	- Higher guage no. → thinner wire 
- Thicher copper conductor → lower electrical resistance → reduced signal loss 

---
### Data rate 

- amount of data transmitted per unit time 
- unit : bits per second (bps)
- common units : Kbps, Mbps, Gbps
- Higher data rate → more information in the same amount of time 

---
### Bandwidth 

- the range of [[#Frequency|frequencies]] that a transmission media can effectively carry 
- unit : Hertz (Hz)
- Higher bandwidth → allows the medium to support higher [[#Data rate|data rates]] 

> [!note]  
> [[#Data rate]] and Bandwidth are not the same thing 

> [!example] 
> For a medium operating from 1 MHz to 10 Mhz :   
> 
> Bandwidth = 10 - 1 = 9 Mhz

$$
\text{Bandwidth = How much signal frequency range can the medium carry}
$$

---
### Power 

- amount of energy supplied to the signal for transmission 
- In wireless communication, Transmitted power affects how far a signal can travel and how reliably it can be received 
- Higher power → increased signal strength at receiver’s end 

> [!note] 
> Increasing Power does not eliminate all limitations such as [[#Attenuation]], Interference, or Obstacles 

- Power is important for radio, microwave and satellite communication 

$$
\text{{Power = How strongly is the signal transmitted?}}
$$

---
### Antenna 

- Antenna is the device used to transmit and / or recieve EM waves in wireless communication 
- The antenna converts : 
	- Electrical Signals → EM waves when transmitting 
	- EM waves → Electrical signals when receiving 
- Associated with unhinged / wireless media 

$$\text{Antenna = sends and receives wireless EM signals}$$

---
### Envirnoment

- the physical surrounding through which a signal propagates 
- Factors : 
	- Building and walls
	- Mountain and terrain 
	- Weather 
	- Rain and moisture
	- Obstacles 
	- EM Interference 
	- Atmospheric conditions 

$$\text{Environment = What the signal has to travel through or around?}$$

---







---
# Questions 






---
# References 

1. [[Forouzan-4th-ed.pdf]] Chapter 7