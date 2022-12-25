#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Var1:- ");
    scanf("%d",&a);
    printf("Enter Var2:- ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swapping, \n var1 = %d \n var2= %d",a,b);
}

