#include <stdio.h>
int main()
{
    //int n;
    //printf("Number of rows");
    //scanf("%d",&n);

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {

        if(j==1 || i==j || i==4 )
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

        }
        printf("\n");
    }
    return 0;
}
