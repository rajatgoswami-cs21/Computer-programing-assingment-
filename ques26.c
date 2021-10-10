#include<stdio.h>
int main ()
{
  float a1,a2,a3;

  printf("Enter the first angle : \n");
  scanf("%f",&a1);

  printf("Enter the second angle : \n");
  scanf("%f",&a2);

  a3=180-(a1+a2);

 printf("Third angle is %.2f",a3);
    return 0;
}