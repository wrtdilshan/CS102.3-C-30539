#include <stdio.h>
#include <math.h>
int isArmstrong(int number);
int main() {
int number;
printf("Enter a number: ");
scanf("%d", &number);
if (isArmstrong(number))
printf("%d is an Armstrong number.\n", number);
else
printf("%d is not an Armstrong number.\n", number);
return 0;
}
int isArmstrong(int number) {
int originalNumber, remainder, result = 0, n = 0;
originalNumber = number;
// Count the number of digits
while (originalNumber != 0) {
originalNumber /= 10;
++n;
}
originalNumber = number;
// Calculate the sum of nth power of individual digits
while (originalNumber != 0) {
remainder = originalNumber % 10;
result += pow(remainder, n);
originalNumber /= 10;
}
// Check if the result is equal to the original number
if (result == number)
return 1;
else
return 0;
}
