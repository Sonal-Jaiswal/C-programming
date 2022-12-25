#include <stdio.h>
int main()
{
    float Fahrenheit, Celsius;
    printf("enter temperature: ");
    scanf("%f",&Fahrenheit);
    Celsius=((Fahrenheit-32)*5)/9;
    printf("Temperature in Celsius is : %f",Celsius);
    return 0;
}



