#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,percentage, average;
    printf ("Marks of subjects (out of 100)\n");

    printf("Enter marks of subject 1: ");
    scanf ("%f",&s1);
    printf("Enter marks of subject 2: ");
    scanf ("%f",&s2);
    printf("Enter marks of subject 3: ");
    scanf ("%f",&s3);
    printf("Enter marks of subject 4: ");
    scanf ("%f",&s4);
    printf("Enter marks of subject 5: ");
    scanf ("%f",&s5);

    average=(s1+s2+s3+s4+s5)/5.0;
    percentage=((s1+s2+s3+s4+s5)/500.0)*100.0;

    printf("Average = %.2f,\nPercentage = %.2f%%",average,percentage);
    return 0;
}




