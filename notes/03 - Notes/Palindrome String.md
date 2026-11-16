
Type : #DSAProblem          
Date : 2026-10-11           
Platform : #GeeksForGeeks        
Difficulty : #easy      
Pattern : [[Recursion]]                
Topics : [[DSA]] ; [[loop]]            
Status : #solved         
Link : [GFG - Easy - Palindrome String](https://www.geeksforgeeks.org/problems/palindrome-string0817/1)     
~ ***Yash Agrawall*** ~                    

---
# Palindrome String

---
## Problem Statement

> [!question] Palindrome String 
> Return bool for a string s is palindrome or not 

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : 
 >1. $1≤ s.size() ≤ 10^6$ 
 >2. s consistes only of lowercase English alphabets 
 >
 >- **Expected Complexities** : 
 >	- Time Complexity : $O(n)$
 >	- Space Complexity : $O(1)$

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> use slicing

---
## Differential

---
### Approach 1 : using slicing 

```python
class Solution:
    def isPalindrome(self, s):
        return s == s[::-1]
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
### Approach 2 : Two Pointers [[Recursion]]

```python
class Solution:
    def isPalindrome(self, s):
        def TwoPointers(s, left, right):
            if left >= right: 
                return True
            elif s[left] != s[right]:
                return False
            return TwoPointers(s, left + 1, right - 1)
        return TwoPointers(s, 0, len(s)-1)
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
### Approach 3 : Two Pointers [[loop|iteration]] 

```python 
class Solution:
    def isPalindrome(self, s):
        left = 0
        right = len(s) - 1
        while left < right:
            if s[left] != s[right]:
                return False
            left += 1
            right -= 1
        return True
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(1)$ 

---
## Most Optimal Approach 

>[!note] [[#Approach 3 Two Pointers loop iteration]]
>Given the complexities, its the most optimal
>

---
## Traps & Edge Cases

- For [[#Approach 2 Two Pointers Recursion]] there is a risk of stack overflow for bigger strings

---
## Related Questions 

-  [[Palindrome Number]]

---
# Reference 

1. 