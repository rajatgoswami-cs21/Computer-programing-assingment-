#include<stdio.h>
int main()
{
   float celsius,fahrenheit;

   printf("Enter the Temprature in fahrenheit : \n");
   scanf("%f",&fahrenheit);

   celsius = (fahrenheit-32) * 5/9 ;

   printf("The temprature in celcius is : %f",celsius);

   return 0;
}