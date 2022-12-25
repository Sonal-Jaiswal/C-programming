#include<stdio.h>
int main()

{
    int a,b,c; //a,b,c are angles
    printf("Enter angles of triangle ABC: ");
    scanf("%d%d%d",&a,&b,&c);

    if ((a+b+c)==180){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is invalid");
    }
}

