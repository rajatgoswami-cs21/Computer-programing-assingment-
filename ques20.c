#include<stdio.h>
int main()
{
   float centimeter,meter,kilometer;

   printf("Enter the length in centimeter : \n");
   scanf("%f",&centimeter);

   meter = centimeter/100;
   kilometer = centimeter/100000;

   printf("The value in meter is : %f meter\n",meter);
   printf("The value in kilometer is : %f kilometer\n",kilometer);

    return 0;
}