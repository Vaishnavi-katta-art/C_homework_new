#include <stdio.h>
int main() {

    float total, gst, grandTotal;

    printf("Enter the total amount: ");
    scanf("%f", &total);

    gst = total * 18 / 100;
    grandTotal = total;
    grandTotal += gst;

    printf("Total = %.2f\n", total);
    printf("GST = %.2f\n", gst);
    printf("Grand Total = %.2f\n", grandTotal);

    return 0;
}