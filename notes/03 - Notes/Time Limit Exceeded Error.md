
Type : #Note    
Date : 2026-09-27    
Tags :  [[DSA]]   
Status : #incomplete     
~ ***Yash Agrawall*** ~     

---
# Time Limit Exceeded Error 

When submitting a DSA Q in any platform : [LeetCode](https://leetcode.com/) , [GeeksForGeeks](https://www.geeksforgeeks.org/dsa/geeksforgeeks-practice-best-online-coding-platform/) , etc.   
You write the code → it gets stored in a Server    
 
For every Q, you will find 
 1. Time Limit (usually 1 sec) → server can perform ≈ $10^8$ operations 
 2. Constraints 
 
If your code exceeds $10^8$ operations → TLE Error

- TLE Error means : [[Time Complexity]] is too much → code not efficient enough 

> [!example] 
> Sort an array : $[5, 8, 7, 6, 5, 1, 3]$
> Time Limit : 1 sec  
> Constraint : $1 < n < 10^5$
> 
> You solved it and got Time Complexity = $O(n^2)$   
> For Worst Case : No. of Operations = $10^{5 \times {2}} =10^{10}$    
> Time taken to perform $10^{10}$ operations = $\frac{10^{10}}{10^8}=100$ sec  
> This exceeds the Time Limit → TLE Error   

---
# Questions 






---
# References 

1. [[Errors]]
2. [YouTube Python DSA Series](https://youtu.be/YvvAnuOzOSY?list=PLhR2IpV1b2FwWwviBHRrR118YAaSlyhTU)