#include <stdio.h>
int main()
{
int no, i;
printf("Enter a positive integer: ");
scanf("%d", &no);
printf("Factors of %d are: ", no);
for (i = 1; i <= no; ++i)
{
if (no % i == 0)
{
printf("%d ", i);
}
}
}
