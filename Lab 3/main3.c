#include <stdio.h>

int main(void) {
    int input, temp, output;
    temp= 0;
    output = 0;
    printf("Enter the number: ");
    scanf("%d", &input);

    while(input > 0) {
        temp = (temp * 10) + ((input % 10)+1);
        input = input /10;
    }

    while(temp > 0) {
        output = (output * 10) + (temp % 10);
        temp = temp / 10;
    }
    printf("Output: %d", output);
    return 0;
}
