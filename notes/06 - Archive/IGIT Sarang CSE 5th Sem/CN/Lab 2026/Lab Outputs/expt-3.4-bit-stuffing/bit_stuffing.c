#include <stdio.h>

int main() {
    char in[100], st[200], dest[100];
    int cnt = 0, j = 0;
    printf("\nEnter binary data (e.g., 0111111010): ");
    if (scanf("%99s", in) != 1) return 0;

    for (int i = 0; in[i]; i++) {
        st[j++] = in[i];
        if (in[i] == '1' && ++cnt == 5) { st[j++] = '0'; cnt = 0; }
        else if (in[i] == '0') cnt = 0;
    }
    st[j] = '\0';
    printf("\nStuffed Data: %s\n", st);

    cnt = 0; int k = 0;
    for (int i = 0; st[i]; i++) {
        dest[k++] = st[i];
        if (st[i] == '1' && ++cnt == 5) { i++; cnt = 0; }
        else if (st[i] == '0') cnt = 0;
    }
    dest[k] = '\0';
    printf("Destuffed Data: %s\n\n", dest);
    return 0;
}
