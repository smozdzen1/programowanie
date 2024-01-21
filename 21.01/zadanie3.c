#include <stdio.h>
#include <ctype.h>

#define MAX_FILENAME_LENGTH 100
#define BUFFER_SIZE 1024

int main() {
    char input_filename[MAX_FILENAME_LENGTH];
    char output_filename[MAX_FILENAME_LENGTH];
    FILE *input_file, *output_file;
    char buffer[BUFFER_SIZE];
    char ch;

    printf("Podaj nazwę pliku do przetworzenia: ");
    scanf("%s", input_filename);

    input_file = fopen(input_filename, "r");

    if (input_file == NULL) {
        printf("Nie można otworzyć pliku %s do odczytu.\n", input_filename);
        return 1;
    }

    printf("Podaj nazwę pliku wyjściowego: ");
    scanf("%s", output_filename);

    output_file = fopen(output_filename, "w");

    if (output_file == NULL) {
        printf("Nie można otworzyć pliku %s do zapisu.\n", output_filename);
        fclose(input_file);
        return 1; 
    }

    while ((ch = fgetc(input_file)) != EOF) {
        fputc(toupper(ch), output_file);
    }

    fclose(input_file);
    fclose(output_file);

    printf("Plik został pomyślnie przetworzony. Wynik zapisano w pliku %s.\n", output_filename);

    return 0;
}
