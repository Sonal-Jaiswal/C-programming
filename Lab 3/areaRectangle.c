#include <stdio.h>
int main ()
{
    float l,b,r,pr,ar,pc,ac;
    printf("enter length: ");
    scanf("%f",&l);
    printf("enter breadth: ");
    scanf("%f",&b);
    printf("enter radius of the circle: ");
    scanf("%f",&r);

    pr= 2*(l+b); //perimeter of rectangle
    ar= l*b;     //area of rectangle

    pc= 2*3.14*r; //circumference of circle
    ac= 3.14*r*r; //area of circle

    printf("\n Perimeter(rectangle): %.2f units\n area(rectangle): %.2f sq. units\n",pr,ar);
    printf("\n Circumference of the circle: %.2f units \n area of the circle : %.2f sq. units",pc,ac);
}
