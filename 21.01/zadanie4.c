#include <stdio.h>

#define MAX_FILENAME_LENGTH 100
#define BUFFER_SIZE 1024

int main() {
    char input_filename[MAX_FILENAME_LENGTH];
    char even_output_filename[MAX_FILENAME_LENGTH] = "parzyste.txt";
    char odd_output_filename[MAX_FILENAME_LENGTH] = "nieparzyste.txt";
    FILE *input_file, *even_output_file, *odd_output_file;
    int number;

    printf("Podaj nazwę pliku z liczbami: ");
    scanf("%s", input_filename);

    input_file = fopen(input_filename, "r");

    if (input_file == NULL) {
        printf("Nie można otworzyć pliku %s do odczytu.\n", input_filename);
        return 1;     
    }

    even_output_file = fopen(even_output_filename, "w");
    odd_output_file = fopen(odd_output_filename, "w");

    if (even_output_file == NULL || odd_output_file == NULL) {
        printf("Nie można otworzyć pliku do zapisu.\n");
        fclose(input_file);
        fclose(even_output_file);
        fclose(odd_output_file);
        return 1;  
    }

    while (fscanf(input_file, "%d", &number) == 1) {
        if (number % 2 == 0) {
            fprintf(even_output_file, "%d\n", number);
        } else {
            fprintf(odd_output_file, "%d\n", number);
        }
    }

    fclose(input_file);
    fclose(even_output_file);
    fclose(odd_output_file);

    printf("Liczby zostały podzielone na pliki parzyste.txt i nieparzyste.txt.\n");

    return 0;  
}
