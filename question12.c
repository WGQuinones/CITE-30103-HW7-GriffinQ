#include <stdio.h>

int main(void) {
    char word[100];
    int length = 0;
    int isPalindrome = 1;

    printf("Enter a word (no spaces): ");
    scanf("%99s", word);

    while (word[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
