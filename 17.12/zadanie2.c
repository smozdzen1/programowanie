#include <stdio.h>
#include <math.h>

// Przeszukiwanie binarne
int przeszukaj(int tab[], int rozmiar, int n) {
    int left = 0;
    int right = rozmiar - 1;
    int result = 0; // Fałsz

    while (left <= right) {
        int middle = floor((left + right) / 2);

        if (tab[middle] < n) {
            left = middle + 1;
        } else if (tab[middle] > n) {
            right = middle - 1;
        } else {
            result = 1; // Prawda
            break;
        }
    }

    return result;
}

int main() {
    // Tablica
    int TAB[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int rozmiar = sizeof(TAB) / sizeof(TAB[0]);

    // Do wyszukania
    int szukanyElement = 8;

    // Wywołanie funkcji 
    int wynik = przeszukaj(TAB, rozmiar, szukanyElement);

    // Wynik
    if (wynik)
        printf("Element %d znajduje się w tablicy.\n", szukanyElement);
    else
        printf("Element %d nie znajduje się w tablicy.\n", szukanyElement);

    return 0;
}
