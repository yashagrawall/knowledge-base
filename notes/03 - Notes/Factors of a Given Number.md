
Type : #DSAPattern         
Date : 2026-09-30         
Tags : [[DSA]] ; [[Maths]]   
Status : #complete           
~ ***Yash Agrawall*** ~

---
# Factors of a Given Number

---
## Recognition Trigger 

> [!tip] When to Use? 
> 
> - **Triggers :** 
> 	- [[Number of Factors]] 
> 	- Finding all Divisors 
> 	- Checking if a number is Prime 
> 	- Generating Divisors 
> 	- Finding Prime Factors 
> 	
> - **Keywords :** Factors, Divisors, Prime

---
## Core 
  
  > [!abstract] Why it Works
  > - Factors occur in **pairs**:    
  > - If `i` divides `n`, then `n // i` is also a factor.
>- These pairs meet at `√n`.
>- Therefore, we only need to check `i` from `1` to `√n` instead of `1` to `n`.
>- For every divisor found:
 > 	- Add `i`
>	- Add its pair `n // i`
>- **Exception:** If `i * i == n`, `i` and `n // i` are the same factor, so count it only once.

---
## Code Structure

```python
result = []

for i in range(1, int(n ** 0.5) + 1):
    if n % i == 0:
        result.append(i)

        
    if num // i != i: 
	    result.append(num//i)
```
- The output won’t be sorted in this case 
- use `result.sort()` if asked to return a sorted result

---
## Complexity 

### For Returining the Factors 

- **Typical Time:** 
	- for unsorted : $O(\sqrt{ n })$  
	- for sorted : $O(\sqrt{n}) + O(k\log k)$
- **Typical Space:** 
	- for unsorted : $O(\sqrt{ n })$ 
	- for sorted : $O(k)$

### For Counting the Factors 
- **Time Complexity** : $O(\sqrt{ n })$
- **Space Complexity** : $O(1)$

---
## Failure Modes & Edge Cases

- `n = 1` → only factor is `1` 
- **Prime** `n` → exactly `2` factors: `1` and `n`
- **Perfect square** → avoid double-counting `√n`
- `n = 0` → has infinitely many divisors; usually excluded
- **Negative** `n` → usually excluded when asking for positive factors
- **Operator trap:** use `n ** 0.5`, not `n ** 1/2` : [[Python Operators#Operator Precedence (informal)|Operator Precedence Rules]]
- **Range trap:** `range()` excludes the upper bound, hence `+ 1`

---
## Related Questions 

- [[Number of Factors]]
