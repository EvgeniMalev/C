#include <stdio.h>

int main() {
    int num;
    int num1;

    for (num = 0; num <= 40; num = num + 1) {
        for (num1 = 14; num1 <= 35; num1 = num1 + 1) {
            printf("num: %d, num1: %d\n", num, num1);
        }
    }
    return 0;
}
