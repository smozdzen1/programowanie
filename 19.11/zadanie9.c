#include <stdio.h>

int czyPrzestepny(int rok) {

    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
        return 1; // Rok przestępny
    } else {
        return 0; // Rok nieprzestępny
    }
}

int main() {
    int rok;

    printf("Podaj rok: ");
    scanf("%d", &rok);

    if (czyPrzestepny(rok)) {
        printf("%d to rok przestępny.\n", rok);
    } else {
        printf("%d to rok nieprzestępny.\n", rok);
    }

    return 0;
}
