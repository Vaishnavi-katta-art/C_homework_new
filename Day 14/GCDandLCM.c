#include <stdio.h>

int gcd(int a, int b)
{
    int remainder;

    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = gcd(a, b);

    printf("GCD = %d\n", result);
    printf("LCM = %d\n", (a * b) / result);

    return 0;
}