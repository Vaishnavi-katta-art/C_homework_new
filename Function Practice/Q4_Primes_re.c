#include <stdio.h>

int prime()
{
    int n, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

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
    int result;

    result = prime();

    if(result == 1)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}