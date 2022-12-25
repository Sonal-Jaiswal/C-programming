#include<stdio.h>
int main()

{
    int a,b,c,great;
    printf("Enter 3 integer: ");
    scanf("%d%d%d",a,b,c);

    great=(a>b)&&(a>c)?(a):((b>c)&&(b>a))?(c);
    printf("The greater num is: %d",great);
    return 0;

}