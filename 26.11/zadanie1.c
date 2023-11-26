#include <stdio.h>


int silnia(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    } else {
    
        return n * silnia(n - 1);
    }
}

int main(){
    int liczba;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    printf("Silnia z %d wynosi %d\n", liczba, silnia(liczba));
}