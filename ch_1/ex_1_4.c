#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius = -20, 0, ..., 150; floating-point version */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -20; /* lower limit of temperature table */
    upper = 150; /* upper limit */
    step = 10; /* step size */

    celsius = lower;
    printf("celsius   fahr\n");
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%7.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
