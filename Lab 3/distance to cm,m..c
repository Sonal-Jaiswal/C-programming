#include <stdio.h>
int main()
{
	int d1,dm,df,di,dc;
	printf("Enter Distance Between 2 cities: ");
	scanf("%d",&d1);
    dm= d1*1000;
    df= d1*1000*3.28;
    dc= d1*1000*100;
    di= d1*1000*40;
	printf ("Distance between 2 city is %d km",d1);
	printf("\nDistance=%d meters,\nDistance= %d feets,\nDistance= %d centimeters,\nDistance= %d inches", dm,df,dc,di);

	return 0;
}
