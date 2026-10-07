#include<stdio.h>
void Smile()
{
    printf("Smile!");
}
int main(void)
{
    for(auto i{0};i<3;i++)
    Smile();
    printf("\n");
    for(auto i{0};i<2;i++)
    Smile();
    printf("\n");
    Smile();
    return 0;
}
