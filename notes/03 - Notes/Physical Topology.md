
Type : #Note    
Date : 2026-09-13    
Tags : [[computer networking]]      
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Physical Topology 

- way in which a network is laid out physically 
- two or more devices connect to a link → two or more links form a topology 
- topology : the geometric representation of the relationship of all the links and linking devices (nodes) to one another 

---
## Types of Topologies 
> 4 possible types 

---
### Mesh Topology 

- every device has a dedicated [[Physical Structures of a Network#Point-to-point|point-to-point]] link to every other device 
- dedicated → link only carries traffic only between the two devices it connects 
- In a fully connected mesh network of $n$ nodes :
	- each node must be connected to $n-1$ nodes  
	- total physical links : $n(n-1)$
	- total duplex(two way) mode links : $\frac{n(n-1)}{2}$
	- every device must have $n-1$ I/O ports to be connected to the other $n-1$ stations

![[Pasted image 20260913233302.png]]

#### Advantages 

- use of dedicated data link ensures that each connection can carry its own data load 
- mesh topologies are robust 
- failure of a link does not break the entire system 
- advantage of privacy and security 
	- messages travel along a dedicated line 
	- only the intended recipient sees it 
	- physical boundaries prevent other users from gaining access to messages 
- [[Physical Structures of a Network#Point-to-point|point-to-point]] links make fault identification and fault isolation easy  
	- traffics can be rerouted to avoid links with suspected problems 
	- Easier for the Network Manager to discover the precise location of the fault and aids in finding its cause and solution 

#### Disadvantages 

- more no. of cabling and I/O ports are required 
	- every device must be connected to every other device 
- installation and re-connection are difficult 
- the sheer bulk of the wiring can be greater than the available space (in walls, ceilings or floors) 
- expensive hardware : connecting each I/O port and cable 

#### Practical Usage 

- limited usage 

###### Examples 

- backbone connecting the main computers of a hybrid network that can include several other topologies 
- connection of telephone regional offices in which each regional office needs to be connected to every other regional office 

---
### Star Topology 

- Each device has a dedicated [[Physical Structures of a Network#Point-to-point|point-to-point]] link only to a central controller 
- Every device needs only $one$ link and $one$ I/O port to connect to any number of devices 

![[Pasted image 20260913235928.png]]

#### Advantages 

- Easy to install and reconfigure 
- Far less cabling needs to be housed 
- Additions, moves, and deletion involves only one connection (between that device and the hub)
- Robust : if one link fails only that link is affected 
- Easy fault identification and fault isolation 
	- as long as the is working → it can be used to monitor link problems and bypass defective links. 

#### Disadvantages 

- The whole mesh is dependent one one single point → the hub 
	- If the hub goes down, the whole system fails 
- No. of cables required are still more than [[#Ring Topology]] & [[#Bus Topology]] 
- Privacy and Security is lesser compared to [[#Star Topology]] 
	- if the hub is compromised, privacy is compromised

#### Practical Usage 

- Used in LANs (Local Area Networks)

---
### Bus Topology 

- Uses [[Physical Structures of a Network#Multipoint / Multidrop|multipoint]] connections 
- One long cable acts as a backbone to link all the devices in a network 
- Nodes are connected to the bus cable by drop lines and taps 
	- drop line : connection running between the device and the main cable 
	- taps : connector that either : 
		- splices into the main cable or
		- punctures the sheathing of a cable to create a contact with the metallic core 
- Backbone cable should be laid down on the most efficient path then connected to the nodes by drop lines of various lengths 

![[Pasted image 20260914002152.png]]

#### Advantages 

- Easy to install 
- Uses less cables than [[#Mesh Topology]] and [[#Star Topology]]

#### Disadvantages 

- Heat loss makes the signal weaker and weaker as it travels farther and farther 
	- there is a limit on the no. of tabs a bus can support and on the distance between those taps 
- difficult re-connection and fault isolation 
- difficult to add a new device 
	- bus is designed optimally efficient at installation 
- Signal reflection at the taps can cause degradation in quality 
	- controlled by limiting the number and spacing of devices connected to a given length of cable 
- Adding new devices may require modification or replacement of the backbone 
- A fault or break in the bus cable stops all transmission 
- Damaged area reflects signals back in the direction of origin, creating noise in both directions 

#### Practical Usage 

- Ethernet LANs can use a bus topology 
- Bus topology was one of the first used topologies in design of early LANs

---
### Ring Topology 

- Each device has a dedicated [[Physical Structures of a Network#Point-to-point|point-to-point]] connection with only the two devices on either sides of it
- the signal is passed along the ring in one direction, from device to device, until it reaches its destination 
- Each device in the mesh has a repeater 
	- When a device receives a signal intended for another device, its repeater regenerates the bits and passes them along 

![[Pasted image 20260914004517.png]]

#### Advantages 

- Relatively easier to install and reconfigure 
- to add or delete a device can be done by changing only two connections 
- fault isolation is simplified 
	- in a ring, a signal is circulating at all times 
	- if one device does not receive a signal within a specified period → issues an alarm 
	- the alarm alerts the Network Operator to the problem and its location 

#### Disadvantages 

- Media and traffic considerations 
	- maximum ring length and no. of devices 
- unidirectional traffic 
- in a simple ring → break in the ring will disable the entire network 
	- solved by a dual ring or a switch capable of closing off the break 

#### Practical Usage 

- Prevalent when IBM introduced its LAN 
- Less popular these days 
	- need for higher speed LANs 

---
### Hybrid Topology 

---
###### Example 

- Main star topology with each branch connecting to several stations in a bus topology 

![[Pasted image 20260914005657.png]]

---
# Questions 






---
# References 

1. [[Forouzan-4th-ed.pdf]] Chapter 1 Section 1.2 