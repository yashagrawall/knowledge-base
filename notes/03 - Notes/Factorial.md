
Type : #DSAProblem     
Date : 2026-10-08  
Platform : #GeeksForGeeks     
Difficulty : #easy   
Pattern : [[Recursion]]  
Topics : [[DSA]] ; [[Maths]]      
Status : #solved   
Link : [GFG - Easy - Factorial](https://www.geeksforgeeks.org/problems/factorial5739/1)  
~ ***Yash Agrawall*** ~   

---
# Factorial

---
## Problem Statement

> [!question] For a given number $n$, find $n!$
>

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : $0 \leq n ≤ 12$
 >
 >- **Expected Complexities** : 
 >	- Time Complexity : $O(n)$
 >	- Space Complexity : $O(1)$

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
>  - $n factorial = n! = 1 \times 2 \times 3 \times \dots \times n$   
> - Q is solvable using [[Recursion]], but given the Expected Complexities, I must use loop

---
## Differential

---
### Approach 1 : [[Recursion#Head Recursion|Head Recursion]]

```python
class Solution:
    def factorial(self, n: int) -> int:
        if n == 0:
            return 1
        return (n * self.factorial(n-1))
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
### Approach 2 : for [[loop]]

```python
class Solution:
    def factorial(self, n: int) -> int:
        fact = 1
        for i in range(1, n+1):
            fact *= i
        return fact
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(1)$ 

---
### Approach 3 : while [[loop]]

```python 
class Solution:
    def factorial(self, n: int) -> int:
        fact = 1
        i = n
        while i > 0: 
            fact *= i
            i -= 1
        return fact
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(1)$ 

---
## Most Optimal Approach 

>[!note] [[#Approach 2 for loop]] or [[#Approach 3 while loop]]
>Because of the Complexity    
>[[#Approach 2 for loop]] is cleaner 

---
## Traps & Edge Cases

- Remember not to multiple 0 as that would make the whole thing return 0 

---
## Related Questions 

- 

---
# Reference 

1. [[Recursion]]
