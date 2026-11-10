#include <stdio.h>

void sum(int n)
{
    int rem, total = 0;

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
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum(n);

    return 0;
}