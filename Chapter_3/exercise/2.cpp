#include <stdio.h>
int main()
{
    int i;
    char ch;
    printf("please enter an integer:___\b\b\b");
    scanf("%d", &i);
    ch = i;
    printf("the integer is coresponsed to %c", ch);
    return 0;
}