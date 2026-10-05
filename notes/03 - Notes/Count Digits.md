
Type : #DSAProblem     
Date : 2026-09-28   
Platform : #CodingNinjas   
Difficulty : #easy   
Pattern : [[Extraction of Digits]]   
Topics : [[DSA]] , [[Maths]]      
Status : #solved   
Link : [Coding Ninjas - Easy - Count Digits](https://www.naukri.com/code360/problems/number-of-digits_4538242)    
~ ***Yash Agrawall*** ~     

---
# Count Digits

---
## Problem Statement

> [!question] 
> Given an integer $N$, find and return the total number of digits present in $N$.

---
## Constraint Analysis 

>[!attention] 
>- **Constraints** : 
>1. $1 \le N \le 10^{18}$ 
>2. $1 \le T \le 1000$ 
>
>- **Target Complexity** : 
>	- $O(\log_{10} N)$ time per testcase 
>	- $O(1)$ space.

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> - Each integer division by 10 eliminates one decimal place value.   
>⇒ The number of times `N` can be divided by `10` before reaching `0` is exactly the number of digits in `N`.

---
## Differential

---
### Approach 1 : Iterative Modulo-Division (Division by 10)

```python
def countDigit(n: int) -> int:
    count = 0
    num = abs(n)

    if num == 0:
        count = 1
        
    else:
        while num:
            count += 1
            num //= 10

    return count
```
- **Time Complexity :** $O(\log_{10} N)$ - one iteration per decimal digit
- **Space Complexity :** $O(1)$ - uses constant no. of variables.

---
### Approach 2 : String Conversion

```python
def countDigit(n: int) -> int:
    return len(str(abs(n)))
```
- **Time Complexity :** $O(\log_{10} N)$ — Must extract every digit into a character array.
- **Space Complexity :** $O(\log_{10} N)$ — Heap allocation for a string of length $d$.
- **Advantage :** Extremely concise and readable.
- **Disadvantage :** Requires additional memory for the resulting string and does not demonstrate the underlying arithmetic technique.

---
### Approach 3 : Logarithmic Math Formula (Theoretical $O(1)$)

```python
from math import log10

def countDigit(n: int) -> int:
    if n == 0:
        return 1
    return int(log10(abs(n)) + 1)
```
- **Time Complexity :** $O(1)$ - `log10()` is treated as a constant-time operation in the standard RAM model.
- **Space Complexity :** $O(1)$ - Uses only a constant amount of auxiliary space.
- **Limitation :** `log10()` operates using floating-point arithmetic. IEEE 754 double-precision floating-point cannot represent all sufficiently large integers exactly, so rounding errors can cause incorrect digit counts, particularly for values near powers of 10.

---
## Most Optimal Approach (for [[DSA]] Rounds)

>[!note] [[#Approach 1 Iterative Modulo-Division (Division by 10)]]
> While **Approach 3** is theoretically $O(1)$ on paper, Approach 1 is the more **robust DSA/interview solution**:
> - **Time:** O(log₁₀ N)
> - **Auxiliary Space:** O(1)
> - **No floating-point arithmetic**
>- **No precision-related correctness issues**
>- Works correctly for arbitrarily large Python integers
>- Directly demonstrates the underlying digit-counting algorithm

---
## Traps & Edge Cases

- **$N = 0$:** (hypothetical case according to the [[#Constraint Analysis]])
	- `while num` would not run
	- returns `0` instead of `1` 
- **$N < 0$:** (hypothetical case according to the [[#Constraint Analysis]])
	- Must use `abs(n)` to prevent Python's `-1 // 10 == -1` infinite loop.
- **Floating-point Trap (`log10`):** 
	- `math.log10()` uses IEEE 754 double-precision floating-point arithmetic. 
	- For sufficiently large integers, rounding can produce an incorrect digit count, particularly when the logarithm is close to an integer boundary. 
	- **Do not rely on floating-point logarithms when exact digit counts are required.**
- **Platform Namespace Collision:** 
	- Avoid `from os import *` or other unused library imports on #CodingNinjas. 
	- They can overwrite built-in names such as `open` with platform/library functions and cause unexpected errors in the execution environment.

---
## Related Questions 

1. [[Reverse Integer]]
2. [[Palindrome Number]]
3. [[Armstrong Number]]

---
# Reference 

1. [[Extraction of Digits]]
