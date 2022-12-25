#include<stdio.h>
int main()
{
    int SP,CP;
    printf("Enter CP: ");
    scanf("%d",&CP);
    printf("enter SP: ");
    scanf("%d",&SP);

    if (SP>CP)
    {
        printf("profit");
    }
    else if(SP==CP)
    {
        printf("No profit, No loss");
    }
    else
    {
        printf("Loss");
    }
}
