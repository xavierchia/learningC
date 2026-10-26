#include <stdio.h>

float toCelsius(float fahrenheit);

int main()
{
    float celsius;
    celsius = toCelsius(200);
    printf("%3.1f", celsius);
}

float toCelsius(float fahr)
{
    float celsius;
    celsius = (fahr - 32) * (5.0 / 9.0);
    return celsius;
}