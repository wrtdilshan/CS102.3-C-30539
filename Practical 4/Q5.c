#include <stdio.h>
int main()
{
int mo;
printf("1-January\n2-Feburary\n3-March\n4-April\n5-May\n6-June\n7-July\n8-
August\n9-September\n10-October\n11-November\n12-December\n");
printf("\nSelect a month number: ");
scanf("%d",&mo);
switch(mo)
{
case 1: printf("31 days on January month.");break;
case 2: printf("28 days on Feburary month.");break;
case 3: printf("31 days on March month.");break;
case 4: printf("30 days on April month.");break;
case 5: printf("31 days on May month.");break;
case 6: printf("30 days on June month.");break;
case 7: printf("31 days on July month.");break;
case 8: printf("31 days on August month.");break;
case 9: printf("30 days on September month.");break;
case 10: printf("31 days on October month.");break;
case 11: printf("30 days on November month.");break;
case 12: printf("31 days on December month.");break;
default: printf("Invalid month.");
}
printf("\n");
return 0;
}
