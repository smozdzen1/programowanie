#include <stdio.h>

#define MAX_FILENAME_LENGTH 100
#define MAX_LINE_LENGTH 100

void drawRectangle(char znak, int czyPusty, int wys, int szer) {
    int i, j;

    for (i = 0; i < wys; i++) {
        for (j = 0; j < szer; j++) {
            if (czyPusty && i > 0 && i < wys - 1 && j > 0 && j < szer - 1) {
                if (j == 1) {
                    printf(" ");
                } else {
                    printf("  ");
                }
            } else {
                printf("%c ", znak);
            }
        }
        printf("\n");
    }
}

int main() {
    char filename[MAX_FILENAME_LENGTH] = "conf.txt";
    char line[MAX_LINE_LENGTH];
    char znak;
    int czyPusty, wys, szer;

    FILE *config_file = fopen(filename, "r");

    if (config_file == NULL) {
        printf("Nie można otworzyć pliku konfiguracyjnego %s.\n", filename);
        return 1;  
    }

    while (fgets(line, MAX_LINE_LENGTH, config_file) != NULL) {
        sscanf(line, "znak = %c", &znak);
        sscanf(line, "czy_pusty = %d", &czyPusty);
        sscanf(line, "wys = %d", &wys);
        sscanf(line, "szer = %d", &szer);
    }

    drawRectangle(znak, czyPusty, wys, szer);

    fclose(config_file);

    return 0;  
}
