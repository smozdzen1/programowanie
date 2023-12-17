#include <stdio.h>

// Funkcja zamieniająca miejscami elementy o indeksach i i j w tablicy
void zamien(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funkcja sortująca bąbelkowo
void sortowanie(int A[], int n) {
    int i = n;

    while (i != 0) {
        int j = 0;

        while (j < i) {
            if (A[j + 1] < A[j]) {
                // Zamiana miejscami elementów, jeśli są w niewłaściwej kolejności
                zamien(&A[j + 1], &A[j]);
            }
            j = j + 1;
        }

        i = i - 1;
    }
}

int main() {
    // Tablica
    int A[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(A) / sizeof(A[0]);

    // Wywołanie funkcji 
    sortowanie(A, n);

    // Wynik
    printf("Posortowana tablica: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
