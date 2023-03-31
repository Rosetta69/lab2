#include <stdio.h>

int main() {
    int num1, num2;
    int remainder, difference, sum;

    // Запит на введення першого числа
    printf("Введіть перше число: ");
    // Зчитування першого числа в змінну num1
    scanf("%d", &num1);

    // Запит на введення другого числа
    printf("Введіть друге число: ");
    // Зчитування другого числа в змінну num2
    scanf("%d", &num2);

    // Обчислення залишку від ділення num1 на num2 і збереження у змінну remainder
    remainder = num1 % num2;
    // Обчислення різниці між num2 і num1 і збереження у змінну difference
    difference = num2 - num1;
    // Обчислення суми num1 і num2 і збереження у змінну sum
    sum = num1 + num2;

    // Виведення результатів на екран
    printf("Залишок %d ділиться на %d Є %d\n", num1, num2, remainder);
    printf("Різниця між %d і %d є %d\n", num2, num1, difference);
    printf("Сума %d і %d є %d\n", num1, num2, sum);

    // Повернення 0, що означає успішне завершення програми
    return 0;
}
