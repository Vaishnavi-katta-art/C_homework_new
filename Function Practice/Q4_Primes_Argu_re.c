#include <stdio.h>

int prime(int n)
{
    int i, count = 0;

    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = prime(n);

    if(result == 1)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}