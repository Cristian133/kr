#include <stdio.h>

int main()
{
    int c, nb, nt, nl;

    nb = nt = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        }
        else if (c == ' ') {
            printf("\\b");
        }
        else {
            putchar(c);
        }
    }
}
