#include <stdio.h>

int main()
{
    int  years,months,week,days;
   printf("Enter Number of days\n");
   scanf("%d",&days); 
   years= days/365;
   days=days%365;
   months= days/30;
   days=days%30;
   week=days/7;
   days=days%7;

   printf("years=%d\n", years);
   printf("months=%d\n", months);
   printf("week=%d\n", week);
   printf("days=%d\n", days);

   return 0;
}