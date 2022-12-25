#include<stdio.h>
int main()

{
    int n=0,i,j=1,k=0;

    for (j=1;j<=5;j++)
        {
        for (k=5;k>=i;k--)
        {
            printf(" ");
        }

        for (i=1;i<=j;i++)
        {
            printf("*") ;
        }
        printf("\n");
        }

        for (j=5;j>=1;j--)
        {
            for (k=5;k>=i;k--)
            {
                printf("");
            }

            for (i=5;i>=j;i--)
            {
                printf("*") ;
            }
            printf("\n");
            }


}
