
Type : #DSAProblem     
Date : 2026-10-08  
Platform :  #GeeksForGeeks     
Difficulty : #easy      
Pattern : [[Recursion]] ; [[loop]]     
Topics : [[DSA]] ; [[Maths]]               
Status : #solved   
Link : [GFG - Easy - Sum of Natural Cubes](https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1)   
~ ***Yash Agrawall*** ~   

---
# Sum of Natural Numbers Cubes

---
## Problem Statement

> [!question] for n, calculate sum of series $1^3 + 2^3 + 3^3 + \dots$ till $n$th term 

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : $1 \leq n \leq 200$
 >
 >- **Expected Complexities** : 
 >	- Time Complexity : $O(1)$
 >	- Space Complexity : $O(1)$

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> Using [[Recursion]] or [[loop]] wont have the same complexity as whats expected   
> I need to uses a Mathematical formula

---
## Differential

---
### Approach 1 : for [[loop]]

```python
class Solution:
    def sumOfSeries(self,n):
        total = 0
        for i in range(1, n+1):
            total += i**3
        return total   
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(1)$ 

---
### Approach 2 : while [[loop]]

```python
class Solution:
    def sumOfSeries(self,n):
        total = 0
        i = n
        while i:
            total += i**3
            i -= 1
        return total
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(1)$ 

---
### Approach 3 : [[Recursion#Head Recursion|Head Recursion]]

```python
class Solution:
    def sumOfSeries(self,n):
        if n == 0:
            return 0
        return (n**3 + self.sumOfSeries(n - 1))
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
### Approach 4 : [[Recursion#Head Recursion|Head Recursion]]

```python
class Solution:
    def sumOfSeries(self,n):
        if n == 0:
            return 0
        total = 0
        total += self.sumOfSeries(n - 1)
        return n**3 + total
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
### Approach 5 : [[Maths]]

```python
class Solution:
    def sumOfSeries(self,n):
        return (n*(n + 1) // 2) ** 2
```
- **Time Complexity :** $O(1)$ 
- **Space Complexity :** $O(1)$ 

---
## Most Optimal Approach 

>[!note] [[#Approach 5]]
>Using a mathematical formula is always better than using loop or recursion.    
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