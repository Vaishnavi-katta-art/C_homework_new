#include <stdio.h>

int main()
{
    int a, b, c;

    // taking three sides from user
    printf("Enter three sides: ");
    scanf("%d%d%d", &a, &b, &c);

    // checking if it is a triangle
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Not a triangle\n");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Scalene\n");
    }

    return 0;
}