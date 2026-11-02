#include <stdio.h>

int main()
{
    char ch;

    // taking character from user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // checking character type
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase letter\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase letter\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special character\n");
    }

    return 0;
}