#include <stdio.h>


void Binarne(int liczba) {
    if (liczba > 0) {
        Binarne(liczba / 2);
        printf("%d", liczba % 2);
    }
}
int main() {
    int liczba;

    printf("Podaj liczbe dziesietna: ");
    scanf("%d", &liczba);

    printf("Reprezentacja binarna liczby %d: ", liczba);
    Binarne(liczba);
    printf("\n");

    return 0;
}

