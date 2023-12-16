#include <stdio.h>

char zwrocZnak(const char *s, int i) {
    if (i >= 0 && i < strlen(s)) {
        return s[i];
    } else {
        return '\0';
    }
}

int main() {
    const char *napis = "Przykladowy napis";
    int indeks = 5;

    char wynik = zwrocZnak(napis, indeks);

    if (wynik != '\0') {
        printf("Znak na pozycji %d to: %c\n", indeks, wynik);
    } else {
        printf("Podany indeks wykracza poza zakres napisu.\n");
    }

    return 0;
}
