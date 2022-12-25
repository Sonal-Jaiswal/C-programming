#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);

    switch(num>0)
    {
        case 1:
            printf("Number is positive");
            break;

        case 0:
            printf("Number is  negative");
            break;
        default:
            printf("zero");

    }

    return 0;
}
