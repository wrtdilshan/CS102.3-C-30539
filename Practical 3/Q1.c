#include <stdio.h>
int main()
{
int no1,no2,max;
printf("Enter two numbers ");
scanf("%d %d",&no1,&no2);
if(no1>no2)
max=no1;
else
max=no2;
printf("The highest is %d \n",max);
}
