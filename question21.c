#include <stdio.h>

int main(void) {
    int x;
    int *ptr = &x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Value of variable x       : %d\n", x);
    printf("Address of x (&x)         : %p\n", (void *)&x);
    printf("Value via pointer (*ptr)  : %d\n", *ptr);

    return 0;
}
