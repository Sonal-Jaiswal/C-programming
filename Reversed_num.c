#include <stdio.h>
int main(void) {
    int input, reverse;
    printf("Enter the number: ");
    scanf("%d", &input);

        reverse = (reverse * 10) + (input % 10);
        input = input/10;

        reverse = (reverse * 10) + (input % 10);
        input = input/10;

        reverse = (reverse * 10) + (input % 10);
        input = input/10;

        reverse = (reverse * 10) + (input % 10);
        input = input/10;

        reverse = (reverse * 10) + (input % 10);
        input = input/10;

    printf("Reverse: %d", reverse);
}


