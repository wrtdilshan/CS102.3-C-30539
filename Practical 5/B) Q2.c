#include <stdio.h>
int main()
{
float mrk[10],sum=0,avg,max=0,min=0;
int i;
//input
for(i=0;i<10;i++)
{
printf("Enter %d student marks: ",i+1);
scanf("%f", &mrk[i]);
}
//display
for (i = 1; i <10; i++)
{
if(mrk[i]>max)
max=mrk[i];
else
min=mrk[i];
sum = sum+mrk[i];
}
avg=sum/10.0;
printf("The maximum mark is %.2f\n", max);
printf("The minimum mark is %.2f\n", min);
printf("The average mark is %.2f\n", avg);
}
