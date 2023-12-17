#include <stdio.h>

// Przeszukiwania liniowe
int przeszukaj(int tab[], int rozmiar, int n) {
    int index = 0;
    int wynik = 0; // Fałsz 

    while (index < rozmiar) {
        if (tab[index] == n) {
            wynik = 1; // Prawda
            break;
        }
        index++;
    }

    return wynik;
}

int main() {
    // Tablica
    int TAB[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int rozmiar = sizeof(TAB) / sizeof(TAB[0]);

    // Do wyszukania
    int szukanyElement = 6;

    // Wywołanie 
    int wynik = przeszukaj(TAB, rozmiar, szukanyElement);

    // Wynik
    if (wynik)
        printf("Element %d znajduje się w tablicy.\n", szukanyElement);
    else
        printf("Element %d nie znajduje się w tablicy.\n", szukanyElement);

    return 0;
}
