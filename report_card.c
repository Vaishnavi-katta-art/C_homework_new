
#include <stdio.h>

int main() {
    char name[100];
    int mark1, mark2, mark3;
    float average;
    printf("Enter student's full name: ");
    scanf(" %[^\n]", name);
    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    average = (mark1 + mark2 + mark3) / 3.0;
    printf("\n=STUDENT REPORT CARD =\n");
    printf("Student Name: %s\n", name);
    printf("Subject 1 Marks: %d\n", mark1);
    printf("Subject 2 Marks: %d\n", mark2);
    printf("Subject 3 Marks: %d\n", mark3);
    printf("Average Marks: %.2f\n", average);
    printf("\n");

    return 0;
}
