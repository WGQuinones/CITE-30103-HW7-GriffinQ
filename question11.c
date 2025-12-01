#include <stdio.h>

int main(void) {
    char str[100];
    int length = 0;

    printf("Enter a string (no spaces): ");
    scanf("%99s", str);

    while (str[length] != '\0') {
        length++;
    }

    printf("Length: %d\n", length);

    return 0;
}
