#include <stdio.h>
int main() {
int no, i, sum = 0;
printf("Enter a positive integer: ");
scanf("%d", &no);
for (i = -1; i <= no; ++i)
{
sum += i;
}
printf("Sum = %d", sum);
}
