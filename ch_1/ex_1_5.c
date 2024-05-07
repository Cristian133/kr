#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for farh = 300,..., 0; floating-point version */

#define LOWER 0 /* lower limit of temperature table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

int main()
{
    int fahr;

    printf("fahr celsius\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }
}
