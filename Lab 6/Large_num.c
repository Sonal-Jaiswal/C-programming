# include <stdio.h>
 
int main()
{
    int a, b, large ;
 
    printf("Enter two numbers : ") ;
 
    scanf("%d %d", &a, &b) ;
 
    large = a > b ? (a) : (b) ;
 
    printf("\nThe Greater number is : %d", large) ;
}