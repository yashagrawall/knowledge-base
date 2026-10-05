
Type : #Note    
Date : 2026-09-27    
Tags : [[DSA]]   
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Space Complexity 

> [!info] 
> **Defination** : The amount of Memory Space taken by the program while executing    
> Memory Space = Auxiliary Space + Input Space    
> Auxiliary Space : The extra space used to solve the problem    
> Input Space : The space used to store the input values

> [!example] 
> ```python
> x = 5
> y = 10 
> z = 15 
> 
> total = x + y + z 
> print (total)
> ```
> 
> Here, 
> Input Space : `x` , `y` , `z`  
> Auxiliary Space : `total`

> [!note] 
> Don’t change the values of the Input Space : they can be something important (eg : Credentials, etc)
> 
> so in order to save Space, we __cannot__ store the total value in `x` and then `print(x)`


---
## Representation 

- It is represented using the **Big-Oh Notation** → *O(_)* 

> [!example] 
> For an [[Array]] / List of $n$ variables : Space Complexity = $O(n)$


---
# Questions 






---
# References 

1. [YouTube Python DSA Series](https://youtu.be/bLm0wgPU-6A?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)