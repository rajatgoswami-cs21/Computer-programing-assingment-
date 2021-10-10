#include<stdio.h>
int main()
{
   float days,year,weeks;

   printf("Enter the number of days : \n");
   scanf("%f",&days);

   year=days/365;
   weeks=year*52;

   printf("Number of years %.2f\n",year);
   printf("Number of weeks %.2f",weeks);

    return 0;
}