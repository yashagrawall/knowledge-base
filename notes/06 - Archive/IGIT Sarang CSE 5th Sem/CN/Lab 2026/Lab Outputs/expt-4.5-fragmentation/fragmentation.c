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
