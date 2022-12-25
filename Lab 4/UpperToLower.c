#include <stdio.h>
int main ()
{
    char c;
    printf("Enter an alphabet\n");
    scanf("%c",&c);
    int n=c;

    if(n>=65&&n<=91){
        n=n+32;
        c=n;
        printf("%c",c);
    }
    else{
        printf("Already in Lowercase");
    }
}

