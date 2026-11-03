#include <stdio.h>

int main()
{
    int num = 5;
    int i;

    // Using for loop
    printf("Using for loop:\n");

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // Using while loop
    printf("\nUsing while loop:\n");

    i = 1;

    while(i <= 10)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    // Using do-while loop
    printf("\nUsing do-while loop:\n");

    i = 1;

    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    while(i <= 10);

    return 0;
}