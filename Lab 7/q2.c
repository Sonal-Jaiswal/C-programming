#include<stdio.h>
int main()

{
    int n,i=0;

    do
    {
    printf("enter  number: ");
    scanf("%d",&n);
    if (n==0){
        printf("ending");
        break;}
    else {
        i+=n;

    printf("%d \n",i);
    }
    }while(1);
}
