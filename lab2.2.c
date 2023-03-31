#include <stdio.h>

int main() {
    int a = 15, b = -2, c = 3;
    float y;

    y = (3*a - 4*b + 5*c) / (a*b + 2*b*c + 3*a*c) - a*b - c/4.0;

    printf("Значення y є %.2f\n", y);

    return 0;
}