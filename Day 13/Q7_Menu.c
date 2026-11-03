#include <stdio.h>

int main()
{
    int choice;
    int a, b;

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Sum = %d\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d%d", &a, &b);
                printf("Product = %d\n", a * b);
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    }
    while(choice != 3);

    return 0;
}