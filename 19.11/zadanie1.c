#include <stdio.h>

// Deklaracje funkcji
float dodawanie(float a, float b);
float odejmowanie(float a, float b);
float mnozenie(float a, float b);
float dzielenie(float a, float b);

int main() {
    float liczba1, liczba2, wynik;
    char operacja;

    // Wczytaj dwie liczby od użytkownika
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);

    printf("Podaj druga liczbe: ");
    scanf("%f", &liczba2);

    // Wybierz operację matematyczną
    printf("Wybierz dzialanie (+, -, *, /): ");
    scanf(" %c", &operacja);

    // Obsługa operacji za pomocą switch
    switch (operacja) {
        case '+':
            wynik = dodawanie(liczba1, liczba2);
            break;
        case '-':
            wynik = odejmowanie(liczba1, liczba2);
            break;
        case '*':
            wynik = mnozenie(liczba1, liczba2);
            break;
        case '/':
            wynik = dzielenie(liczba1, liczba2);
            break;
        default:
            printf("Nieprawidlowa operacja.\n");
            return 1; // Zakończ program z kodem błędu
    }

    // Wyświetl wynik
    printf("Wynik operacji: %.2f\n", wynik);

    return 0;
}

// Implementacje funkcji matematycznych
float dodawanie(float a, float b) {
    return a + b;
}

float odejmowanie(float a, float b) {
    return a - b;
}

float mnozenie(float a, float b) {
    return a * b;
}

float dzielenie(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Nie można dzielić przez zero.\n");
        return 0;  // Możesz dostosować wartość zwracaną w przypadku błędu
    }
}
