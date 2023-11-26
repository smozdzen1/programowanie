#include <stdio.h>

void wypisz(int n){
    if (n > 0){
        wypisz(n-1);
        printf("%d", n);
    }
}

int main(){
    
    
    int liczba;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    printf("Liczby od 1 do %d: \n", liczba);
    wypisz(liczba);

    return 0;
}
