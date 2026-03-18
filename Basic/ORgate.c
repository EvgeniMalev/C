#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter two binary values (0 or 1): ");
    scanf("%d %d", &a, &b);

    result = a || b;  // Logical OR

    printf("Result of OR operation: %d\n", result);

    return 0;
}
