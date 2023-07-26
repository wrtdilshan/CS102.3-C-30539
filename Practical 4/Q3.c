#include <stdio.h>.
int main()
{
int r;
char menu;
const float PI=3.14159;
float C,A,V;
printf("\nC -Cirumference of circle.\nA -Area of circle.\nV -Volume of a sphere.\n");
printf("\nSelect the operator.\n");
scanf("%c",&menu);
printf("Input radius: ");
scanf("%d",&r);
switch(menu)
{
case 'C': printf("Circumference of the circle is %.2f\n",C,C=2*PI*r);break;
case 'A': printf("Area of the circle is %.2f\n",A,A=PI*r*r);break;
case 'V': printf("Volume of the sphere is %.2f",V,V=(4*PI*r*r*r)/3);break;
default: printf("Invalid Value.");
}
}
