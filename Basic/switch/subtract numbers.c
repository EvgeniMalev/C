#include <stdio.h>

int main() {
    int num, num1;
    float dou1, dou2;
    int choice1, choice2;

    printf("Enter value of number 1 (integer): ");
    scanf("%d", &num);

    printf("Enter value of number 2 (integer): ");
    scanf("%d", &num1);

    printf("Enter value of number 3 (float): ");
    scanf("%f", &dou1);

    printf("Enter value of number 4 (float): ");
    scanf("%f", &dou2);

    printf("Select the first number to subtract (1-4): ");
    scanf("%d", &choice1);

    printf("Select the second number to subtract (1-4): ");
    scanf("%d", &choice2);

    if (choice1 == 1 && choice2 == 2) {
        printf("Result: %d\n", num - num1);
    } else if (choice1 == 2 && choice2 == 1) {
        printf("Result: %d\n", num1 - num);
    } else if (choice1 == 3 && choice2 == 4) {
        printf("Result: %.2f\n", dou1 - dou2);
    } else if (choice1 == 4 && choice2 == 3) {
        printf("Result: %.2f\n", dou2 - dou1);
    } else {
        printf("Error: You can only subtract integers from integers or floats from floats.\n");
    }

    return 0;
}
