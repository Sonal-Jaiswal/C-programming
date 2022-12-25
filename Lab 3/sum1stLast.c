#include <stdio.h>
int main ()
{
    int n,s=0,n1,n2;
    printf("Enter 4 digit number\n");
    scanf("%d",&n);
    n1=n%10;
    n2=n/1000;
    s=n1+n2;
    printf("The sum 1st and last is :%d",s);
}

