#include <stdio.h>

int main() 
{
    float num;
    printf("Enter a fractional number: ");
    scanf("%f", &num);
    printf("The number in 2-digit decimal format is: %.2f\n", num);
    return 0;
}