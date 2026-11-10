#include <stdio.h>

int pattern()
{
    int i, j, n, count = 0;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
            count++;
        }

        printf("\n");
    }

    return count;
}

int main()
{
    int result;

    result = pattern();

    printf("Total numbers printed = %d", result);

    return 0;
}