#include<stdio.h>
int main()
{
    int num,f, n;

    printf("Enter a number: ");
    scanf("%d",&num);

    n = num;

    while (num!=0)
    {
        f = f*num;
        num = num-1;
    }

    printf("The Factorial for %d is %d", n, f);
    return 0;
}
