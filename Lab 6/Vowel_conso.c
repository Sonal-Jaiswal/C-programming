#include <stdio.h>
int main()
{
char c;
printf("Enter any alphabet (uppercase)\n");
scanf("%c",&c);

int n=c;
if(n>=65&&n<=91||n>=97&&n<=123)

{
switch(c)
{
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("Vowel");
    break;
    default:
        printf("Consonant");

}
}
else
    printf("Not an alphabet");
}
