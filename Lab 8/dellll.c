#include<stdio.h>
int main()
{

    int a,b,i,e,d,c;

    while(i<=5)
    {

        printf("Enter a integer: ");
        scanf("%d",&a);

        e=a%10;
        d=((a-e)%100)/10;
        c=(a/100);

        printf("%d%d%d \n\n",e,d,c);

        if (a==(c*c*c)+(d*d*d)+(e*e*e))
        {
            printf("%d",a);
        }
        else
             a=1;

        i++;
    }
}
