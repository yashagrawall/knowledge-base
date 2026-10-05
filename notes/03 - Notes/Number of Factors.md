
Type : #DSAProblem     
Date : 2026-09-30  
Platform : #GeeksForGeeks      
Difficulty : #easy    
Pattern : [[Factors of a Given Number]]     
Topics : [[DSA]] ; [[Maths]]        
Status : #solved         
Link : [GFG - Easy - Number of Factors](https://www.geeksforgeeks.org/problems/number-of-factors1435/1)         
~ ***Yash Agrawall*** ~   

---
# Number of Factors

---
## Problem Statement

> [!question] 
> Input : n   
> Return : no. of divisors   

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : 1 ≤ n ≤ 10<sup>5</sup> 
 >
 >- **Expected Complexities** : 
 >	- TC : $O(\sqrt(n))$
 >	- SC : $O(1)$

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> a variable counts   
> use a loop and conditional statement to see if the remainder returns 0
- for any number, the factor is always in the 1st half : 
	- for n : factor ≥ n/2
- So instead of checking for all the numbers check for only half the numbers

---
## Differential

---
### Approach 1 : checking till n/2

```python
class Solution:
    def countFactors(self, n):
        count = 2

        if n == 1:
            count = 1

        for i in range(2, n // 2 + 1):
            if n % i == 0:
                count += 1

        return count
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(1)$ 

---
### Approach 2 : factors come in pairs

```python
class Solution:
    def countFactors(self, n):
        count = 0

        for i in range(1, int(n ** 0.5) + 1):
            if n % i == 0:
                count += 2

            if i * i == n:
                count -= 1

        return count
```
- **Time Complexity :** $O(\sqrt{n})$ 
- **Space Complexity :** $O(1)$ 

---
## Most Optimal Approach 

>[!note] [[#Approach 2 factors come in pairs]]
>Better TIme Complexity than Approach 1 and also shows better mathematical reasoning in DSA Rounds.

---
## Traps & Edge Cases

- `n = 1`
- Perfect Squares 
- Prime Numbers 

---
## Related Questions 

-  

---
# Reference 

1. [[Factors of a Given Number]]