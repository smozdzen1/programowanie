#include <stdio.h>

int funkcja(int n) {
    if (n <= 1) {
        return n;
    } else {
        return funkcja(n - 1) + funkcja(n - 2);
    }
}

int main(){
    
    int n;
    
    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);

    printf("Ciąg Fibonacciego na pozycji %d: %d\n", n, funkcja(n));

    return 0;
}
