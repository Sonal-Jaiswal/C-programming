#include<stdio.h>
#include<math.h>
int main()

{
    int num;
    printf ("Enter Num: ");
    scanf("%d",&num);

    if (num==abs(num)){
        printf("Num=%d   Absolute Value: %d",num,num);
    }
    else{
        printf("Num=%d   Absolute value: %d",num,abs(num));
    }
}

