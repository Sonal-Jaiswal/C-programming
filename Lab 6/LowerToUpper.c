#include <stdio.h>
int main ()
{
    char c;
    printf("Enter an alphabet\n");
    scanf("%c",&c);
    int n=c;

    switch (n>=97&&n<=122)
    {
    case 0:
    {
        n=n+32;
        c=n;
        printf("%c\n",c);
    }
    case 1:
    {
        printf("Already in Uppercase");
    }
    }
}

