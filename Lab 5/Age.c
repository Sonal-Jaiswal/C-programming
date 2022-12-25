#include<stdio.h>
int main()
{
    int A,B,C;
    printf ("Enter Ram's Age: ");
    scanf("%d",&A);
    printf ("Enter Shyam's Age: ");
    scanf("%d",&B);
    printf ("Enter Ajay's Age: ");
    scanf("%d",&C);

    if ((A<B) && (A<C))
    {
        printf("\nRam is youngest");
    }
    else if ((B<A) && (B<C))
    {
        printf("\nShyam is youngest");
    }
    else
    {
        printf("\nAjay is youngest");
    }
}




