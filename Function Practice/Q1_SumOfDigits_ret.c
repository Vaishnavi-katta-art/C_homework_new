#include <stdio.h>

int sum()
{
    int n, rem, total = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;
        total = total + rem;
        n = n / 10;
    }

    return total;
}

int main()
{
    int result;

    result = sum();

    printf("Sum of digits = %d", result);

    return 0;
}