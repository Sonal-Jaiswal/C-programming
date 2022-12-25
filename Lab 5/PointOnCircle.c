#include<stdio.h>
#include<math.h>
int main()

{
     int x1,y1,x2,y2,r,OR; //O is the origin and R is the point on circumference

     printf("Enter origin coordinates x2,y2 of circle: ");
     scanf("%d%d",&x1,&y1);

     printf("Enter radius of circle: ");
     scanf("%d",&r);

     printf("Enter coordinates x2,y2 on the circle: ");
     scanf("%d%d",&x2,&y2);

     OR= sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    if(OR>r)
        printf("\nPoint (%d,%d) lies outside the circle.", x2, y2);
    else if(OR<r)
        printf("\nPoint (%d,%d) lies inside the circle.", x2, y2);
    else if(OR==r)
        printf("\nPoint (%d,%d) lies on the  circle.", x2, y2);
    else
        printf("\nWrong Entry");
    return 0;
}



