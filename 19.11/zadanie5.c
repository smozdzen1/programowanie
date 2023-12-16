#include <stdio.h>

int przekrojOdcinkow(int a1, int b1, int a2, int b2, int *a3, int *b3) {
    *a3 = (a1 > a2) ? a1 : a2; 
    *b3 = (b1 < b2) ? b1 : b2; 

    if (*a3 <= *b3) {
        return *a3;
    } else {
        return -1; 
    }
}

int main() {
    int a1, b1, a2, b2, a3, b3;

    printf("Podaj a1, b1, a2, b2: ");
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);

    int wynik = przekrojOdcinkow(a1, b1, a2, b2, &a3, &b3);

    if (wynik != -1) {
        printf("Przekroj odcinkow [%d,%d] i [%d,%d] to [%d,%d].\n", a1, b1, a2, b2, a3, b3);
    } else {
        printf("Przekroj odcinkow [%d,%d] i [%d,%d] jest zbiorem pustym.\n", a1, b1, a2, b2);
    }

    return 0;
}
