#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */
int main(void)
{
    float fahr, celsius;
    printf("Fahrenheit Celsius Table\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        celsius = (fahr - 32) * (5.0 / 9.0);
        printf("%10.0f %7.1f\n", fahr, celsius);
        fahr = fahr;
    }
}