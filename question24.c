#include <stdio.h>

int square(int x) {
    return x * x;
}

int main(void) {
    int n;
    int (*funcPtr)(int) = square;

    printf("Enter an integer: ");
    scanf("%d", &n);

    int result = funcPtr(n);
    printf("Square of %d is %d\n", n, result);

    return 0;
}
