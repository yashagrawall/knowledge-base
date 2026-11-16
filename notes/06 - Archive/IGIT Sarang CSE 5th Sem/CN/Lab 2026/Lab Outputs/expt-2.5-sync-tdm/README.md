# Experiment 2.5: Synchronous Time Division Multiplexing (TDM) Technique

### Aim
Write and execute a C program to implement Synchronous Time Division Multiplexing (TDM) technique.

### Compilation & Execution
```bash
# Compile source code
gcc -O2 sync_tdm.c -o sync_tdm

# Run executable
./sync_tdm
```

**Sample Input Provided:**
```text
4
7
India
-
America
Network
```

### Execution Output
```text
Synchronous TDM Simulation
==========================
Enter the number of channels: 4
Enter the frame size (max. number of characters per channel): 7
Enter data for channel 1: India
Enter data for channel 2: -
Enter data for channel 3: America
Enter data for channel 4: Network

--- Transmitting Frames (Round-Robin Schedule) ---
Time Slot Order: CH1 CH2 CH3 CH4 

Frame 1: I   -   A   N   
Frame 2: n   -   m   e   
Frame 3: d   -   e   t   
Frame 4: i   -   r   w   
Frame 5: a   -   i   o   
Frame 6: -   -   c   r   
Frame 7: -   -   a   k
```
