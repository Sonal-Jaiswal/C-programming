#include<stdio.h>
int main()

{
    int count = 1, workhrs, over;
    float overpay;

    while (count<=10);
    {
        printf("working hour employee no %d: ", count);
        scanf("%d", &workhrs);

        if(workhrs>40)
        {
            over = workhrs - 40;
            overpay = over* 12.00;
            printf("Employee No %d overtime pay is %.2f\n", count, over);
        }
        else
            printf("NO OVER TIME PAY\n");

        count++;
    }
}



