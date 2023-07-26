#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = ( fahrenheit - 32 ) * 5 / 9;

    printf("\n");
    printf("Celsius: %.2f ", celsius);
    printf("\n");
}
