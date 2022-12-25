#include<stdio.h>
int main()
{
    int v1,v2;
    printf("enter Var1:- ");
    scanf("%d",&v1);
    printf("enter Var2:- ");
    scanf("%d",&v2);

    v1=(v1*v2)/(v2=v1);

    printf("after swapping,\nvar1: %d \nvar2: %d",v1,v2);
}



