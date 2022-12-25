#include <stdio.h>

int main ()
{
    int num1,num2 , subtract;
    printf("Enter 2 integers: ");
    scanf("%d %d", &num1, &num2);

    subtract = num1 - num2;

    printf("%d - %d = %d", num1 ,num2, subtract);
    return 0;
}

