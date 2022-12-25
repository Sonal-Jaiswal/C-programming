#include<stdio.h>
int main()
{
    int n,d,total;
    printf("Enter the selling price of 15 items: ");
    scanf("%d",&n);
    printf("total profit earned by 15 items: ");
    scanf("%d",&d);

    total=(n-d)/15;
    printf("Cost price of 1 item: %d",total);
    return 0;
}
