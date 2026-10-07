
Type : #DSAProblem     
Date : 2026-10-07  
Platform :  #GeeksForGeeks         
Difficulty : #easy     
Pattern : [[Recursion]] ; [[loop]]          
Topics : [[DSA]]     
Status : #solved    
Link : [GFG - Easy - Print GFG n times](https://www.geeksforgeeks.org/problems/print-gfg-n-times/1)  
~ ***Yash Agrawall*** ~   

---
# Print GFG n times

---
## Problem Statement

> [!question] For a +ve no. n print “GFG” n times seprated by a single space

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : $1 \leq n \leq 10^3$
 >
 >- **Expected Complexities** : 
 >	- Time Complexity : $O(n)$
 >	- Space Complexity : $O(1)$

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> Use Recursion or Loop

---
## Differential

---
### Approach 1 : [[Recursion#Tail Recursion|Tail Recursion]]

```python
n = int(input())

def GFG(n):
    if n == 0:
        return
    print("GFG", end = " ")
    GFG(n-1)
    
GFG(n)
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
### Approach 2 : [[Recursion#Head Recursion|Head Recursion]]

```python
n = int(input())

def GFG(n):
    if n == 0:
        return
    GFG(n-1)
    print("GFG", end = " ")


GFG(n)
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 

---
### Approach 3 : for [[loop]]

```python
n = int(input())

for i in range (0, n):
    print("GFG", end = " ")
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(1)$ 

---
### Approach 4 : while [[loop]]

```python
n = int(input())
m = n

while m: 
    print("GFG", end = " ")
    m -= 1
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(1)$ 


---
## Most Optimal Approach 

>[!note] 
>Approach 1 and 2 use [[Recursion]]:
>- Time: $O(n)$
>- Space: $O(n)$
>
>Approach 3 and 4 use [[loop|iteration]]:
>- Time: $O(n)$
>- Space: $O(1)$
>
>Therefore, **Approach 3 and Approach 4 are optimal** according to the [[#Constraint Analysis|expected space complexity]] of $O(1)$.
>
>Between them, **Approach 3 (for loop) is cleaner and more readable**.

---
## Traps & Edge Cases

- n = 1 

---
## Related Questions 

-  [[1 to n Without Loop]]

---
# Reference 

1. 