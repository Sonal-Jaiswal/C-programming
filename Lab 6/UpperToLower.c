#include <stdio.h>
int main ()
{
    char c;
    printf("Enter an alphabet\n");
    scanf("%c",&c);
    int n=c;

    switch (n>=65&&n<=91)
    {
    case 0:
    {
        n=n+32;
        c=n;
        printf("%c",c);
    }
    case 1:
    {
        printf("Already in Lowercase");
    }
    }
}

