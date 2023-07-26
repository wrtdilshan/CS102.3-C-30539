#include <stdio.h>

int main() {
    int size;

    // Input size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], vectorSum[size];

    // Input array1
    printf("Enter %d elements for array1 :\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input array2
    printf("Enter %d elements for array2 :\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    // Scalar sum of array1
    int scalarSum1 = 0;
    for (int i = 0; i < size; i++) {
        scalarSum1 += arr1[i];
    }

    // Scalar sum of array2
    int scalarSum2 = 0;
    for (int i = 0; i < size; i++) {
        scalarSum2 += arr2[i];
    }

    // Vector sum and storing in vectorSum array
    for (int i = 0; i < size; i++) {
        vectorSum[i] = arr1[i] + arr2[i];
    }

    // Display scalar sums and vector sum
    printf("Scalar Sum of array1 is %d\n", scalarSum1);
    printf("Scalar Sum of array2 is %d\n", scalarSum2);
    printf("Vector Sum of array1 and array2 is \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
}
