
#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], matrixSum[3][3];

    // Input
int i,j;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elements for matrix1 :");
            scanf("%d", &matrix1[i][j]);
        }
    }
    {
        printf("\n");
    }

    // Input matrix2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the elements for matrix2 :");
            scanf("%d", &matrix2[i][j]);
        }
    }
    {
        printf("\n");
    }

    // matrix sum
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display matrix sum
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrixSum[i][j]);
        }
        printf("\n");
    }

}
