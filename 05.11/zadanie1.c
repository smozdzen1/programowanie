#include <stdio.h>

int main(){

    int liczba, n, i;

    printf("Podaj liczbe naturalna: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        liczba += i * i;
    }

    printf("Suma kwadratww liczb od 1 do %d wynosi: %d\n"), n, liczba;

    return 0;
}