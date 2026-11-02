#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    char department[30];

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter department: ");
    scanf(" %[^\n]", department);

    printf("\n  ID CARD \n");

    printf("Name       : %s\n", name);
    printf("Roll No    : %d\n", roll);
    printf("Department : %s\n", department);

    return 0;
}