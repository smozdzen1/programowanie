#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    const char *home_dir = getenv("HOME");
    
    char file_path[1024];
    snprintf(file_path, sizeof(file_path), "%s/%s", home_dir, "plik.txt");

    if (access(file_path, F_OK) != -1) {
        printf("Plik plik.txt istnieje w katalogu domowym.\n");
    } else {
        printf("Plik plik.txt nie istnieje w katalogu domowym.\n");
    }

    return 0;
}
