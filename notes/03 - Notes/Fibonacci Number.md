
Type : #DSAProblem     
Date : 2026-10-14  
Platform :  #LeetCode      
Difficulty : #easy        
Pattern : [[Recursion]] ; [[Fibonacci Series]]              
Topics : [[DSA]] ; [[Maths]]      
Status : #unsolved / #solved / #revisit  
Link :  [LeetCode - Easy - Fibonacci Number](https://leetcode.com/problems/fibonacci-number/description/) 
~ ***Yash Agrawall*** ~   

---
# Fibonacci Number

---
## Problem Statement

> [!question] 
> Return the value of the $n^{th}$ [[Fibonacci Series]] number
>     
> $fib(n) = fib(n-1) + fib(n-2)$          
> $fib(0) = 0$      
> $fib(1) = 1$

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** :  $0 =< n =< 30$ 
 >

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> 

---
## Differential

---
### Approach 1 : Brute Force [[Recursion]] 

```python
class Solution(object):
	def fib(self, n):
		if n <= 1:
			return n 
		return self.fib(n-1) + self.fib(n-2)
```
- **Time Complexity :** $O(2^n)$ → Recalculates the same Fibonacci numbers repeatedly.
- **Space Complexity :** $O(n)$

---
### Approach 2 : Memoization (Top-Down DP)

```python

```
- **Time Complexity :** $O()$ 
- **Space Complexity :** $O()$ 

---
## Most Optimal Approach 

>[!note] [[#Approach 1]]
>

---
## Traps & Edge Cases

- 

---
## Related Questions 

-  

---
# Reference 

1. 