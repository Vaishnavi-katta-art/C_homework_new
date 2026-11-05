#include <stdio.h>

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    float result;

    result = average(10, 20, 30);

    printf("Average = %.2f\n", result);

    return 0;
}