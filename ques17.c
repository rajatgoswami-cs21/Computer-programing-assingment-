#include<stdio.h>
int main()
{
   float length,breadth,perimeter;

   printf("Enter the length of rectangle : \n");
   scanf("%f",&length);

    printf("Enter the breadth of rectangle ; \n");
   scanf("%f",&breadth);

   perimeter = 2* (length + breadth);

   printf("The perimeter of rectangle is : %f",perimeter);



    return 0;
}