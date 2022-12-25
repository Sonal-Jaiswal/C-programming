#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 && marks>100){
        printf("Wrong Entry");
    }
    if(marks<50){
        printf("Fail");
    }
    if(marks>=50 && marks<60){
        printf("Grade C");
    }
    if(marks>=60 && marks<80){
        printf("Grade B");
    }
    if(marks>=80 && marks<90){
        printf("Grade A");
    }
    if(marks>90 && marks<=100){
        printf("Grade O");
    }
}
