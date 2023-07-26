#include <stdio.h>

int main() {
    int arr[10];
    int i, sum = 0;

    // Input values into the array
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // minimum value
    int min = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // maximum value
    int max = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // average value
    float average = (float)sum / 10;

    // Reverse the order of values
    int temp;
    for (i = 0; i < 5; i++) {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }

    // Print the results
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);
    printf("Values in reverse order:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}
