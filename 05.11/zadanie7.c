
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

int main() {
    int n;

    printf("Podaj liczbe n: ");
    scanf("%d", &n);

    if (czyLiczbaPierwsza(n)) {
        printf("%d jest liczba pierwsza.\n", n);
    } else {
        printf("%d nie jest liczba pierwsza.\n", n);
    }

    return 0;
}
