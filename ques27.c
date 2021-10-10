#include<stdio.h>
int main()
{
    float base,height,area;

     printf("Enter the base of triangle : \n");
    scanf("%f",&base);

     printf("Enter the height of triangle : \n");
    scanf("%f",&height);

    area = 0.5*base*height;


  printf("Area of triangle is %.2f",area);




    return 0;
}