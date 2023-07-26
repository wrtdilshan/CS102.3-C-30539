#include <stdio.h>
int main()
{
float radius, diameter, circumference, area;
printf("Enter radius of circle: ");
scanf("%f", &radius);
diameter = 2 * radius;
circumference = 2 * 3.14159 * radius;
area = 3.14159 * (radius * radius);
printf("Diameter of circle = %.2f \n", diameter);
printf("Circumference of circle = %.2f \n", circumference);
printf("Area of circle = %.2f ", area);
}
