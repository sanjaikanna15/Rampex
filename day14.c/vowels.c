#include <stdio.h>
#include <ctype.h>

int main() {
    char w[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(w, sizeof(w), stdin);

    for (int i = 0; w[i] != '\0'; i++) {
        char ch = tolower(w[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        } else if (isalpha(w[i])) {
            consonants++;
        }
    }

    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);

    return 0;
}
