#include <stdio.h>

int main()
{
    int i, n;

    for(i = 1; i <= 4; i++)
    {
        for(n= 1; n <= i; n++)
        {
            printf("%d ", n);
        }

        printf("\n");
    }

    return 0;
}