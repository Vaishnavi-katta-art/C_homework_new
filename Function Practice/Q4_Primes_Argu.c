#include <stdio.h>

void prime(int n)
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
        printf("Prime number");
    else
        printf("Not a prime number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    prime(n);

    return 0;
}