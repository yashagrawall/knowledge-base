
Type : #DSAProblem     
Date : 2026-10-06  
Platform : #GeeksForGeeks     
Difficulty : #easy    
Pattern : [[Recursion]]   
Topics : [[DSA]]         
Status : #solved       
Link : [GFG - Easy - 1 to n without loop](https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1)     
~ ***Yash Agrawall*** ~   

---
# 1 to n Without Loop

---
## Problem Statement

> [!question] Print numbers from 1 to n without using loops.        
> n → +ve number      
> the numbers should be space separated   

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : $1 \leq n \leq 1000$
 >
 >- **Expected Complexities :** 
 >	- Time Complexity : $O(n)$
 >	- Space Complexity : $O(n)$  

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> use recurssion 

---
## Differential

---
### Approach 1 : 

```python
class Solution:
    def printTillN(self, n):
        if n == 0: 
            return
        self.printTillN(n - 1)
        print(n, end = " ")
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
### Approach 2 : 

```python
class Solution:
    def printTillN(self, n):
        if n == 1:
	        print("n", end = " ") 
            return
        self.printTillN(n - 1)
        print(n, end = " ")
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
## Most Optimal Approach 

>[!note] 
>both are equally optimal, but Approach 1 is cleaner. 

---
## Keep in mind

|Statement|Meaning|
|---|---|
|`return`|Exit the current function|
|`pass`|Do nothing, but continue execution|
|`break`|Exit a loop|
|`continue`|Skip to next loop iteration|

---
## Related Questions 

-  [[n to 1 Without Loop]]
- [[Print GFG n times]]

---
# Reference 

1. [[Recursion]]