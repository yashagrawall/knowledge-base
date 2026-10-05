
Type : #Note    
Date : 2026-09-29    
Tags : [[computer networking]]   
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Protocol Layering 

---

- **Protocol** : defines the rules that both the sender and reciever and all intermediate devices need to follow to be able to communicate effectively 

---
- For complex communication → divide the task between different layers 
- protocol needed at each layer 

>[!example] Single Layer Protocol 
>![[Pasted image 20260929204133.png]]
>- Communication between Maria and Ann takes place in one layer, face to face, in the same language.    
>  
>**Protocols**   
>1. Maria and Ann should greet each other when they meet. 
>2. They should confine their vocabulary to the level of their friendship. 
>3. They must not interrupt each other. 
>4. Conversation should be a dialog and not a monolog. 
>5. They both should exchange some nice words when they leave. 

>[!example] Three Layer Protocol
>![[Pasted image 20260929215857.png]]
>- Maria and Ann are communicating using regular mail through the post office. 
>- Encrypted Messages 
>- Maria and Ann each have three machines that perform tasks at each layer 
>- Sender : 
>	- Layer 3 : Sender talks to it and it transcribes to Plaintext
>	- Layer 2 : Encrypt and converts it to Ciphertext 
>	- Layer 1 : Sends mail with addresses of both parties 
>- Reciever : 
>	- Layer 1 : Recieve mail and confirm addresses 
>	- Layer 2 : Decrypts and converts the Ciphertext to Plaintext
>	- Layer 3 : Reads it to the Reciever 

- A single machine can handle all three tasks but changing the encryption/decryption technique would mean changing the whole machine 
- **Modularity** : Assigning one task to a layer which are independent of each other 
	- Allows us to separate the services from the implementation 
- **Module / Layer** : A black box with inputs and outputs, without concern about how inputs are changed to outputs
	- If 2 Machines can provide the same Output when given the same Inputs → they can replace each  other. 
	- A layer needs to be able to receive a set of services from the lower layer and to give the services to the upper layer with no regard of how the layer is implemeneted
> Example : Maria decides to do the job of the first layer on her own
- Communication does not always use two end systems 
	- Intermediate systems that need only some layers, but not all layers 
	- Without Protocol layering → each intermediate system as complex as the end systems → expensive setup 

---
## Principles of Protocol Layering 

---
### First Principle 

- For Bidirectional communication → each layer should be able to perform two opposite tasks, one in each direction. 

> [!example] 
> **3rd Layer** : task is to listen (in one direction) and talk (in the other direction)   
> **2nd Layer** : able to encrpt and decrypt    
> **1st Layer** : send and recieve mail

---
### Second Principle 

- The two objects under each layer at both sites should be identical.

> [!example]  
> The object under :
> **3rd Layer** at both sites should be a plaintext letter.   
> **2nd Layer** at both sites should be a ciphertext letter.    
> **1st Layer** at both sites should a piece of mail

---

## Logical Connections 

- Layer-to-layer communication → logical communication between each layer 

>[!example]
>![[Pasted image 20260929231622.png]]
>There is a imaginary connection at each layer through which they can send the objects created from that layer.

















---
# Questions 






---
# References 

1. [[Data_Communication_&_Networking-Forouzan-5th_Ed.pdf]] Chapter 2 Sectipn 2.1