#include <stdio.h>
int main()
{
    int hs,fs,ts,fives,twos,ones,total;
    printf("Enter a amount of money : ");
    scanf("%d" ,&total);

    hs=total/100;
    fs=(total-(hs*100))/50;
    ts=(total-(hs*100)-(fs*50))/10;
    fives=(total-(hs*100)-(fs*50)-(ts*10))/5;
    twos=(total-(hs*100)-(fs*50)-(ts*10)-(fives*5))/2;
    ones=(total-(hs*100)-(fs*50)-(ts*10)-(fives*5)-(twos*2))/1;

    printf("100's: %d\n 50's: %d\n 10's: %d\n 5's: %d\n 2's: %d\n 1's: %d\n",hs,fs,ts,fives,twos,ones);

    return 0;
}
