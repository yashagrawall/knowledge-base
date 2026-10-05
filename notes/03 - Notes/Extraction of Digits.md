
Type : #DSAPattern      
Date : 2026-09-27      
Tags : [[DSA]]     
Status : #complete      
~ ***Yash Agrawall*** ~

---
# Extraction of Digits

---
## Recognition Trigger 

> [!tip] When to Use? 
> 
> - **Triggers :** Whenever an integer's individual digits need to be counted, summed, rearranged, verified, or transformed without converting to strings.
> - **Keywords :** "[[Count Digits]]", "[[Reverse Integer]]", "[[Palindrome Number]]", "[[Armstrong Number]]", "Sum of digits", "Digital root".

---
## Core 
  
> [!abstract] Why it Works (Base-10 Invariant)
> Every base-10 integer $N$ is algebraically a polynomial of place values:
> $$N = c_k \cdot 10^k + \dots + c_1 \cdot 10^1 + c_0 \cdot 10^0$$
> 1. `N % 10` isolates the least significant digit ($c_0$).
> 2. `N // 10` performs an integer arithmetic right-shift in base 10, discarding $c_0$ and making $c_1$ the new lowest digit.
> 3. Each step reduces $N$ by a factor of 10, guaranteeing completion in $O(\log_{10} N)$ iterations with $O(1)$ space.

---
## Code Structure

```python
def digit_extraction_pattern(n: int):
    num = abs(n)
    
    if num == 0:
        pass
        
    while num:
        digit = num % 10     
        num //= 10            
```
- `abs(n)` is to avoid infinite loop in case of -ve no. floor division
- `num = 0` should be handled separately
- `num % 10` returns the last digit of the number (remainder after dividing by 10)
- `num // 10` removes the last digit and makes the no. smaller (floor division by 10)

---
## Complexity 

- **Typical Time:** $O(\log_{10} N)$ or $O(d)$ where $d$ is the number of digits.
- **Typical Space:** $O(1)$ auxiliary memory (pure registers / scalar integers).

---
## Failure Modes & Edge Cases

- **$N = 0$:** 
	- The while loop `while num > 0` will not execute at all. 
	- If counting or processing is required for zero, handle it with an explicit guard (`if n == 0:`).
- **$N < 0$:** 
	- In Python, integer floor division on negatives rounds toward $-\infty$ (`-1 // 10 == -1`), causing an **infinite loop**. 
	- Always wrap with `abs(n)`.
- **Integer Overflow (Language Dependent):** 
	- In C/C++/Java, reversing a 32-bit signed integer can exceed $[-2^{31}, 2^{31} - 1]$. 
	- Python handles arbitrary precision automatically, but 32-bit constraints on platforms like #LeetCode require manual boundary checks before multiplying by 10. 

---
## Related Questions 

- [[Count Digits]]
- [[Reverse Integer]]
- [[Palindrome Number]]
- [[Armstrong Number]]

