#include <stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char s[20];

    printf("Enter an int Number: ");
    scanf("%d",&i);
    printf("Enter a Float Number: ");
    scanf("%f",&f);
    printf("Enter a double Number: ");
    scanf("%lf",&d);
    printf("Enter a Char: ");
    scanf("%s",&s);

    printf("The int number you entered : %d \n",i);
    printf("The float number you entered : %.2f \n",f);
    printf("The double number you entered : %lf \n",d);
    printf("The char text you entered : %s \n",s);
}
