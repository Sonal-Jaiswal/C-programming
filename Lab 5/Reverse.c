#include<stdio.h>
int main()

{
    int a,b,c,d,e,temp,num;
    printf("Enter Number: ");
    scanf("%d",&num);

    e=num%10;
    d=(num/10)%10;
    c=(num/100)%10;
    b=(num/1000)%10;
    a=(num/10000)%10;

    printf("%d%d%d%d%d",e,d,c,b,a);
    return 0;
}
