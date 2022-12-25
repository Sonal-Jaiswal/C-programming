#include<stdio.h>
int main()
{
    int m,km,meter;
    printf("Enter distance (in m):- ");
    scanf("%d",&m);
    km=m/1000;
    meter=m%1000;
    printf("%d meters = %d km and %d meter",m,km,meter);
    return 0;
}

