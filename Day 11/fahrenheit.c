
#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("Temperature in Celsius: \n", celsius);

    return 0;
}
