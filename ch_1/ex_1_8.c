#include <stdio.h>

int main()
{
    int c, nb, nt, nl;

    nb = nt = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t'){
            ++nt;
        }
        if (c == ' ') {
            ++nb;
        }
    }
    printf("%d\t%d\t%d\n", nb, nt, nl);
}
