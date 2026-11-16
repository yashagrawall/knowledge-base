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
