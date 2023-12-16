#include <stdio.h>

void wypiszTabeleASCII(int n) {
    int znak = 32;
    int licznik = 0;

    while (znak <= 126) {
        printf("%3d: %c   ", znak, (char)znak);

        znak++;
        licznik++;

        if (licznik == n) {
            licznik = 0;
            printf("\n");
        }
    }

    printf("\n");
}

int main() {
    int n;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    wypiszTabeleASCII(n);

    return 0;
}
