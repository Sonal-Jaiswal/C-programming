#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c;
    float area,s;
    printf("1st side");
    scanf("%d",&a);
    printf("2nd side");
    scanf("%d",&b);
    printf("3rd side");
    scanf("%d",&c);
    s=a+b+c;
    area=sqrt((s-a)(s-b)(s-c));

    printf("%f=%f((%f-%d)(%f-%d)(%f-%d))^(1/2)",s,a,b,c);
    return 0;

}
