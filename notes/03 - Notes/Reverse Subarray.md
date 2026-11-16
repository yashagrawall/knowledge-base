
Type : #DSAProblem     
Date : 2026-10-09  
Platform : #GeeksForGeeks     
Difficulty : #easy     
Pattern : [[Recursion]] ; [[Array]] ; [[loop]]           
Topics :  [[DSA]]      
Status : #revisit         
Link : [GFG - Easy - Reverse Subarray](https://www.geeksforgeeks.org/problems/reverse-sub-array5620/1)    
~ ***Yash Agrawall*** ~   

---
# Reverse Subarray

---
## Problem Statement

> [!question] Given Array `arr`. We need to reverse a subarray of range given by indices `l` and `r` in 1-based indexing (starts from 1) 

---
## Constraint Analysis 

 >[!attention] 
 >- **Constraints** : 
 >1. $1 ≤ arr.size() ≤ 10^6$
 >2. $1 ≤ arr[i] ≤ 10^6$
 >3. $1 ≤ l ≤ r ≤ arr.size()$ 
 >
 >- **Expected Complexities** : 
 >	- Time Complexity : $O(n)$
 >	- Space Complexity : $O(1)$

---
## Core Intuition & Invariant

> [!tip] The "Aha!" Moment
> can check the index value and use loop accordingly 
> or we can use recursion 
> 
> and considering the expected complexities we must use loop

---
## Differential

---
### Approach 1 : Two Pointers 

```python
class Solution:
	def reverseSubArray(self,arr,l,r):
	    l -= 1 
	    r -= 1
	    
	    while l < r: 
	        arr[l], arr[r] = arr[r], arr[l]
	        l += 1 
	        r -= 1 
	        
	    return arr
```
- **Time Complexity :** $O(r - l + 1)$ 
- **Space Complexity :** $O(1)$ 
>[!note] Explanation 
>1. as `l` and `r` 1-based index → we change them to 0-based index 
>2. using a while loop with `l < r` as the condition we traverse the `arr`
>3. then we reverse the subarray in extreme pairs 
>4. and consecutively increase the value of `l` and decrease the value of `r` to close in

---
### Approach 2 : using [[Recursion]] 

```python
class Solution:
    def reverseSubArray(self, arr, l, r):
        def reverse(left, right):
            if left >= right:
                return

            arr[left], arr[right] = arr[right], arr[left]
            reverse(left + 1, right - 1)

        reverse(l-1, r-1)
        return arr
```
- **Time Complexity :** $O(r-l+1)$ 
- **Space Complexity :** $O(r-l+1)$ 
>[!note] Explanatation 
>1. Using a recursion with base case `left >= right`
>2. the recursive function reverses the subarray in extreme pairs 
>3. the next recursive call is for `(left + 1, right - 1)` to close in 


---
### Approach 3 : Python Slicing 

```python
class Solution:
	def reverseSubArray(self,arr,l,r):
	    arr[l-1: r] = arr[l-1:r][::-1]
	    return arr
```
- **Time Complexity :** $O(r-l+1)$ 
- **Space Complexity :** $O(r-l+1)$ 
>[!note] Explanation 
>Using slicing we reverse the subarray and change the original `arr`

---
### Approach 4 : using `reversed()`

```python
class Solution:
	def reverseSubArray(self,arr,l,r):
	    arr[l-1: r] = reversed(arr[l-1:r])
	    return arr
```
- **Time Complexity :** $O(r-l+1)$ 
- **Space Complexity :** $O(r-l+1)$ 
>[!note] Explanation 
>Using `reversed()` method in the sliced subarray and changing the original `arr`

---
### Approach 5 : using `for` [[loop]]

```python
class Solution:
	def reverseSubArray(self,arr,l,r):
	    l -= 1
	    r -= 1
	    result = arr[:l]
	    for i in range(r, l-1, -1):
	        result.append(arr[i])
	    result.extend(arr[r+1:len(arr)])
	    return result
	    
```
- **Time Complexity :** $O(n)$ 
- **Space Complexity :** $O(n)$ 
>[!note] Explanation 
>1. as `l` and `r` 1-based index → we change them to 0-based index 
>2. divide the array into 3 parts: 
>	1. the part before the reversed subarray 
>	2. the reversed subarray part 
>	3. the part after the reversed subarray 
>3. create an result array and add the 1st part as it is 
>4. use a loop and append the reversed subarray → traversing using slicing + `result.append()`
>5. then `result.extend()` the 3rd part as it is

---
### Approach 6 : using for [[loop]] and a `temp` list

```python
class Solution:
	def reverseSubArray(self,arr,l,r):
	    l -= 1
	    r -= 1
	    temp = []
	    for i in range(r, l-1, -1):
	        temp.append(arr[i])
	    arr[l:r+1] = temp
	    return arr
```
- **Time Complexity :** $O(r-1+1)$ 
- **Space Complexity :** $O(r-l+1)$ 
>[!note] Explanation 
>1. as `l` and `r` 1-based index → we change them to 0-based index 
>2. create a empty `temp` list to store the reversed subarray 
>3. use loop to get the reversed subarry 
>4. replace the reversed part in the original `arr` using slicing 

---
## Most Optimal Approach 

>[!note] [[#Approach 1]]
>Using 2-pointers is the most Optimal approach give the complexity. Its also very simple 

---
## Traps & Edge Cases

- **1-based vs 0-based indexing:** Convert `l` to `l-1` and `r` to `r-1` when using array indices directly.
- **Single-element subarray:** When `l == r`, no swaps are needed.

---
## Related Questions 

-  

---
# Reference 

1. [[Recursion]]