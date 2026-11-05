#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d! = %lld\n", i, factorial(i));
    }

    return 0;
}