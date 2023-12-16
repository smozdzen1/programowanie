#include <stdio.h>

#define X_SIZE 3
#define Y_SIZE 3
#define Z_SIZE 3

void wypiszWiekszeNizSasiedzi(int arr[X_SIZE][Y_SIZE][Z_SIZE]) {
    for (int x = 0; x < X_SIZE; x++) {
        for (int y = 0; y < Y_SIZE; y++) {
            for (int z = 0; z < Z_SIZE; z++) {
                for (int i = x - 1; i <= x + 1; i++) {
                    for (int j = y - 1; j <= y + 1; j++) {
                        for (int k = z - 1; k <= z + 1; k++) {
                            if (i >= 0 && i < X_SIZE &&
                                j >= 0 && j < Y_SIZE &&
                                k >= 0 && k < Z_SIZE &&
                                !(i == x && j == y && k == z)) {
                                if (arr[x][y][z] > arr[i][j][k]) {
                                    printf("Element [%d][%d][%d] (%d) jest większy niż sąsiad [%d][%d][%d] (%d)\n",
                                           x, y, z, arr[x][y][z], i, j, k, arr[i][j][k]);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main() {
    int tablica[X_SIZE][Y_SIZE][Z_SIZE] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    wypiszWiekszeNizSasiedzi(tablica);

    return 0;
}
