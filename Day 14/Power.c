#include <stdio.h>

int power(int x, int n)
{
    int result = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }

    return result;
}

int main()
{
    int x, n;

    printf("Enter base: ");
    scanf("%d", &x);

    printf("Enter power: ");
    scanf("%d", &n);

    printf("Answer = %d\n", power(x, n));

    return 0;
}