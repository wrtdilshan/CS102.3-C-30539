#include <stdio.h>
int main()
{
int num, digit, sum = 0;
printf("Enter the numbers: ");
scanf("%d", &num);
while (num > 0)
{
digit = num % 10;
sum += digit;
num /= 10;
}
printf("Sum of the digits: %d\n", sum);
}
