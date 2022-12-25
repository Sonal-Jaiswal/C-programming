#include<stdio.h>
#include<math.h>
int main()
{
    int x1, y1, x2, y2, x3, y3;
    double ab, bc, ac, abc;

    printf("Enter (x1,y1) co-ordinates: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter (x2, y2) co-ordinates: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter (x3,y3) co-ordinates: ");
    scanf("%d %d", &x3, &y3);


    ab = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    bc = sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    ac = sqrt(pow(x3-x1,2)+pow(y3-y1,2));

    printf(" ab: %.2f\n bc: %.2f\n ac: %.2f\n",ab, bc, ac);
    if((ab+bc)==ac)
    {
        printf("ab + bc = ac\n");
        printf("All  the points fall on same line.");
    }
    else
        printf("All the points does not fall on the same line.");

    return 0;
}


