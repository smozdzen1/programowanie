#include <stdio.h>

int nwd(int a, int b){
    if (b == 0){
        return a;
    }
    
    else{
        return nwd(b, a%b);
    }
}

int main(){
    int liczba1, liczba2;

    printf("Podaj dwie liczby całkowite: ");
    scanf("%d %d", &liczba1, &liczba2);

    printf("Najwielszy wspolny dzielnik (%d, %d) = %d\n", liczba1, liczba2, nwd(liczba1, liczba2));
}