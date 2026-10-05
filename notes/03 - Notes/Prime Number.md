
Type : #DSAProblem     
Date : 2026-10-01  
Platform : #GeeksForGeeks    
Difficulty : #easy    
Pattern : [[Factors of a Given Number]]        
Topics : [[DSA]] ; [[Maths]]         
Status : #solved   
Link : [GFG - Easy - Prime Number](https://dl.flipkart.com/s/Xsw0SGNNNN)     
~ ***Yash Agrawall*** ~   

---
# Prime Number

---
## Problem Statement

> [!question] 
> Return `True` if the number is Prime 

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : $1\leq n \leq 10^9$ 
 >
 >- **Expected Complxities** : 
 >	- TC : $O(\sqrt{ n })$
 >	- SC : $O(1)$

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
>Check the total no. of factors 
>if 2 then Prime, if not then Composite

---
## Differential

---
### Approach 1 : 

```python
class Solution:
    def isPrime(self, n):
        count = 0
        for i in range (1, int(n**0.5) + 1): 
            if n % i == 0: 
                count += 2
            if i * i == n:
                count -= 1
        return count == 2
```
- **Time Complexity :** $O(\sqrt{ n })$ 
- **Space Complexity :** $O(1)$ 

---
### Approach 2 : 

```python
class Solution:
    def isPrime(self, n):
        if n < 2:
            return False
        else: 
            for i in range (2, int(n ** 0.5) + 1): 
                if n % i == 0: 
                    return False
            return True
```
- **Time Complexity :** $O(\sqrt{ n })$ 
- **Space Complexity :** $O(1)$ 

---
### Approach 3 : 

```python
class Solution:
    def isPrime(self, n):
        if n < 2:
            return False
        if n % 2 == 0:
            return n == 2
        else: 
            for i in range (2, int(n ** 0.5) + 1): 
                if n % i == 0: 
                    return False
            return True
```
- **Time Complexity :** $O(\sqrt{ n })$ 
- **Space Complexity :** $O(1)$ 

---
## Most Optimal Approach 

>[!note] [[#Approach 2]]
>

---
## Traps & Edge Cases

- `n = 1` is not Prime

---
## Related Questions 

-  

---
# Reference 

1. 