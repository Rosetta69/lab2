#include <stdio.h>

int main() {
    int num1, num2;
    int remainder, difference, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    remainder = num1 % num2;
    difference = num2 - num1;
    sum = num1 + num2;

    printf("Remainder of %d divided by %d is %d\n", num1, num2, remainder);
    printf("Difference between %d and %d is %d\n", num2, num1, difference);
    printf("Sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
