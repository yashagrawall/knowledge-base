# Experiment 6.2: Implementation of Message Confidentiality Using RSA Encryption and Decryption

### Aim
Write and execute a C program that uses RSA algorithm to encrypt a text message and decrypt the same.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 rsa_cipher.c -o rsa_cipher

# Run executable
./rsa_cipher
```

**Sample Input Provided:**
```text
Demonstration of RSA algorithm
```

### Execution Output
```text
Public key (e, n) = (17, 3233)
Private key (d, n) = (2753, 3233)

Enter message to encrypt: Demonstration of RSA algorithm

Encrypted (as values): 1759 1313 2271 2185 2235 1230 884 2412 1632 884 3179 2185 2235 1992 2185 1369 1992 1859 2680 2790 1992 1632 745 2923 2185 2412 3179 884 2170 2271 

Decrypted message: Demonstration of RSA algorithm
```
