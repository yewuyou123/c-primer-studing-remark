#include<stdio.h>
void br();
void ic();
int main(void)
{
    br();
    printf(",");
    ic();
    printf("\n");
    br();
    printf("\n");
    ic();
    return 0; 
}
void br()
{
    printf("Brazil, Russia");
}
void ic()
{
    printf("India, China");
}