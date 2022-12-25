#include <stdio.h>
int main()
{
    int v1, v2,temp;
    printf("Enter two variables:- ");
    scanf("%d%d",&v1,&v2);
    printf("\n 1st variable = %d     2nd variable = %d", v1, v2);
    temp = v1;
    v1 = v2;
    v2 = temp;
    printf(" \n\n after swapping \n\n 1st variable = %d     2nd variable = %d", v1, v2);
    return 0;
}

