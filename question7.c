#include <stdio.h>

int main(void) {
    int arr[10];
    int max, min;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Largest value: %d\n", max);
    printf("Smallest value: %d\n", min);

    return 0;
}

