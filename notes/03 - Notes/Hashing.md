
Type : #Note    
Date : 2026-10-02    
Tags : [[Python]] ; [[DSA]]           
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Hashing 

- Prestoring values into some datastructure like List, Dictionary, Sets and then fetching it 

---
> [!question] 
> n = [5, 3, 2, 2, 1, 5, 5, 7, 5, 10]   
> m = [10, 111, 1, 9, 5, 67, 2]  
> 
> **Constraints** 
> 1. 1 ≤ n[i] ≤ 10 
> 2. n can have $10^8$ elements 
> 3. m can have $10^8$ elements 
>    
>**Output**    
>Print how many time the elements of m occur in n 

### Brute Force Method 

```python 
for num in m: 
	count = 0
	for x in n: 
		if num == x: 
			count += 1
	return count 
```
Time Complexity : $O(nm)$
Space Complexity : $O(1)$

---
### Using Hashing 

```python 
hash_list = [0] * 11
for i in n: 
	hash_list[i] += 1
for i in m: 
	if i > 10 or i < 1: 
		return 0
	else: 
		return (hast_list[i])
```
Time Complexity : $O(n+m)$
Space Complexity : $O(1)$

---
### Using [[Frequency Map using Dictionary|Dictionary(Frequency Map)]] 

```python
hash_dict = dict{}
for i in n: 
	hash_dict[i] = hash_dict.get(i, 0) + 1
for i in m: 
	if i > 10 or i < 1:
		return 0
	else: 
		return (hash_dict[i])
```

---
## Edge Cases 

- if the 1st Constraint was no there, then the [[#Using Hashing|hash_list]] method will not work as we don't know the number of elements, but [[#Using Frequency Map using Dictionary Dictionary(Frequency Map)|hash_dict]] method would work 
- 








---
# Questions 






---
# References 
