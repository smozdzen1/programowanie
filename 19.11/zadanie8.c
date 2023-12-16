#include <stdio.h>

int czyPoprawnaData(int d, int m, int r) {
    if (r < 0 || m < 1 || m > 12 || d < 1) {
        return 0; 
    }

    int dniWMiesiacu;

    switch (m) {
        case 4:
        case 6:
        case 9:
        case 11:
            dniWMiesiacu = 30;
            break;
        case 2:
            if ((r % 4 == 0 && r % 100 != 0) || (r % 400 == 0)) {
                dniWMiesiacu = 29;
            } else {
                dniWMiesiacu = 28;
            }
            break;
        default:
            dniWMiesiacu = 31;
            break;
    }

    return (d >= 1 && d <= dniWMiesiacu);
}

int main() {
    int dzien, miesiac, rok;

    printf("Podaj dzien, miesiac i rok (oddzielone spacja): ");
    scanf("%d %d %d", &dzien, &miesiac, &rok);

    if (czyPoprawnaData(dzien, miesiac, rok)) {
        printf("Podana data jest poprawna: %02d-%02d-%04d.\n", dzien, miesiac, rok);
    } else {
        printf("Podana data jest niepoprawna.\n");
    }

    return 0;
}
