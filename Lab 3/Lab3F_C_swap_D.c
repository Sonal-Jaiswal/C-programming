#include <stdio.h>

main()
{
    int C,D,temp;
    printf("Enter two integers:- ");
    scanf("%d%d",&C,&D);
    printf(" 1st variable = %d 2nd variable = %d",C,D);
    temp = C;
    C = D;
    D = temp;
    printf(" \n after swapping \n   C = %d D = %d", C, D);
    return 0;
}




