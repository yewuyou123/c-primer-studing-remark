#include<stdio.h>
int main(void)
{
    int year=2006,month=9,days=17;
    int now_year=2026,now_month=3,now_days=30;
    int total_days;
    total_days=(now_year-year-1)*365+(12+now_month-month)*30+now_days-days;
    printf("the total days is %d",total_days);
    return 0;
}