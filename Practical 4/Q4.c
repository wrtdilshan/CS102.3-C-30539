#include <stdio.h>
int main()
{
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
switch(ch)
{
case 'A':printf("This letter is a vowel.");break;
case 'a':printf("This letter is a vowel.");break;
case 'E':printf("This letter is a vowel.");break;
case 'e':printf("This letter is a vowel.");break;
case 'I':printf("This letter is a vowel.");break;
case 'i':printf("This letter is a vowel.");break;
case 'O':printf("This letter is a vowel.");break;
case 'o':printf("This letter is a vowel.");break;
case 'U':printf("This letter is a vowel.");break;
case 'u':printf("This letter is a vowel.");break;
default :printf("Letter '%c' is not a vowel.",ch);
}
printf("\n");
}
