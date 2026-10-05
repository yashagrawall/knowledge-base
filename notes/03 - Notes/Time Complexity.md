
Type : #Note    
Date : 2026-09-27    
Tags :  [[DSA]]  
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Time Complexity 

- Time taken to run the code ❎
	- Depends on the capabalities of the CPU 

> [!info] 
> **Defination** : Rate of increase in time with respect to input size 

![[Pasted image 20260927134650.png]]

This θ represents the rate of change of time with respect to input size → Time Complexity 

---
## Types of Time Complexity 

1. Big-Oh ($O$) : Worst Case : Upper Bound
2. Theta ($θ$) : Average Case
3. Omega ($\Upomega$) : Best Case : Lower Bound

> [!info] 
> We mainly use the Big-Oh Notation : 
> - If code is efficient for the worst case → its efficient for other cases 

---
## Representation 

- Big-Oh Notation → $O(\_)$ 
- The rate (θ) is written within the brackets 

> [!example] 
> ```python 
> for i in range (1, n+1):
> 	print ("Yash")
> ```
> 
> Here for every value of `i`, the program is performing 3 Operartions : 
> 1. checking `i < n+1`
> 2. printing : `print("Yash")`
> 3. increasing the value of `i` : `i+=1`
>    
> So the Time Complexity will be : _O(3n)_

---
## Rules of Calculation of Time Complexity 

1. [[#Rule 1 : Always calculate Time Complexity in terms of Worst Case|Always calculate Time Complexity in terms of Worst Case]] 
2. [[#Rule 2 Avoid Constant Values|Avoid Constant Values]] 
3. [[#Rule 3 Avoid Lower Bound|Avoid Lower Bound]] 

---
### Rule 1 : Always calculate TIme Complexity in terms of Worst Case

There are three cases : 
1. Best Case 
2. Average Case 
3. Worst Case 

> [!example] 
> ```python 
> age = x
> if age >= 80: 
> 	print ("Super Senior")
> elif age >= 50 and age < 80: 
> 	print ("Senior")
> elif age >= 20 and age < 50: 
> 	print ("Working")
> elif age >= 13 and age < 20:
> 	print ("Teenager")
> else: 
> 	print ("Kid")
> ```
> 
> ---
> 
> Here, the **Best Case** would be : 
> - `x >= 80` 
> - No. of operations = 2 
>    1. checking : `if age >= 80`
>    2. printing : `print("Super Senior")`
> 
> ---
> 
> Here, the **Worst Case** would be : 
> - `x < 13`
> - No. of operations = 5
> 	1. checking : `if age >= 80`
> 	2. checking : `elif age >= 50 and age < 80`
> 	3. checking : `elif age >= 20 and age < 50`
> 	4. checking : `elif age >= 13 and age < 20`
> 	5. printing : `print ("Kid")`
> 
> ---
> 
> For **Average Case** : 
> $$\frac{\text{Worst Case + Best Case}}{2}$$ 
> ⇒ No. of operations = 3.5 

- Code is efficient when it can handle the Worst Cases 

---
### Rule 2 : Avoid Constant Values 

- Constant Values have relatively no. effect on the Time Complexity 

>[!example] 
>Time Complexity → O(8N<sup>6</sup> + 3N<sup>2</sup> + 15)  
>Lets say, N = 10<sup>5</sup>   
> ⇒ O(8 × 10<sup>30</sup> + 3 × 10<sup>10</sup> + 15)   
> + 15 is negligible compared to the other values ⇒ ignore

- We will be thinking for the worst case : very big no. ⇒ constant is negligible 
- We are just representing the rate 
	- graph of N Is linear 
	- graph of 3N is also linear 
	- So we can also ignore 3 while stating the Time Complexity 

---
### Rule 3 : Avoid Lower Bound 

>[!example] 
>Time Complexity → O(8N<sup>6</sup> + 3N<sup>2</sup>)  
>Lets say, N = 10<sup>5</sup>   
> ⇒ O(8 × 10<sup>30</sup> + 3 × 10<sup>10</sup>)   
> - 10<sup>10</sup> is negligible compared to the other value ⇒ ignore 
> - Time Complexity = O(N<sup>6</sup>)



---
# Questions 
###### Q1)
> [!question] 
> Calculate the Time Complexity of : 
> ```python 
> for i in range (1, n+1): 
> 	for j in range (1, n+1): 
> 	# code 
> ```
> 

A1) $O(n^2)$
- for i  loop → $n$ 
	- for each value of i → j loop → $n$
```
 i                       j       op
---             --------------------
 1               1, 2, 3, 4...n → n
 2               1, 2, 3, 4...n → n
 3               1, 2, 3, 4...n → n
 .                       .        .
 .                       .        .
 .                       .        .
 n               1, 2, 3, 4...n → n
```
- Calculate the sum of all operations → $n \times n = n^2$ 

- We do not consider the lower bounds ([[#Rules of Calculation of Time Complexity]])
	- hence we do not count the increments, and whatever is there in the rest of the code

---
###### Q2) 
>[!question] 
>Caluculate the Time Complexity of : 
>```python
>for i in range (1, n+1): 
>	for j in range (1, i+1):
>		# code
>```
>

A2) $O(n^2)$
```
 i                       j       op
---             --------------------
 1               1              → 1
 2               1, 2           → 2
 3               1, 2, 3        → 3
 .                        .       4
 .                        .       .
 .                        .       .
 n               1, 2, 3, 4...n → n
```
- Calculate the sum of all operations → $\frac{n(n+1)}{2}$
- Simplying it by following the [[#Rules of Calculation of Time Complexity]]: 
	- $\frac{n^2 + n}{2}$
	- $n$ is the lower bound : ignore 
	- $\frac{1}{2}$ is constant : ignore 
	- final answer : $n^2$

---
# References 

1. [YouTube DSA Series](https://youtu.be/bLm0wgPU-6A?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)