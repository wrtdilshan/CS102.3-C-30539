#include <stdio.h>
int main()
{
int num, reversedNum = 0;
printf("Enter the numbers: ");
scanf("%d", &num);
do
{
int digit = num % 10;
reversedNum = reversedNum * 10 + digit;
num /= 10;
}
while (num != 0);
printf("Reversed number: %d\n", reversedNum);
}
