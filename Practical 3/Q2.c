#include <stdio.h>
int main()
{
int no1,no2,no3,large,small;
printf("Enter three numbers ");
scanf("%d %d %d",&no1,&no2,&no3);
if(no1>no2)
    if(no1>no3)
        large=no1;
        else
        large=no3;
        else
    if(no2>no3)
        large=no2;
        else
        large=no3;

    if(no1<no2)
        if(no1<no3)
        small=no1;
        else
        small=no3;
        else
    if(no2<no3)
        small=no2;
        else
        small=no3;
printf("The Largest Number is %d \n",large);
printf("The Small is %d \n",small);
}
