#include <stdio.h>
int main()
{
int emp_no, count = 0;
float bsal;
while (1)
{
printf("Enter Employee No (-999 to exit): ");
scanf("%d", &emp_no);
if (emp_no == -999)break;
printf("Enter Basic Salary: ");
scanf("%f", &bsal);
if (bsal>= 5000)
count++;
}
printf("Number of employees with Basic Salary >= 5000: %d\n", count);
}
