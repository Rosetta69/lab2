#include <stdio.h>

int main() {
    int a, y, z, x; // оголошення змінних a, y, z, x

    printf("Введіть значення a: ");
    scanf("%d", &a); // зчитування значення змінної a з консолі

    printf("Введіть значення y: ");
    scanf("%d", &y); // зчитування значення змінної y з консолі

    printf("Введіть значення z: ");
    scanf("%d", &z); // зчитування значення змінної z з консолі

    x = a * y * z; // обчислення значення змінної x

    printf("введіть значення x є: %d\n", x); // виведення значення змінної x на консоль

    return 0;
}