#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return 1; 
    }

    if (str[start] != str[end]) {
        return 0; 
    }

    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char word[] = "radar";

    if (isPalindrome(word, 0, strlen(word) - 1)) {
        printf("%s jest palindromem.\n", word);
    } else {
        printf("%s nie jest palindromem.\n", word);
    }

    return 0;
}
