// Write a function named convertTemperature that takes a temperature value in Celsius and converts it to Fahrenheit. The function should return the converted temperature.
#include <stdio.h>

float convertTemperature(float c)
{
    return (c * 9 / 5) + 32;
}

int main()
{
    float c;
    printf("Enter Celsius: ");
    scanf("%f", &c);

    printf("Fahrenheit = %.2f", convertTemperature(c));
    return 0;
}
