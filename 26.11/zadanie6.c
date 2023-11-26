//Napisz funkcję rekurencyjną obliczającą sumę cyfr podanej liczby.

#include <stdio.h>

int suma(int liczba) {
    if (liczba == 0) {
        return 0;
    } else {
        return (liczba % 10) + suma(liczba / 10);
    }
}

int main() {
    int liczba;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    printf("Suma cyfr liczby %d wynosi: %d\n", liczba, suma(liczba));

    return 0;
}
