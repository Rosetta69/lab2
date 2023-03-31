#include <stdio.h>

int main() {
    int num1, num2;
    int remainder, difference, sum;

    printf("Введіть перше число: ");
    scanf("%d", &num1);

    printf("Введіть друге число: ");
    scanf("%d", &num2);

    remainder = num1 % num2;
    difference = num2 - num1;
    sum = num1 + num2;

    printf("Залишок %d ділиться на %d Є %d\n", num1, num2, remainder);
    printf("Різниця між %d і %d є %d\n", num2, num1, difference);
    printf("Сума %d і %d є %d\n", num1, num2, sum);

    return 0;
}