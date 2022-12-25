#include<stdio.h>
int main()
{

    int a=1,b,i,e,d,c,f;
    printf("Armstrong Number:\n");

    while(i<=500)
    {
        printf("Enter a integer: ");
        scanf("%d",&a);
        //a++;

        e=a%10;
        d=((a-e)%100)/10;
        c=(a/100);

        //printf("%d%d%d \n\n",e,d,c);

        if (a==(c*c*c)+(d*d*d)+(e*e*e))
        {
            printf(" %d\n",a);
        }
        else
             f=1;

        i++;
    }
}
