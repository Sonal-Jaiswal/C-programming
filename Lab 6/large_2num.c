#include<stdio.h>
int main()

{
    int a,b,Greater;
    printf("Enter any two integers: ");
    scanf("%d %d",&a,&b);

    Greater=a>b?a:b;
    printf("The greater number is %d",Greater);
}