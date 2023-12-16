#include <stdio.h>
#include <stdbool.h>

bool czyLiczbaPierwsza(int n) {
    if (n <= 1) {
        return false; 
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }

    return true; 
}

void liczbyPierwsze(int a, int b) {
    int liczba = a;
    int licznik = 0;

    while (licznik < b) {
        if (czyLiczbaPierwsza(liczba)) {
            printf("%d ", liczba);
            licznik++;
        }
        liczba++;
    }

    printf("\n");
}

int main() {
    int a, b;

    printf("Podaj liczbe a: ");
    scanf("%d", &a);

    printf("Podaj liczbe b: ");
    scanf("%d", &b);

    liczbyPierwsze(a, b);

    return 0;
}
