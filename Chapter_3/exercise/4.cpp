#include <stdio.h>
int main()
{
    float num;
    printf("Enter a floating-point value:_____\b\b\b\b\b");
    scanf("%f", &num);
    printf("fixed-point notation: %f\n", num);
    printf("exponential notation: %e\n", num);
    printf("p notationL: %a", num);
    return 0;
}