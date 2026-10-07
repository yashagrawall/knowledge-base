
Type : #Note    
Date : 2026-10-06    
Tags : [[DSA]] ; [[Maths]]          
~ ***Yash Agrawall*** ~     

---
# Tower of Hanoi / Bramha

- It is a classic mathematical puzzle consisting of three rods and a set of disks of varying sizes. 
- The puzzle starts with the disks stacked on one rod in ascending order, forming a conical shape.
- Objective : Move the entire stack of disks to another rod while following these rules:
	- Only one disk can be moved at a time
	- A disk can only be placed on an empty rod or a larger disk
	- No larger disk can be placed on top of a smaller disk

![[Pasted image 20260113164618.png]]

- In order to shift $n$ no. of disks from Origin to Destination → first shift $n-1$ disks from origin to Mid-Tower. Only then can the $n^{th}$ disk be shifted to the Destination.
- Total no. of disk movements to shift $n$ no. of disks = $2^n-1$
- Total no. of function calls = $2^{n+1}-1$

---
# Questions 






---
# References 

1. [[Recursion]]
2. [[Stack]]
3. [[Tree_DSA|Trees]]
4. [YouTube Lecture - Recurrsion](https://youtu.be/2o2vX0ZqQ_Y?t=10226)
5. [YouTube Python DSA Series](https://youtu.be/-VwidRe3Ob8?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)