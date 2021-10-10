#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter the value of dividend ");
    scanf("%d", &dividend);
    printf("Enter the value of divisior ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;

    remainder = dividend % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}