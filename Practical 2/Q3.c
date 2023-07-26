#include<stdio.h>
int main()
{
    float time, distance, speed;

    printf("Enter Your distance ");
    scanf("%f", &distance);
    printf("Enter Your time ");
    scanf("%f", &time);

    speed=distance/time;
    printf("Average speed is %.2f ms-1",speed);
}
