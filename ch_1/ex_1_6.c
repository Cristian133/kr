/* to enter EOF from the command line press CTRL-D */

#include <stdio.h>

int main()
{
    printf("%d\n", (getchar() != EOF));
}
