
Type : #DSAProblem     
Date : 2026-09-29  
Platform : #LeetCode     
Difficulty : #easy   
Pattern : [[Extraction of Digits]]      
Topics : [[DSA]] ; [[Maths]]   
Status : #solved    
Link : [LeetCode - Easy - Palindrome Number](https://leetcode.com/problems/palindrome-number/description/)  
~ ***Yash Agrawall*** ~   

---
# Palindrome Number

---
## Problem Statement

> [!question] Palindrome Number
> Given : `x`   
> Return : 
> - `true` if `x` is a palindrome
> - `false` if `x` is not palindrome
> 

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : `-2**31 <= x <= 2**31 - 1`
 >


---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> Store the reversed no. then check if its same with the original   
> check for 0 and -ve no. seperately as their outputs are not conditional and time will be saved in those cases.   

---
## Differential

---
### Approach 1 : iterative multipliacation and division by 10

```python
class Solution(object):
	def isPalindrome(self, x):
		y = 0
		z = x
		if x < 0:
			return False
		elif x > 0:
			while z:
				y = y*10 + z % 10
				z //= 10
			return y == x
		else:
			return True
```
- **Time Complexity :** $O(\log_{10}|x|)$ 
- **Space Complexity :** $O(1)$ 

---
### Approach 2 : int → str → int

```python
class Solution(object):
    def isPalindrome(self, x):
        y = str(x)
        return y == y[::-1]
```
- **Time Complexity :** $O(\log_{10}|x|)$ 
- **Space Complexity :** $O(\log_{10}|x|)$ 

---
## Most Optimal Approach 

>[!note] [[#Approach 1 iterative multipliacation and division by 10]]
>Approach 1 is prefered over Approch 2 during DSA interview, even though Approach 2 is smaller and easier and the Space Complexity is almost similar given the [[#Constraint Analysis]]

---
## Traps & Edge Cases

- Also read the Follow-ups in the DSA Qs 

---
## Related Questions 

-  [[Reverse Integer]]
- [[Count Digits]]

---
# Reference 

1. 