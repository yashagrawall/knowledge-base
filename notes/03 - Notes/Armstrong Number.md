
Type : #DSAProblem       
Date : 2026-09-30     
Platform : #GeeksForGeeks       
Difficulty : #easy      
Pattern : [[Extraction of Digits]]               
Topics : [[DSA]] ; [[Maths]]        
Status : #solved              
Link : [GeeksForGeeks - Easy - Armstrong Number](https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1)             
~ ***Yash Agrawall*** ~   

---
# Armstrong Number

---
## Problem Statement

> [!question] Armstrong Number 
> Given : 3 digit number    
> Return : bool (depending on weather or not its an Armstrong Number)

- Armstrong number : Sum of each digit raised to the power of the total number of digits = the original number 

>[!example] 
>153   
>$1^3 + 5^3 + 3^3$     
>$1 + 125 + 27 = 153$

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : 100 ≤ n < 1000
 >
 >- **Expected Complexities** : 
 > 	 - Time Complexiity : $O(1)$   
 > 	 - Space Complexity : $O(1)$

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> take a variable to store the sum    
> a loop to go through the number and extract the digits using the division method  
> 
> - Here we don't have to worry about the no. of digits as its fixed(3). 
> - So we can directly use 3 as the power instead of calculating the no. of digits separately
 
---
## Differential

---
### Approach 1 : 

```python
class Solution:
    def armstrongNumber(self, n):
        num = 0
        og = n

        while og:
            num += (og % 10) ** 3
            og //= 10

        return num == n
```
- **Time Complexity :** $O(\log_{10}(n))$ 
- **Space Complexity :** $O(1)$ 

- Here we can say that the TC = $O(1)$ as for the given constraint, the TC will be between 0 and 4, and we can ignore constants that makes it $O(1)$

---
### Approach 2 : 

```python
class Solution:
    def armstrongNumber (self, n):
        num = str(n)
        s = 0
        for i in num: 
            s += int(i)**3
        return s == n
```
- **Time Complexity :** $O(\log_{10}(n))$ 
- **Space Complexity :** $O(\log_{10}(n))$ 

---
## Most Optimal Approach 

>[!note] [[#Approach 1]]
>Better and recommended approach

---
## Traps & Edge Cases

- Stick to the Q, if the constraint mentions that the input will be a 3 digit no. don't waste time and space calculating no. of digits separately

---
## Related Questions 

- [[Count Digits]]
- [[Reverse Integer]]
- [[Palindrome Number]]

---
# Reference 

1. [[Extraction of Digits]]