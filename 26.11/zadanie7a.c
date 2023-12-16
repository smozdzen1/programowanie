#include <stdio.h>

int searchLinear(int arr[], int size, int key, int index) {
    // Bazowy przypadek: koniec tablicy
    if (index == size) {
        return 0; // Liczba nie znaleziona
    }

    // Warunek sprawdzający, czy liczba została znaleziona
    if (arr[index] == key) {
        return 1; // Liczba znaleziona
    }

    // Rekurencyjne poszukiwanie w pozostałej części tablicy
    return searchLinear(arr, size, key, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    if (searchLinear(arr, size, key, 0)) {
        printf("Liczba %d jest elementem tablicy.\n", key);
    } else {
        printf("Liczba %d nie jest elementem tablicy.\n", key);
    }

    return 0;
}
