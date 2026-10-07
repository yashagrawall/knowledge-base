
Type : #Note    
Date :  2026-04-01  
Tags :  [[DSA]] ; [[C]] ; [[Python]]      
~ ***Yash Agrawall*** ~  

---
# Recursion

> The theory is less, but this Topic is very Important. Practice as many Qs as you can.

- Where a function calls itself to solve a problem. 
- A function is recursive if it invokes itself within its own definition. 
- It is particularly useful for solving problems involving repetitive tasks or iterations in reverse order. 
- Recursion is an alternative to iteration, and both techniques are used to repeatedly execute a function.
- Its better to solve recursion using [[Tree_DSA|Tree]] 
- It requires two essential elements:
	- A base condition to stop the recursion.
	- Logic to solve the problem step-by-step.

---
## Infinite Recurssion 

> No base condition to stop the recursion   

 > [!example] 
 > ```python 
 > def greet():
 > 	print("Yash")
 > 	greet()
 > ```

- It will run infinitely 
- At the end it will give `StackOverflowError`

---
### [[Stack]] Overflow [[Error]]

- Every **active function call** gets a **stack frame** stored on the call stack. It remains there until that function call returns.
- The call stack has **limited memory**. If too many function calls are active simultaneously, the stack can run out of space → **Stack Overflow**.
- In C++ and Java it works differently 
- In **Python**, there is a default **recursion limit of about 1000 calls**. When the limit is exceeded, Python raises **`RecursionError`** to prevent excessively deep recursion.
- In Python, Recursion Limit ≠ Detection of Infinite Recursion. 

---
## Types of Finite Recursions

---
### Direct Recursion

- When a function calls itself directly. 
- It can be of Two types : 
	- [[#Head Recursion]]
	- [[#Tail Recursion]]

---
#### Head Recursion

- The recursive call occurs before other operations.
- It uses **Back Tracking** / **Unwinding** 

> [!example] Using Head Recursion to print `“Yash”` 4 times : 
> ```python 
> def name(n): 
>	if n == 0: 
>		return 
>	name (n - 1)
>	print("Yash")
>	
>name(4)
> ```
 > Time Complexity : $O(n)$   
 > Space Complexity : $O(n)$

##### Recursion [[Tree_DSA|Tree]]

![[Pasted image 20261005234745.png]]

---
#### Tail Recursion

- The recursive call is the last statement in the function.

>[!example] Using Tail Recursion to print `“Yash”` 4 times : 
>```python 
>def name(n):
>	if n == 0: 
>		return
>	print("Yash")
>	name(n - 1)
>	
>name(4)
>```
>Time Complexity : $O(n)$   
>Space Complex : $O(n)$

##### Recursion [[Tree_DSA|Tree]]

![[Pasted image 20261005234119.png]]

---
### Indirect Recursion

When two or more functions call each other in a cycle.

---
# Questions

###### <span style="color:rgb(0, 176, 240)">Q1)</span> Find the output of the following pseudo codes
```pseudo
void main()
{
	fun(4)
}

void fun(int x)
{
	if(x > 0)
	{
		printf("%d", x);
		fun(x - 1);
	}
}
```

<span style="color:rgb(0, 176, 240)">A1)</span>    

<span style="color:rgb(146, 208, 80)">4  3  2  1</span>
![[Pasted image 20260103185330.png]]
```pseudo
void main()
{
	fun(4);
}

void fun(int x)
{
	if(x > 0)
	{
		fun(x - 1);
		printf("%d", x);
	}
}
```

<span style="color:rgb(146, 208, 80)">1  2  3  4</span>
![[Pasted image 20260103190053.png]]

---
###### <span style="color:rgb(0, 176, 240)">Q2)</span> Find the output of the following pseudo code:
```pseudo
void main()
{
	fun();
}

void fun(int x)
{
	if (x > 0)
	{
		printf("%d", x);
		fun(x - 1);
		printf("%d", x);
		fun(x - 1);
		printf("%d", x);
	}
}
```

<span style="color:rgb(0, 176, 240)">A2)</span> 
fun(3) = <span style="color:rgb(146, 208, 80)">3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3</span>
fun(2) = 2 1 1 1 2 1 1 1 2
fun(1) = 1 1 1

![[Pasted image 20260103192720.png]]

---
###### <span style="color:rgb(0, 176, 240)">Q3)</span> Find the output of the following pseudo code on n = 6?
```pseudo 
int x(int n)
{
	if(n < 3)
		return 1;
	else
		return x(n-1) + x(n-1) + 1;
}
```

<span style="color:rgb(0, 176, 240)">A3)</span>  <span style="color:rgb(146, 208, 80)">  31</span>
n = 6

x(6) = x(5) + x(5) + 1
x(5) = x(4) + x(4) + 1
x(4) = x(3) + x(3) + 1
x(3) = x(2) + x(2) + 1
x(2) = 1

x(3) = 1 + 1 + 1 = 3
x(4) = 3 + 3 + 1 = 7
x(5) = 7 + 7 + 1 = 15 
x(6) = 16 + 16 + 1 = 31

---
###### <span style="color:rgb(0, 176, 240)">Q4)</span> Consider the following recursive C function that takes two arguments
```c
unsigned int foo(unsigned int n, unsigned int r)
{
	if(n > 0)
		return(n%r + foo(n/r, r));
	else
		return 0;
}
```
###### What is the return value of the function foo when it is called as foo (345, 10)? <span style="color:rgb(255, 192, 0)">(GATE - 2011) (2 Marks)</span>

###### (A) 345
###### (B) 12
###### (C) 5
###### (D) 3

<span style="color:rgb(0, 176, 240)">A4)</span>    <span style="color:rgb(146, 208, 80)">(B) 12</span>

