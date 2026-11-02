#include <stdio.h>

int main()
{
       int seconds, hours, minutes, remaining; //first, declare the variables


      printf("Enter seconds: ");// taking seconds from user
      scanf("%d", &seconds);

    // converting seconds into hours
    hours = seconds / 3600;

    // finding remaining seconds
    remaining = seconds % 3600;

    // converting remaining seconds into minutes
    minutes = remaining / 60;

    // finding the final remaining seconds
    remaining = remaining % 60;

    // displaying time in hours, minutes, and seconds
    printf("%d:%02d:%02d\n", hours, minutes, remaining);

    return 0;
}