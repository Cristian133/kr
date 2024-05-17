#include <stdio.h>

#define BLANK ' '

int main()
{
    int c, prev_char;

    while ((c = getchar()) != EOF) {
        if (c != BLANK || prev_char != BLANK) {
            if (c == BLANK) 
                putchar('\n');
            else
                putchar(c);
        }
        prev_char = c;
    }
}

