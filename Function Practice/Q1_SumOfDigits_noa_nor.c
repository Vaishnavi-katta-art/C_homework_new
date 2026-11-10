#include <stdio.h>

void sum()
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

    printf("Sum of digits = %d", total);
}

int main()
{
    sum();
    return 0;
}