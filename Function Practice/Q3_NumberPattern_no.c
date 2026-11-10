#include <stdio.h>

void pattern()
{
    int i, j, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}

int main()
{
    pattern();

    return 0;
}