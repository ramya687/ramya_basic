#include <stdio.h>
int main()
{
    int month,year;
    scanf("%d",&month);
    scanf("%d",&year);
    switch (month)
    {
         case 1:
         printf("january \n");
         printf("it has 31 days \n");
         break;
         case 2:
         printf("febraury \n");
         if((year%4==0)&&(year%100!=0)||(year%400==0))
         printf("leap year and 29 days");
         else
         printf("28 days");
         break;
         case 3:
         printf("march \n");
         printf("it has 31 days");
         break;
         case 4:
         printf("april \n");
         printf("it has 30 days");
         break;
         case 5:
         printf("may \n");
         printf("it has 31 days");
         break;
         case 6:
         printf("june \n");
         printf("it has 30 days");
         break;
         default:
         printf("nera punnagai");
         return 0;
    }
}

