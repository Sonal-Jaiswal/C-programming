#include<stdio.h>
int main()

{
    int year;
    printf("enter Year: ");
    scanf("%d",&year);

    switch(((year%4)==0) && ((year%400)==0) || ((year%100)!=0))
    {
        case 0:{
        printf("leap year");
        break;
        }

        case 1:{
        printf("Non leap year");
        break;
        }
        return 0;
    }
}

