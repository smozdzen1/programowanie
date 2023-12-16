#include <stdio.h>
#include <stdlib.h>

int* kwadraty(int* tablica, int rozmiar) {
    int* tablica_kwadratow = (int*)malloc(rozmiar * sizeof(int));

    if (tablica_kwadratow == NULL) {
        printf("Blad alokacji pamieci\n");
        exit(1);
    }

    for (int i = 0; i < rozmiar; ++i) {
        tablica_kwadratow[i] = tablica[i] * tablica[i];
    }

    return tablica_kwadratow;
}

int main() {
    int rozmiar;

    printf("Podaj rozmiar tablicy: ");
    scanf("%d", &rozmiar);

    int* tablica = (int*)malloc(rozmiar * sizeof(int));

    if (tablica == NULL) {
        printf("Blad alokacji pamieci\n");
        return 1;
    }

    printf("Podaj elementy tablicy:\n");
    for (int i = 0; i < rozmiar; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tablica[i]);
    }

    int* tablica_kwadratow = kwadraty(tablica, rozmiar);

    printf("Tablica kwadratow:\n");
    for (int i = 0; i < rozmiar; ++i) {
        printf("%d ", tablica_kwadratow[i]);
    }

    free(tablica);
    free(tablica_kwadratow);

    return 0;
}