#include<stdio.h>

int main()
{
    int h1,m1,s1,h2,m2,s2;
    int H,M,S;
    printf ("Enter time (HH:MM:SS):- ");
    scanf  ("%d:%d:%d",&h1,&m1,&s1);
    printf ("Enter time (HH:MM:SS):- ");
    scanf  ("%d:%d:%d",&h2,&m2,&s2);
    H=(h1+h2)%24;
    M=(m1+m2)%60;
    S=(s1+s2)%60;
    printf("Time:- %d:%d:%d",H,M,S);
}