3 + 4 + 5 = 12

We can the pattern, Its basically the sum of all the digits of n.

![[Pasted image 20260112200533.png]]
###### What is the return value of the function foo when it is called as foo(513, 2)? <span style="color:rgb(255, 192, 0)">(GATE - 2011) (2 Marks)</span>
###### (A) 9
###### (B) 8
###### (C) 5
###### (D) 2

<span style="color:rgb(0, 176, 240)">A4)</span> <span style="color:rgb(146, 208, 80)"> </span><span style="color:rgb(146, 208, 80)">(D) 2</span>
1 + 1 = 2
![[Pasted image 20260112202252.png]]

---
###### <span style="color:rgb(0, 176, 240)">Q5)</span> Consider the following ANSI C function :int SomeFunction (int x, int y) <span style="color:rgb(255, 192, 0)">(GATE - 2021) (2 Marks)</span>
~~~~c
int SomeFunction (int x, int y)
{
	if ((x == 1) ||(y == 1))
		return 1;
	if (x == y)
		return x;
	if (x>y)
		return SomeFunction(x-y, y);
	if (y > x)
		return SomeFunction (x, y-x);
}
~~~~
###### The value returned by SomeFunction(15, 255) is _ _ _ _ .

<span style="color:rgb(0, 176, 240)"><span style="color:rgb(0, 176, 240)">A5)</span></span>  <span style="color:rgb(146, 208, 80)">15</span>

![[Pasted image 20260112204148.png]]

---
###### <span style="color:rgb(0, 176, 240)">Q6)</span> Consider the following ANSI C program <span style="color:rgb(255, 192, 0)">(GATE - 2021) (2 Marks)</span>
```c
#include <stdio.h>
int foo(int x, int y, int q)
{
	if ((x <= 0) && (y <= 0))
		return q;
	if (x <= 0)
		return foo(x, y-q, q);
	if (y <= 0)
		return foo(x-q, y, q);
	return foo(x, y-q, q) + foo(x-q, y, q);
}
int main()
{
	int r = foo(15, 15, 10);
	printf("%d", r);
	return 0;
}
```

###### The output of the program upon execution is _ _ _ _

<span style="color:rgb(0, 176, 240)">A6)</span>  <span style="color:rgb(146, 208, 80)">60</span>

![[Pasted image 20260113000418.png]]

---
###### <span style="color:rgb(0, 176, 240)">Q7)</span> Consider the following recursive C function. If get (6) function is being called in main() then how many times will the get () function be invoked before returning to the main ()? <span style="color:rgb(255, 192, 0)">GATE - 2015) (2 Marks)</span>
```
void get (int n)
{
	if (n < 1)
		return;
	get(n-1);
	get(n-3);
	printf ("%d", n);
}
```
###### (A) 15
###### (B) 25
###### (C) 35
###### (D) 45

<span style="color:rgb(0, 176, 240)">A7)</span>  <span style="color:rgb(146, 208, 80)">(B) 25</span>
g(-2) , g(-1) , g(-2) → 1
g(1) → 3
g(2) → 5
g(3) → 7
g(4) → 11
g(5) → 17
g(6) → 25
![[Pasted image 20260113001928.png]]

---
# Connections

- Recursion uses the call stack → [[Stack]]
- Tree traversal algorithms are recursive → [[Binary Tree Traversal]]
- Divide-and-conquer recursion used in → [[Merge Sort]]
- Recursive subproblems relate to → [[Algorithm Basics]]

---
# References 

1. [[Stack]]
2. [[Tree_DSA|Trees]]
3. [YouTube GATE One Shot - Recurrsion](https://youtu.be/2o2vX0ZqQ_Y?t=10226)
4. [YouTube Python DSA Series Recursion Lecture 1](https://youtu.be/-VwidRe3Ob8?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)
5. [YouTube Python DSA Series Recursion Lecture 2](https://youtu.be/fgurDxhawRw?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)
6. [YouTube Python DSA Series Recursion Lecture 3](https://youtu.be/HKltpsIOOro?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)