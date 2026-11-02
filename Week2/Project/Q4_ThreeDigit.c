#include <stdio.h>

int main()
{
    int num, a, b, c;
    int reverse, sum;

    // taking a three-digit number
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    // separating the digits
    a = num / 100;
    b = (num / 10) % 10;
    c = num % 10;

    // reversing the number
    reverse = c * 100 + b * 10 + a;

    // adding all the digits
    sum = a + b + c;

    // displaying the results
    printf("Reverse = %d\n", reverse);
    printf("Sum = %d\n", sum);

    return 0;
}