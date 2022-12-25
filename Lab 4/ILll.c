#include<stdio.h>
int main()
{
    int men,wmen,lit,illit,lit_men,lit_wmen,illit_men,illit_wmen;

    men=80000*0.52;
    wmen=80000-men;

    lit=80000*0.48;
    illit=80000-lit;

    lit_men=80000*0.35;
    lit_wmen=lit-lit_men;

    illit_men=men-lit_men;
    illit_wmen=wmen-lit_wmen;

    printf("Total No. Illiterate men = %d \n",illit_men);
    printf("Total No. Illiterate women = %d",illit_wmen);
    return 0;
}

