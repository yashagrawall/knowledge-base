# Experiment 3.3: Data Link Layer Framing Method - Character Stuffing

### Aim
Write and execute a C program to implement the data link layer framing method: Character stuffing and destuffing.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 char_stuffing.c -o char_stuffing

# Run executable
./char_stuffing
```

**Sample Input Provided:**
```text
IGI#S\##ara\\n#g
```

### Execution Output
```text
Character used for starting and ending flag: #
Character used for escape character: \

Enter the characters to be transmitted (without spaces): IGI#S\##ara\\n#g

Stuffed Frame: #IGI\#S\\\#\#ara\\\\n\#g#
Destuffed Data: IGI#S\##ara\n#g
```
