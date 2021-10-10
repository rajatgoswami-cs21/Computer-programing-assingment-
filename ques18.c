#include<stdio.h>
int main()
{
   float length,breadth,Area;

   printf("Enter the length of rectangle : \n");
   scanf("%f",&length);

    printf("Enter the breadth of rectangle ; \n");
   scanf("%f",&breadth);

   Area = (length * breadth);

   printf("The Area of rectangle is : %f",Area);



    return 0;
}