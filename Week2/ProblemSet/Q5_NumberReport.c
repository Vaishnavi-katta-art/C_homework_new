#include <stdio.h>

int main()
{
    int num;

    // first taking number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // checking whether number is positive or negative
    if (num > 0)
    {
        printf("Positive\n");
    }
    else if (num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }

    // checking whether number is even or odd
    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}