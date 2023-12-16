#include <stdio.h>

void wypiszProstokat(int tablica[][2], int wiersze, int kolumny) {
    for (int i = 0; i < wiersze; ++i) {
        for (int j = 0; j < kolumny; ++j) {
            if (tablica[i][j] == 1) {
                printf("x ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int tablica[][2] = {{1, 0}, {0, 1}};
    int wiersze = sizeof(tablica) / sizeof(tablica[0]);
    int kolumny = sizeof(tablica[0]) / sizeof(tablica[0][0]);

    wypiszProstokat(tablica, wiersze, kolumny);

    return 0;
}