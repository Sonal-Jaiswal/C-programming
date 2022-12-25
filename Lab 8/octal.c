#include<stdio.h>
int main()

{
    int c,a,num;
    printf("Enter num: ");
    scanf("%d",&num);

    while(num!=0)
    {
        c=num%8;
        printf("%d \n",c);
        num=num/8;

    }

}
