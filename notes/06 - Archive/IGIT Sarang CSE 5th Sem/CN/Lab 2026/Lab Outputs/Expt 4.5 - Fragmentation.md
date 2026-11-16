# Experiment 4.5: Implementation of IPv4 Packet Fragmentation & Reassembly

### Aim
Write and execute a C program that performs IP Fragmentation and Reassembly with realistic IPv4 header fields.

### Source Code (`fragmentation.c`)
```c
#include <stdio.h>
#include <string.h>

int main() {
    char msg[1000], buf[1000] = {0};
    int mtu;
    printf("\nEnter the message to be fragmented: ");
    if (scanf(" %[^\n]", msg) != 1) return 0;
    printf("Enter the MTU size: ");
    if (scanf("%d", &mtu) != 1) return 0;

    int max_d = ((mtu - 20) / 8) * 8;
    int len = strlen(msg), off = 0, idx = 1;

    printf("\n--- IP Fragments ---\n");
    for (int i = 0; i < len; i += max_d) {
        int dlen = (len - i > max_d) ? max_d : len - i;
        int mf = (i + dlen < len);
        printf("Fragment %d:\n  Total Length: %d bytes\n  Flags (MF): %d\n  Fragment Offset: %d (bytes: %d)\n  Data: \"%.*s\"\n\n",
               idx++, 20 + dlen, mf, off / 8, off, dlen, msg + i);
        strncat(buf, msg + i, dlen);
        off += dlen;
    }
    printf("--- Reassembled Message ---\n%s\n\n", buf);
    return 0;
}
```

### Compilation & Execution
```bash
# Compile source code
gcc -O2 fragmentation.c -o fragmentation

# Run executable
./fragmentation
```

**Sample Input Provided:**
```text
Indira Gandhi Institute of Technology (IGIT), Sarang was established in the year of 1982.
50
```

### Execution Output
```text
Enter the message to be fragmented: Indira Gandhi Institute of Technology (IGIT), Sarang was established in the year of 1982.
Enter the MTU size: 50

--- IP Fragments ---
Fragment 1:
  Total Length: 44 bytes
  Flags (MF): 1
  Fragment Offset: 0 (bytes: 0)
  Data: "Indira Gandhi Institute "

Fragment 2:
  Total Length: 44 bytes
  Flags (MF): 1
  Fragment Offset: 3 (bytes: 24)
  Data: "of Technology (IGIT), Sa"

Fragment 3:
  Total Length: 44 bytes
  Flags (MF): 1
  Fragment Offset: 6 (bytes: 48)
  Data: "rang was established in "

Fragment 4:
  Total Length: 37 bytes
  Flags (MF): 0
  Fragment Offset: 9 (bytes: 72)
  Data: "the year of 1982."

--- Reassembled Message ---
Indira Gandhi Institute of Technology (IGIT), Sarang was established in the year of 1982.
```

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
