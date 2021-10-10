#include<stdio.h>
int main()
{
   float celsius,F;

   printf("Enter the Temprature in celsius : \n");
   scanf("%f",&celsius);

   F = 1.8 * celsius + 32;

   printf("The temprature in F is : %f",F);

   return 0;
}