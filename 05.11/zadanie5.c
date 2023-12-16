#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    int* tablica = (int*)malloc(n * sizeof(int));

    if (tablica == NULL) {
        printf("Blad alokacji pamieci\n");
        return 1;
    }

    printf("Podaj %d liczb:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tablica[i]);
    }

    printf("Tablica zawierajaca podane liczby:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", tablica[i]);
    }

    free(tablica);

    return 0;
}
