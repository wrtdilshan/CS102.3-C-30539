#include <stdio.h>
int main()
{
    int byear,age;
    char name[20];

    printf("Enter Your Name: ");
    scanf("%s",&name);
    printf("Enter Birth Year: ");
    scanf("%d",&byear);

    age=2023-byear;

    printf("Hi %s \n",name);
    printf("Hey You are %d Years old \n",age);
}
