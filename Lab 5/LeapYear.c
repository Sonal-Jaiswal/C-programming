#include<stdio.h>
int main()

{
    int year;
    printf("enter Year: ");
    scanf("%d",&year);

    if(((year%4)==0) && ((year%400)==0) || ((year%100)!=0))
    {
        printf("leap year");
    }
    else
    {
        printf("Non leap year");
    }
    return 0;
}

