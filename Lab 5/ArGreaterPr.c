#include<stdio.h>
int main()
{
    int l,b,ar,pr;
    printf("Enter Length,breadth of rectangle: ");
    scanf("%d%d",&l,&b);

    pr=2*(l+b);
    ar=l*b;
    printf("\nArea: %d \nPerimeter: %d \n",ar,pr);
    if (pr>ar){
        printf("perimeter is greater than its area");
    }
    else if (ar>pr){
        printf("area is greater than its perimeter");
    }
    else if (ar==pr){
        printf("Area=Perimeter");
    }
}




