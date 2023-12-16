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

    printf("%d do potegi %d wynosi: %llu\n", a, b, power(a, b));

    return 0;
}