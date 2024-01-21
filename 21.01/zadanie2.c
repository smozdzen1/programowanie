#include <stdio.h>
#include <stdlib.h>

int main() {
    char nazwaPliku[100];

    printf("Podaj nazwe pliku: ");
    scanf("%s", nazwaPliku);

    FILE *plik = fopen(nazwaPliku, "r");

    if (plik == NULL) {
        printf("Nie udalo sie otworzyc pliku.\n");
        return 1;
    }

    char znak;
    while ((znak = fgetc(plik)) != EOF) {
        putchar(znak);
    }

    fclose(plik);

    return 0;
}
