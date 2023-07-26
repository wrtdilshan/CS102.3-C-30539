#include <stdio.h>
int main()
{
float bsal,nsal,inc;
char empn[20];
printf("Enter Employee Name: ");
scanf("%s",&empn);
printf("Enter Your Basic Salary: ");
scanf("%f",&bsal);
if(bsal>=10000)
inc=bsal*0.15;
else if(bsal>=5000)
inc=bsal*0.10;
else
inc=bsal*0.05;
nsal=bsal+inc;
printf("Employee Name %s \n New Salary %.2f \n",empn,nsal);
}
