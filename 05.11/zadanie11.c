#include <stdio.h>

int obliczWspolczynnik(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return obliczWspolczynnik(n - 1, k - 1) + obliczWspolczynnik(n - 1, k);
    }
}

void wypiszTrojkatPascala(int wysokosc) {
    for (int i = 0; i < wysokosc; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d ", obliczWspolczynnik(i, j));
        }
        printf("\n");
    }
}

int main() {
    int wysokosc = 5;

    printf("Trojkat Pascala o wysokosci %d:\n", wysokosc);
    wypiszTrojkatPascala(wysokosc);

    return 0;
}
