# Experiment 3.3: Data Link Layer Framing Method - Character Stuffing

### Aim
Write and execute a C program to implement the data link layer framing method: Character stuffing and destuffing.

### Source Code (`char_stuffing.c`)
```c
#include <stdio.h>
#include <string.h>

#define FLAG '#'
#define ESC '\\'

int main() {
    char in[100], st[200], dest[100];
    int j = 0;
    printf("\nCharacter used for starting and ending flag: %c\nCharacter used for escape character: %c\n", FLAG, ESC);
    printf("\nEnter the characters to be transmitted (without spaces): ");
    if (scanf("%99s", in) != 1) return 0;

    st[j++] = FLAG;
    for (int i = 0; in[i]; i++) {
        if (in[i] == FLAG || in[i] == ESC) st[j++] = ESC;
        st[j++] = in[i];
    }
    st[j++] = FLAG; st[j] = '\0';
    printf("\nStuffed Frame: %s\n", st);

    int k = 0;
    for (int i = 1; i < (int)strlen(st) - 1; i++) {
        if (st[i] == ESC) i++;
        dest[k++] = st[i];
    }
    dest[k] = '\0';
    printf("Destuffed Data: %s\n\n", dest);
    return 0;
}
```

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

---
**Related:** [[CN Lab Outputs Guide]] Â· [[CN Lab Manual (shortened)]] Â· [[cn_lab_viva_preparation_guide]] Â· [[cn-viva-questions]]
