
Type : #DSAProblem      
Date : 2026-09-29     
Platform :  #LeetCode      
Difficulty : #medium     
Pattern : [[Extraction of Digits]]    
Topics :  [[DSA]] ; [[Maths]]     
Status : #unsolved / #solved / #revisit  
Link : [LeetCode - Medium - Reverse Integer](https://leetcode.com/problems/reverse-integer/description/)  
~ ***Yash Agrawall*** ~   

---
# Reverse Integer

---
## Problem Statement

> [!question] Reverse Integer
> Given : 32-bit integer `x`    
> 
> Return : `x` with its digits reversed    
> - if reverse `x` outside 32-bit integer range → return `0`

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : 
 >`-2**31 <= x <= 2**31 - 1`
 >

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment   
> We can extract the last digits, and store it    
> before storing we can multiply the stored no. by 10   

---
## Differential

---
### Approach 1 : iterative division and multiplication by 10

```python
class Solution(object):
    def reverse(self, x):
		"""  
		:type x: int  
		:rtype: int  
		"""  
        y = abs(x)
        z = 0

        while y:
            z = z * 10 + y % 10
            y //= 10

        if x < 0:
            z *= -1

        if z < -2**31 or z > 2**31 - 1:
            return 0

        return z
```
- **Time Complexity :** $O(\log_{10}|x|)$ : (22 ms)
- **Space Complexity :** $O(1)$ : (12.3 MB)

---
### Approach 2 : Int → str → reverse slicing → int

```python
class Solution(object):  
	def reverse(self, x):  
		"""  
		:type x: int  
		:rtype: int  
		"""  
		y = str(abs(x))  
		y = y[::-1]  
		y = int(y)  
		if x < 0:  
			y *= -1  
		if y < -2**31 or y > 2**31 -1:  
			y = 0  
		return y
```
- **Time Complexity :** $O(\log_{10}|x|)$ : (21 ms)
- **Space Complexity :** $O(\log_{10}|x|)$ : (12.4 MB)

---
## Most Optimal Approach 

>[!note] [[#Approach 1 iterative division and multiplication by 10]]
>Its better to not convert it to strings. Interviewers prefer that. 

---
## Traps & Edge Cases

- Make sure you go through the [[#Constraint Analysis]] before submiting

---
## Related Questions 

-  [[Count Digits]]
- [[Palindrome Number]]
- [[Armstrong Number]]

---
# Reference 

1. [[Extraction of Digits]]