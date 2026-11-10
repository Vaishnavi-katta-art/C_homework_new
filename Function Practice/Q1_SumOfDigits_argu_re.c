#include <stdio.h>

int sum(int n)
{
    int rem, total = 0;

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
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum of digits = %d", result);

    return 0;
}