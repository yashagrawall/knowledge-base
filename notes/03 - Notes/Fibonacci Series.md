
Type : #Note    
Date : 2026-10-05    
Tags :  [[DSA]] ; [[Maths]]    
~ ***Yash Agrawall*** ~     

---
# Fibonacci Series 

- Each number is the sum of the two preceding ones, starting from 0 & 1. 
- commonly denoted by $F_{n}$ or `f(n)`
- $F_{0} = 0$
- $F_{1} = 1$
- $F_{n} = F_{n-1} + F_{n-2}$ $for$ $n > 1$

>[!caution] 
>The trouble begins when you compute it _recursively_ without remembering anything. If you compute `f(100)` using the plain recursive definition, the computer doesn’t “know” it has already computed `f(98)` somewhere else. It recomputes the same values again and again. This creates an enormous recursion tree.

**Dynamic Programming** : Never compute the same subproblem twice.
This can be implemented in two ways:
1. **Memorization** (*top-down*) : Store `f(n)` the first time you compute it. Future calls just look it up
2. **Tabulation**(*bottom-up*) : Compute `f(0)` , `f(1)` , `f(2)`  , … , `f(n)` iteratively. 

- with Dynamic programming:
	- Time complexity becomes $O(n)$
	- No. of additions becomes $O(n-1)$
	- No. of function calls becomes $O(n)$ (or zero recursion at all)

| n                         | 0   | 1   | 2   | 3   | 4   | 5   | 6   | 7   | 8   | 9   | 10  |
| ------------------------- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| f(n)                      | 0   | 1   | 1   | 2   | 3   | 5   | 8   | 13  | 21  | 34  | 55  |
| no. of invocation<br>i(n) | 1   | 1   | 3   | 5   | 9   | 15  | 25  | 41  | 67  | 109 |     |
| no. of addition<br>a(n)   | 0   | 0   | 1   | 2   | 4   | 7   | 12  | 20  | 33  | 54  | 88  |

- $if$ $(n == 0)$ $;$ $F_{n} = 0$
- $if$ $(n == 1)$ $;$ $F_{n} = 1$
- $if$ $(n > 1)$ $;$ $F_{n} = F_{n-1} + F_{n-2}$

- $if$ $(n == 0)$ $;$ $i(n) = 1$
- $if$ $(n == 1)$ $;$ $i(n) = 1$
- $if$ $(n > 1)$ $;$ $i(n) = i(n-1) + i(n-2) + 1$
  The extra + 1 comes when the function call itself. Every `f(n)` makes two recursive calls except the base cases, plus the call you are currently in. 
- $for$ $all$ $n$ $;$ $i(n) = 2F_{n+1} - 1$

- $if$ $(n == 0)$ $;$ $a(n) = 0$
- $if$ $(n == 1)$ $;$ $a(n) = 0$
- $if$ $(n > 1)$ $;$ $a(n) = a(n-1) + a(n-2) + 1$

---
# Questions 






---
# References 

1. [[Recursion]]
2. [[Stack]]
3. [[Tree_DSA|Trees]]
4. [YouTube Lecture - Recurrsion](https://youtu.be/2o2vX0ZqQ_Y?t=10226)
5. [YouTube Python DSA Series](https://youtu.be/-VwidRe3Ob8?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)