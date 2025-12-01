#include <stdio.h>
#include <ctype.h>

int main(void) {
    char line[101];
    int vowels = 0, consonants = 0, digits = 0;

    printf("Enter a line of text (up to 100 chars):\n");
    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; line[i] != '\0'; i++) {
        char c = line[i];

        if (isdigit((unsigned char)c)) {
            digits++;
        } else if (isalpha((unsigned char)c)) {
            char lower = (char)tolower((unsigned char)c);
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}
