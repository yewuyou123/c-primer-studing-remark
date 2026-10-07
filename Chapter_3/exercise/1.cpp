//int的overflow float的overflow underflow
#include<stdio.h> 
int main(void)
{
    int i_1;
    float f_1, f_2;
    i_1 = 2147483647;
    f_1 = 3.4028234663852886e38;
    f_2 = 1.401e-45;
    printf("%d\n%e\n%e\n", i_1, f_1, f_2);
    printf("%d\n%e\n%e\n", i_1+1, f_1*2, f_2/2);
    return 0;
}