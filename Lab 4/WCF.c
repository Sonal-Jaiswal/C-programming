#include<stdio.h>
int main()
{
    int v,t;
    float wcf;
    printf("enter temp (in C) : ");
    scanf("%d",&t);
    printf("enter Wind velocity : ");
    scanf("%d",&v);
    wcf= (35.74 + 0.6215*t + ( 0.4275*t - 35.75 ) * v  * 0.16 );
    printf("W.C.F is %f",wcf);
}
