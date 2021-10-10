#include<stdio.h>
#include<math.h>
int main()
{
    float side,area;

     printf("Enter the side of triangle : \n");
    scanf("%f",&side);

    area = sqrt(3)/4*side*side;

  printf("Area of triangle is %.2f",area);

    return 0;
}