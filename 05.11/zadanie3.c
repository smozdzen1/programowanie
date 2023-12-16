#include <stdio.h>

unsigned long long int power(int base, int exponent) {
    unsigned long long int result = 1;

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int main() {
    int a, b;

    printf("Podaj liczbe a: ");
    scanf("%d", &a);

    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    int c = 0;
    while (power(a, c) <= b) {
        c++;
    }

    printf("Pierwsza liczba c, dla której %d^c > %d, to: %d\n", a, b, c);

    return 0;
}