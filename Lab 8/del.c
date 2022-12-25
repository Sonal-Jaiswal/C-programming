#include<stdio.h>
int main()

{
    int n=0,i,j=1;

    for (j=1;j<=5;j++)
        {
        for (i=5;i>=j;i--)
        {
            printf("%d ",i) ;
        }
        printf("\n");
        }
}
