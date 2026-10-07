#include<stdio.h>
void one_three();
void two()
{
    printf("two\n");
}
int main(void)
{
    printf("starting now:\n");
    one_three();
    return 0;
}
void one_three()
{
    printf("one\n");
    two();
    printf("three\nDone!");
}