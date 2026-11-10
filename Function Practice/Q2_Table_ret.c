#include <stdio.h>

int table()
{
    int n, i, total = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        total = total + (n * i);
    }

    return total;
}

int main()
{
    int result;

    result = table();

    printf("Total = %d", result);

    return 0;
}