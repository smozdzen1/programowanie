#include <stdio.h>

int liczbaDniWMiesiacu(int miesiac, int rok) {
    switch (miesiac) {
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return 31;
    }
}

int main() {
    int miesiac, rok;

    printf("Podaj miesiac i rok (oddzielone spacja): ");
    scanf("%d %d", &miesiac, &rok);

    int liczbaDni = liczbaDniWMiesiacu(miesiac, rok);
    printf("Liczba dni w miesiacu %d roku %d to %d.\n", miesiac, rok, liczbaDni);

    return 0;
}
