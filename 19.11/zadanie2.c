#include <stdio.h>

int sprawdzanie(char znak1, char znak2){
    if(znak1 == znak2){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    char znak1, znak2;

    printf("Podaj pierwszy znak: ");
    scanf("%c", &znak1);
    printf("Podaj drugi znak: ");
    scanf(" %c", &znak2);
    printf("%d", sprawdzanie(znak1, znak2));
}