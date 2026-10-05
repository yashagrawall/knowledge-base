
Type : #Note    
Date : 2026-10-02    
Tags : [[Python]] ; [[DSA]]        
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Frequency map using Dictionary 

---
- How to store the frequency of the occurance of an element in a dictionary 

## Method 1 

```python 
# sample input 
num = [5, 6, 7, 4 ,6 ,4, 7, 1, 1, 9, 0, 9, 9]

freq_map = dict()

for i in num: 
	if i in freq_map: 
		freq_map[i] += 1
	else: 
		freq_map[i] = 1
```
Time Complexity : $O(n)$
Space Complexity : $O(n)$

---
## Method 2 : using Hash_map get function 

```python 
hash_map = {}

for i in num: 
	hash_map[i] = hash_map.get(i, 0) + 1
```
Time Complexity : $O(n)$
Space Complexity : $O(n)$

### How the `.get` works 

- it returns the value of that key 
- in the above code, we have stored the frequency, hence its returning the frequency 
- if that key doesn't exist, it returns 0 (`.get(i, 0)`) 

---
# Questions 






---
# References 

1. [YouTube DSA series](https://youtu.be/Ocd_uHpsQyg?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)
2. [[Hashing]]