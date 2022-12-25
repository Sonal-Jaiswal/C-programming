#include <stdio.h>

int main()
{
    char c;
    printf("Enter Alphabet:-");
    scanf("%c", &c);

    if ((int)c >=65 && (int)c<=65)
    {
        c = (char)c + 32;
        printf("%c\n",c);
    } else {
    printf("Already lowercase");
    }
    return 0;
}
