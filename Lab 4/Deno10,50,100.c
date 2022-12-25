#include<stdio.h>
main()

{
    int N,A,B,C;
    printf("enter Amount : ");
    scanf("%d",&N);
    A=N/100;
    B=N/50;
    C=N/10;
    printf(" 100= %d notes, 50=%d notes , notes 10=%dnotes",A,B,C);
    return  0;
}


