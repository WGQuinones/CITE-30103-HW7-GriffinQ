#include <stdio.h>

long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1L;
    }
    return n * factorial(n - 1);
}

int main(void) {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: factorial is not defined for negative integers.\n");
    } else {
        long result = factorial(n);
        printf("%d! = %ld\n", n, result);
    }

    return 0;
}
