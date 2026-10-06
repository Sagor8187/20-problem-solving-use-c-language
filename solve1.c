#include <stdio.h>
int main()
{
   int total_day, day ,month,year,remain_day;
   printf("Enter the all day here :");
   scanf("%d",&total_day);
   year = total_day / 365;
   remain_day = total_day % 365;
   month = remain_day / 30;
  
   day= remain_day % 30;
   printf("%d years %d month %d days ",year,month,day);
}