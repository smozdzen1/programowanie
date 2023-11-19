#include <stdio.h>

float dodawanie(float a, float b);
float odejmowanie(float a, float b);
float mnozenie(float a, float b);
float dzielenie(float a, float b);

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
        return 0;  
    }
}

int main() {
    float liczba1, liczba2, wynik;
    char operacja;

    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);

    printf("Podaj druga liczbe: ");
    scanf("%f", &liczba2);

    printf("Wybierz dzialanie (+, -, *, /): ");
    scanf(" %c", &operacja);

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
            return 1; 
    }

    // Wyświetl wynik
    printf("Wynik operacji: %.2f\n", wynik);

    return 0;
}


