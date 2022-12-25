#include <stdio.h>
int main()
{
    float base,height,area;
    printf("Enter base:-");
    scanf("%f",&base);
    printf("Enter Height:-");
    scanf("%f",&height);
    area=(1.0/2.0)*base*height;
    printf("(1.0/2.0)*%f*%f=%f",base,height,area);
    return 0;
}

