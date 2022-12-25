#include <stdio.h>
 main()
 {
    float Salary,A,B,Gross;
    printf("Enter Ramesh's Salary: ");
    scanf("%f",&Salary);
    A=(0.4)*Salary;
    B=(0.2)*Salary;
    Gross=Salary+A+B;
    printf("Gross Salary: %.2f",Gross);
 }
