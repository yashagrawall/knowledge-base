
Type : #DSAProblem     
Date : 2026-10-07  
Platform : #GeeksForGeeks        
Difficulty : #easy    
Pattern : [[Recursion]]       
Topics : [[DSA]]        
Status : #solved    
Link : [GFG - Easy - n to 1 Without Loop](https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1)  
~ ***Yash Agrawall*** ~   

---
# n to 1 Without Loop

---
## Problem Statement

> [!question] Print all the no. from n to 1 in decreasing order, separated by spaces, without using any loops

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : $1 \leq n \leq 10^3$
 >
 >- **Expected Complexities** : 
 >	- Time Complexity : $O(n)$
 >	- Space Complexity : $O(n)$

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> use Recursion

---
## Differential

---
### Approach 1 : [[Recursion#Tail Recursion|Tail Recursion]]

```python
class Solution:
    def printNos(self, n: int) -> None:
        if n == 0:
            return
        print(n, end = " ")
        self.printNos(n-1)
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
## Most Optimal Approach 

>[!note] [[#Approach 1]]
>uses Tail Recursion to print the no. 

---
## Keep in Mind

|Statement|Meaning|
|---|---|
|`return`|Exit the current function|
|`pass`|Do nothing, but continue execution|
|`break`|Exit a loop|
|`continue`|Skip to next loop iteration|

---
## Related Questions 

-  [[1 to n Without Loop]]

---
# Reference 

1. [[Recursion]]