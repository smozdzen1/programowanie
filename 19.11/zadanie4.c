#include <stdio.h>
#include <string.h>

char zwrocZnak(const char *s, int i) {
    if (i >= 0 && i < strlen(s)) {
        return s[i];
    } else {
        return '\0';
    }
}

int czyPalindrom(const char *s) {
    int dlugosc = strlen(s);
    for (int i = 0; i < dlugosc / 2; i++) {
        if (zwrocZnak(s, i) != zwrocZnak(s, dlugosc - 1 - i)) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    char slowo[100];

    printf("Podaj slowo: ");
    scanf("%s", slowo);

    if (czyPalindrom(slowo)) {
        printf("%s jest palindromem.\n", slowo);
    } else {
        printf("%s nie jest palindromem.\n", slowo);
    }

    return 0;
}
