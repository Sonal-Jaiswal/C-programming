#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter n1:  ");
    scanf("%d",&n1);
    printf("enter n2: ");
    scanf("%d",&n2);

    if (n1>n2){
        printf("Greater number: %d",n1);
    }
    else if (n1==n2){
        printf("Both the numbers are equal");
    }
    else{
        printf("Greater number: %d",n2);
    }
}




