#include<stdio.h>
int main()
{
    float r,V;

    printf("Enter the radius of sphere : ");
    scanf("%f",&r);

 V = 1.333*3.14*r*r*r;

  printf("Volume of the sphere is approximately  %f",V);

    return 0;
}