#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int reverse;

    while(n>0) {
        reverse = (reverse * 10 ) + n % 10;
        n/=10;
    }
    printf("%d\n", reverse);
    return 0;
}
