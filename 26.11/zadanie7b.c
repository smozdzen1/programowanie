#include <stdio.h>

int searchBinary(int arr[], int low, int high, int key) {
    if (low > high) {
        return 0; 
    }

    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        return 1; 
    } else if (arr[mid] < key) {
        return searchBinary(arr, mid + 1, high, key);
    } else {
        return searchBinary(arr, low, mid - 1, key);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    if (searchBinary(arr, 0, size - 1, key)) {
        printf("Liczba %d jest elementem tablicy.\n", key);
    } else {
        printf("Liczba %d nie jest elementem tablicy.\n", key);
    }

    return 0;
}
