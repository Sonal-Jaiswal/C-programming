#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x,y coordinates: ");
    scanf("%d%d",&x,&y);

    if (x==0 && y!=0)
    {
        printf("lies on y axis");
    }
    else if (y==0 && x!=0)
    {
        printf("lies on x axis");
    }
    else if (x==0 && y==0)
    {
        printf("lies on origin");
    }
    else
    {
        printf("lies in the quadrant");
    }
    return 0;
}





