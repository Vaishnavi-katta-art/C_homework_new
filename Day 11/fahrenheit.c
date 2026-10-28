
#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("Temperature in Celsius: %.1f\n", celsius);

    return 0;
}
