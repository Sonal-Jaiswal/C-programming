#include <stdio.h>
int main()
{
	int sec,min,hr,second,minn;
	printf ("Enter seconds : ");
	scanf("%d",&sec);
	hr=(sec/60)/60;
	second=sec%60;
	minn=sec%60;
	printf("\nTime (in secs) = %d",sec);
	printf("\n%d hr %d min %d",hr,minn,second);
	return 0;
}



