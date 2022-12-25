#include <stdio.h>
int main()
{
	int paisa,rupees,total;
	printf("Enter Total Paisa : ");
	scanf("%d",&paisa);
	rupees = paisa / 100;
	total= paisa % 100;
	printf("\nTotal Paisa = %d",paisa);
	printf("\n%d Rupees %d Paisa",rupees,total);
    return 0;
}
