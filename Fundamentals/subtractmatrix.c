#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() {
    int A[ROWS][COLS], B[ROWS][COLS], C[ROWS][COLS];

    // Input matrix A
    printf("Enter elements of matrix A (%dx%d):\n", ROWS, COLS);
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("Enter elements of matrix B (%dx%d):\n", ROWS, COLS);
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Subtract matrices
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display result
    printf("Resultant matrix (A - B):\n");
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
