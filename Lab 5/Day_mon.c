//logic
//First we find difference between the years
//then calculate total leap years and total non leap years
// divide total days by 7 so to get the assigned day in a week
#include<stdio.h>
int main()
{
    int yr,start_yr=2001,Leap,NonLeap,TotalDays,day;

    printf("Enter the year: ");
    scanf("%d", &yr);

    yr = yr-start_yr;
    Leap = yr/4;
    NonLeap = yr -Leap;

    TotalDays = (NonLeap*365) + (Leap*366) + 1;


    day = TotalDays%7;

    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;
}

