#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr;
    int sum = 0;
    float avg;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid n.\n");
        return 1;
    }

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = (float)sum / n;

    printf("Average: %.2f\n", avg);

    free(arr);
    return 0;
}
