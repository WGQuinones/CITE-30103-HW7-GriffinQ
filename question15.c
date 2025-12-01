#include <stdio.h>

int main(void) {
    char line[101];
    int wordCount = 0;
    int inWord = 0;

    printf("Enter a line of text (up to 100 chars):\n");
    if (fgets(line, sizeof(line), stdin) == NULL) {
        return 1;
    }

    for (int i = 0; line[i] != '\0'; i++) {
        char c = line[i];
        if (c != ' ' && c != '\t' && c != '\n') {
            if (!inWord) {
                inWord = 1;
                wordCount++;
            }
        } else {
            inWord = 0;
        }
    }

    printf("Word count: %d\n", wordCount);

    return 0;
}
