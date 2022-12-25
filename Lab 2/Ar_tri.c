#include <stdio.h>

int main()
{
    float base, height, area;

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    area = (1.0 / 2.0) * base * height;

    printf("Area of the triangle is: %.2f\n", area);
    return 0;
}
