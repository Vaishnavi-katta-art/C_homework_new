#include <stdio.h>

int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int result;

    result = maximum(10, 20);

    printf("Maximum = %d\n", result);

    return 0;
}